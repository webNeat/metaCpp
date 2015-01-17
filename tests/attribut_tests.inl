#ifndef TEST_ATTRIBUT_INCLUDED
#define TEST_ATTRIBUT_INCLUDED

#include "attribut.hpp"

TEST ( TestAttribut, Accesseurs ) {
   Attribut a("int", "a"), b(a);
   EXPECT_EQ(a.getType(), "int");
   EXPECT_EQ(a.getName(), "a");
   EXPECT_EQ(b.getType(), "int");
   EXPECT_EQ(b.getName(), "a");
   b.setName("b");
   b.setType("vector<int>");
   EXPECT_EQ(b.getType(), "vector<int>");
   EXPECT_EQ(b.getName(), "b");
}

#endif