

#include "algorithm.h"

using namespace std;





///////////////////////////////////////////////////////////////////////////////////////////
//
// Search Algorithm:  UC with Strict Expanded List
//
// Move Generator:  
//
// 1. Initialise Q with search node (S) as only entry; set Expanded = ( )
// 2. If Q is empty, fail. Else, pick search node N with lowest path cost from Q.
// 3. If state (N) is a goal, return N (we’ve reached the goal).
// 4. (Otherwise) Remove N from Q.
// 5. If state (N) in Expanded, go to Step 2; otherwise, add state (N) to Expanded List.
// 6. Find all the children of state(N) (Not in Expanded) and create all the one-step extensions of N to each descendant.
// 7. Add all the extended paths to front of Q. If descendant state already in Q, keep only shorter path to state in Q.
// 8. Go to Step 2.
// 
////////////////////////////////////////////////////////////////////////////////////////////
string uc_explist(string const initialState, string const goalState, int& pathLength, int &numOfStateExpansions, int& maxQLength,
                               float &actualRunningTime, int &numOfDeletionsFromMiddleOfHeap, int &numOfLocalLoopsAvoided, int &numOfAttemptedNodeReExpansions){
   
    string path;
    clock_t startTime;
    string enqueued;

    // According to the dynamic programming optimality principle, if there are multiple search nodes in the Q with the same state, we only need to keep the shorter one.  
    // Every time we delete a node “somewhere in the middle” of the heap, we increment this variable, named numOfDeletionsFromMiddleOfHeap
    numOfDeletionsFromMiddleOfHeap=0;

    // This variable is for counting how many times we prevented extending a node to a state that it has seen before (creating a loop).  
    // We don’t need to do this as we are using the expanded list.  This variable is only useful if the expanded list is not being used.
    numOfLocalLoopsAvoided=0;

    // The number of times that the algorithm attempts to expand a state which is present in the expanded list
    numOfAttemptedNodeReExpansions=0;


    // 1. Initialise Q with search node (S) as only entry; set Expanded = ( )
    enqueued = initialState;

    // 2. If Q is empty, fail. Else, pick search node N with lowest path cost from Q.
    
    // 3. If state (N) is a goal, return N (we’ve reached the goal).

    // 4. (Otherwise) Remove N from Q.

    // 5. If state (N) in Expanded, go to Step 2; otherwise, add state (N) to Expanded List.

    // 6. Find all the children of state(N) (Not in Expanded) and create all the one-step extensions of N to each descendant.

    // 7. Add all the extended paths to front of Q. If descendant state already in Q, keep only shorter path to state in Q.

    // 8. Go to Step 2.



    // cout << "------------------------------" << endl;
    // cout << "<<uc_explist>>" << endl;
    // cout << "------------------------------" << endl;
	actualRunningTime=0.0;	
	startTime = clock();
	srand(time(NULL)); //RANDOM NUMBER GENERATOR - ONLY FOR THIS DEMO.  YOU REALLY DON'T NEED THIS! DISABLE THIS STATEMENT.
	maxQLength= rand() % 200; //AT THE MOMENT, THIS IS JUST GENERATING SOME DUMMY VALUE.  YOUR ALGORITHM IMPLEMENTATION SHOULD COMPUTE THIS PROPERLY.
	numOfStateExpansions = rand() % 200; //AT THE MOMENT, THIS IS JUST GENERATING SOME DUMMY VALUE.  YOUR ALGORITHM IMPLEMENTATION SHOULD COMPUTE THIS PROPERLY


	
	
//***********************************************************************************************************
	actualRunningTime = ((float)(clock() - startTime)/CLOCKS_PER_SEC);
	path = "DDRRLLLUUURDLUDURDLUU"; //this is just a dummy path for testing the function
	pathLength = path.size();
	return path;		
		
}




///////////////////////////////////////////////////////////////////////////////////////////
//
// Search Algorithm:  A* with the Strict Expanded List
//
// Move Generator:  
//
////////////////////////////////////////////////////////////////////////////////////////////
string aStar_ExpandedList(string const initialState, string const goalState, int& pathLength, int &numOfStateExpansions, int& maxQLength,
                               float &actualRunningTime, int &numOfDeletionsFromMiddleOfHeap, int &numOfLocalLoopsAvoided, int &numOfAttemptedNodeReExpansions, heuristicFunction heuristic){
											 
   string path;
   clock_t startTime;
   
   numOfDeletionsFromMiddleOfHeap=0;
   numOfLocalLoopsAvoided=0;
   numOfAttemptedNodeReExpansions=0;


    // cout << "------------------------------" << endl;
    // cout << "<<aStar_ExpandedList>>" << endl;
    // cout << "------------------------------" << endl;
	actualRunningTime=0.0;	
	startTime = clock();
	srand(time(NULL)); //RANDOM NUMBER GENERATOR - ONLY FOR THIS DEMO.  YOU REALLY DON'T NEED THIS! DISABLE THIS STATEMENT.
	maxQLength= rand() % 200; //AT THE MOMENT, THIS IS JUST GENERATING SOME DUMMY VALUE.  YOUR ALGORITHM IMPLEMENTATION SHOULD COMPUTE THIS PROPERLY.
	numOfStateExpansions = rand() % 200; //AT THE MOMENT, THIS IS JUST GENERATING SOME DUMMY VALUE.  YOUR ALGORITHM IMPLEMENTATION SHOULD COMPUTE THIS PROPERLY


	
	
//***********************************************************************************************************
	actualRunningTime = ((float)(clock() - startTime)/CLOCKS_PER_SEC);
	path = "DDRRLLLUUURDLUDURDLUU"; //this is just a dummy path for testing the function
	pathLength = path.size();
	return path;		
		
}

