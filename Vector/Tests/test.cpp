#include "gtest/gtest.h"
#include "../Stud3.h"
#include "../Stud3.cpp"



TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
TEST(StudTest, Constructor) {
    Stud student;
    EXPECT_EQ(student.getVardas(), "");
    EXPECT_EQ(student.getPavarde(), "");
    EXPECT_EQ(student.getEgz(), 0);
    ///EXPECT_EQ(student.getNd(), vector<int>{});
    EXPECT_TRUE(student.getNd().empty());

}

TEST(StudTest, OutputOp) {
    Stud student("John", "Doe", { 10, 9, 8 }, 10);
    student.skaiciuotiGalutiniBala();
    std::ostringstream output;
    output << student;
    EXPECT_TRUE(output.str().find("Doe") != string::npos);
    EXPECT_TRUE(output.str().find("John") != string::npos);
    EXPECT_TRUE(output.str().find("9.6") != string::npos);
}

TEST(StudTest, Setters) {
    Stud student;
    student.setVardas("Algis");
    student.setPavarde("Fol");
    student.setEgz(5);
    student.setNd({ 3, 4, 10, 8 });
}
TEST(StudTest, CopyConstructor) {
    Stud obj1("Jon", "Lok", { 9, 8, 10 }, 2);
    Stud obj2 = obj1;
    EXPECT_EQ(obj2.getVardas(), "Jon");
    EXPECT_EQ(obj2.getPavarde(), "Lok");
    EXPECT_EQ(obj2.getEgz(), 2);
    EXPECT_EQ(obj2.getGalutinisVid(), 0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
