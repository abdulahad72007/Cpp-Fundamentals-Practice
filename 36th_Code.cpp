/*
   -----------------------------------------------------------
   C++ INHERITANCE NOTES (Video 36)
   -----------------------------------------------------------

   1. WHAT IS INHERITANCE?
      Definition: It is a process in which one object acquires all the 
      properties and behaviors of a parent object. 
      (Asaan lafzon mein: Aik purani class ki khoobiyan nayi class mein lana).

   2. WHY USE IT?
      - Reusability: To reuse the fields and methods of an existing class.
      - DRY Principle: Don't Repeat Yourself (Code baar baar nahi likhna parta).

   3. TERMINOLOGY:
      - Base Class: The class whose features are inherited (Parent/Dada).
      - Derived Class: The class that inherits those features (Child/Pota).

   4. TYPES OF INHERITANCE & DEFINITIONS:

      A. Single Inheritance:
         Def: A derived class with only one base class.
         Example: A -> B

      B. Multiple Inheritance:
         Def: A derived class with more than one base class.
         Example: (A + B) -> C

      C. Hierarchical Inheritance:
         Def: Several derived classes are created from a single base class.
         Example: A -> B AND A -> C

      D. Multilevel Inheritance:
         Def: Deriving a class from an already derived class.
         Example: A -> B -> C

      E. Hybrid Inheritance:
         Def: A combination of multiple and multilevel inheritance.
         Example: A mix of different structures.
    -----------------------------------------------------------*/