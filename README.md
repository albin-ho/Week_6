Warm Up Exercises Week 6


    1. Construct a class called Vector that holds has two doubles as data (the x and y component of the vector respectively). Write functions of this class that 
        (i) Assign a value to each component
        (ii) The constructor of the class must assign values to each component
        (iii) Overload the constructor to set the two components to zero
        (iv) The class must have setter methods that sets the values of the data which is declared in the private interface
        (v) OPTIONAL: Add the corresponding components of two vectors to form the resultant (best to use friend functions) 
      double friend addvecx(Vector a, Vector b) {return a.x+b.x;}
	double friend addvecy(Vector a, Vector b) {return a.y+b.y;}
WE WILL COVER FRIENDS LATER IN THE COURSE.
 
    2. To define a point in two dimensions it is most common to use the form (x,y) called Cartesian coordinates. Create a class point which describes points in this way. Write appropriate constructors and member functions which calculate the length of the hypotenuse formed by the point (x,y), find also its argument (i.e. the angle made with the positive x-axis). The value of the hypotenuse is d where 

    3. In the previous exercise, points were declared using Cartesian coordinates. An alternative way of defining points is using polar coordinates (r,θ)  where r is the distance of the point from (0,0) and θ the angle made with the positive x axis. The conversions from (x ,y) to (r,θ) are
      x=rcos(θ)
      y=rsin(θ)

after creating a point convert it to polar form using the transformations above.

    4. Write a class called shape with attributes (data) length, width and height
      Write methods that return the area (if it is a two dimensional figure and perimeter (or circumference if your shape is a circle). 
If your figure is three dimensional (stick to cubes or cuboids) write a function that determines the volume (and perhaps the surface area, this gets a bit tedious though). Overload your constructor such that you can assign values to one of the attributes, two of the attributes, three of the attributes or none of the attributes. The class must have mutator functions that change the values of the width, length and height respectively and accessor functions that return these data items.



    5. OPTIONAL Write a class called complex which declares a complex number z=a+ib where a and b are real numbers and i2 = -1. Write methods to add, subtract and multiply two complex numbers. 
      Hint if z = a + ib and w = c + id, then
      z + w =a + c + i(b + d)
      z - w =a – c + i(b - d)
      wz = ac – bd + i(ad + bc)

Division is a bit trickier, but you can do this if you know how to divide two complex numbers, if not you can use (a+ib)/(c+id) = (a+ib)(c-id)/(a2+ b2), so if you have implemented the multiplication method, you can then divide two complex numbers.

