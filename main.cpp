/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types in plain-English, 
    in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits.
    Note: Your 10th UDT will use 5 of your UDTs for its properties, so maybe start on UDT #10 first. This goes along with instruction #6.
************************
    Commit after you complete this step so i can review before you proceed with the rest of the projects
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    Copy your 3+5 comments into your struct body.
    comment them out.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    this nested class also needs member functions.
    this nested class is not considered one of your 10 UDTs.
 
 6) One of your 10 UDTs should only use UDTs for its member variable types.   
    No primitives allowed!
    it still needs member variables.
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) has vacuum cleaners
    2) has eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    bool hasVacuumCleaners = true; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    bool hasEcoFriendlyCleaningSupplies = true; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1) Bedroom
5 properties:
    1) Has Bed
    2) Stores Clothes
    3) Has alarm clock
    4) Can sleep multiple people
    5) Has en suite
3 things it can do:
    1) Lock the door
    2) Turn out the light
    3) allow people to sleep
 */

/*
2) Electricity cables
5 properties:
    1) insulated
    2) made from copper
    3) length of cable 
    4) amount of electricity
    5) Gauge
3 things it can do:
    1) Turn electricity On
    2) Overheat
    3) Flip Circuit Breaker
 */

/*
3) Water Pipe
5 properties:
    1) Made from PVC
    2) Length of  pipe
    3) Diameter of pipe
    4) Number of nodes
    5) Thickness of Wall
3 things it can do:
    1) Pass water to shower
    2) Take water from boiler
    3) Pass water to wahsing machine
 */

/*
4) Bricks
5 properties:
    1) Made from Sandstone
    2) Is 6 inches high
    3) Is 12 inches wide
    4) Is 8 inches Deep
    5) Has Grooves
3 things it can do:
    1) Resist Wind
    2) Make house
    3) Resist water
 */

/*
5) Window
5 properties:
    1) Size
    2) Tickness of glass
    3) Number of panes
    4) Frosted glass
    5) Wodden Frame type
3 things it can do:
    1) Open
    2) Close
    3) Let in Light
 */

/*
6) Keyboard
5 properties:
    1) Number of octaves
    2) Presure sensitive
    3) Weighted Keys
    4) Number of sound presets
    5) Has Sustain Pedal
3 things it can do:
    1) Make Piano Sound
    2) Ouput midi notes
    3) Power on
 */

/*
7) Guitar
5 properties:
    1) Type of Wood
    2) Number of Frets 
    3) Size of Neck
    4) Shape of Noise hole
    5) Number of Strings
3 things it can do:
    1) Vibrate Strings
    2) Resonate Body
    3) Induce Electric Current
 */

/*
8) Cup
5 properties:
    1) Size
    2) Handel type
    3) Picture On it
    4) Material it is made from
    5) Shape 
3 things it can do:
    1) Store Liquid
    2) Empty Liquid
    3) Store Pens
 */

/*
9) Speaker
5 properties:
    1) Number of Cones
    2) type of Cones
    3) Cone Size
    4) Has a builtin amp
    5) Has grill
3 things it can do:
    1) Vibrate Cones
    2) Push Air Molecules
    3) Amplify Sound
 */

/*
10) House
5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
    1) Has Bedrooms
    2) Has running Water
    3) Has Electricity
    4) Made of bricks
    5) Has windows
3 things it can do:
    1) House People
    2) Open windows
    3) Open doors
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
