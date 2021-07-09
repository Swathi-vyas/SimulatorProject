SYSTEMC_INC_DIR	=	$(SYSTEMC_HOME)/include
SYSTEMC_LIB_DIR	=	$(SYSTEMC_HOME)/lib

CXX	=	g++

INCDIR	=	-I. -I.. -I$(SYSTEMC_INC_DIR) -I../include
LIBDIR	=	-L. -L.. -L$(SYSTEMC_LIB_DIR) -L../lib

PROJECT	=	first_counter
SRCS	=	$(wildcard *.cpp)
OBJS	=	$(SRCS: .cpp=.o)

SYSTEMC_LIBS	=	-lsystemc -lm

EXECUTABLE=simx

.PHONY: all build $(EXECUTABLE) clean

all: $(EXECUTABLE)

$(EXECUTABLE):	$(OBJS)
	$(CXX) $(INCDIR) $(LIBDIR) -o $@ $^ $(SYSTEMC_LIBS)

build:
	@mkdir -p bin

clean:
	rm -rf bin $(EXECUTABLE) $(ODIR)/*.o simx $(SIM_DIR)/*.vcd
