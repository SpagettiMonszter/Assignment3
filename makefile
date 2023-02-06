# Make file.

OBJS	= main.o studentInfoImp.o studentGradeDetailsImp.o studentTypeImp.o calculateFeeImp.o 
CC		= g++
CCFLAGS	= -Wall -Wextra -pedantic -std=c++11 -g

DEPS	= studentInfo.h studentGradeDetails.h studentType.h calculateFee.h     

all: main

main: $(OBJS)
	$(CC) $(CCFLAGS) -o main $(OBJS)

main.o:	main.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c main.cpp

studentInfoImp.o: studentInfoImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c studentInfoImp.cpp

studentGradeDetailsImp.o: studentGradeDetailsImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c studentGradeDetailsImp.cpp

studentTypeImp.o: studentTypeImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c studentTypeImp.cpp

calculateFeeImp.o: calculateFeeImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c calculateFeeImp.cpp

	

# -----
# clean by removing object files.

clean:
	rm $(OBJS) main
