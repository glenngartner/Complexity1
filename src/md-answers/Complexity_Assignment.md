Algorithm Complexity Assignment 2
--

1. The big O notation is Constant O(1).

    ```rb
    def goodbye_world(n)
    puts "Goodbye World! #{n}" # only executes this once, despite the size of n
    end
    ```

2. The big O notation is linear, nearly O(2N), which is the same complexity as O(N).

    ```rb
    def find_largest(collection)
     largest = collection[0] # only runs once (constant)
     collection.length.times do |i| # runs for every element of collection O(N)
       if collection[i] >= largest # worst case, this runs for every element after 0, so another O(N)
         largest = collection[i]
       end
     end
     largest
    end
    ```
    
3.  The big O notation is O(N^2).
    ```rb
    
    def find_largest(collection)
     largest = collection[0][0] # only runs once (constant) O(1) - negligible, considering greater complexity
     collection.length.times do |i| # runs for every element of collection, linear, O(N)
       subcollection = collection[i] # runs once (constant) O(1) - negligible, considering greater complexity
       subcollection.length.times do |i| # runs for every element in the second array, linear, O(N) - makes N^2.
         if subcollection[i] >= largest # may run for every element in the sub array, worst case O(N) - makes 2N^2 (I think) - same as N^2.
           largest = subcollection[i]
         end
       end
     end
     largest
    end
    ```
    
4. The big O notation is O(2^(N)).
    ```rb
   def numbers(n)
     if (n == 0) # runs once. if it does, returns out of function - constant O(1)
       return 0
     elsif (n == 1) # runs once. if it does, returns out of function - constant O(1)
       return 1
     else # 
       return numbers(n-1) + numbers(n-2) # it calls itself twice 2, and multiples times, depending on the size of N, caused O(2^N)?
     end
    end 
    ```
    
5.  The big O notation is O(N);
    ```rb
    def iterative(n)
     num1 = 0 # constant O(1)
     num2 = 1 # constant O(1)
    
     i = 0 # constant O(1)
     while i < n-1 # runs n times (actually, n-1, but we forget the -1)
       tmp = num1 + num2 # constant
       num1 = num2 # constant
       num2 = tmp # const
       i+=1 # const
     end
    
     num2
    end
    ```
    
6. The big O complexity is 2N^N

    ```rb
    def sort(collection, from=0, to=nil)
     if to == nil # constant, or less than 
       # Sort the whole collection, by default
       to = collection.count - 1 # constant
     end
    
     if from >= to # constant, or less than
       # Done sorting
       return
     end
    
     # Take a pivot value, at the far left
     pivot = collection[from] # constant
    
     # Min and Max pointers
     min = from # constant
     max = to # constant
    
     # Current free slot
     free = min # constant
    
     while min < max # depends on the values of min and max (from and to)- so, N
       if free == min # Evaluate collection[max]
         if collection[max] <= pivot # Smaller than pivot, must move
           collection[free] = collection[max]
           min += 1
           free = max
         else
           max -= 1
         end
       elsif free == max # Evaluate collection[min]
         if collection[min] >= pivot # Bigger than pivot, must move
           collection[free] = collection[min]
           max -= 1
           free = min
         else
           min += 1
         end
       else
         raise "Inconsistent state"
       end
     end
    
     collection[free] = pivot # constant
    
     sort collection, from, free - 1 # recursive, causes ^N
     sort collection, free + 1, to # 2 second recursion, adds 2 in front of the base N.
    
     collection
    end
    
    ```