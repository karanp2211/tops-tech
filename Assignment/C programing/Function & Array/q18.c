//WAP to show difference between Structure and Union.
//1. Structures (struct):

//Definition: A structure is a user-defined data type available in C that allows combining data items of different kinds. 
//            It is commonly used to represent a record.

//Members: A structure can have more than one member, each with its own data type.

//Memory Allocation: Each member of a structure occupies its own memory location.

//Usage: Structures are useful when you need to store different values for all the members in a unique memory location.

//example:struct Student {
 //       int rollNumber;
//        char name[50];
//        float marks;
//};

//2.Unions (union):

//Definition: A union is a special data type available in C that allows storing different data types in the same memory location.

//Members: A union can have many members, but only one member can hold a value at a time.

//Memory Allocation: All members of a union share the same memory location. The size of the union is determined by the largest member.

//Usage: Unions provide an efficient way of using the same memory location for multiple purposes.

//example:union Currency {
//        int dollars;
//        float euros;
//        char currencyCode[5];
//};

