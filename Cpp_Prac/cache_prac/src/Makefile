ODIR	=	objs

_IDIR	=	../include
IDIR	=	-I$(_IDIR)

LDIR	=	../lib
CXX	=	g++
EXECUTABLE	=	simx

_DEPS	=	ds.h
DEPS	=	$(patsubst %,$(_IDIR)/%,$(_DEPS))

libs	=	-lds

_OBJ	=	main.o
OBJ	=	$(patsubst %,$(ODIR)/%,$(_OBJ))

.PHONY: all build $(EXECUTABLE) clean

all:	build $(EXECUTABLE)

$(ODIR)/%.o:	%.cpp $(DEPS)	
	$(CXX) -c -o  $@ $< $(IDIR)

$(EXECUTABLE):	$(OBJ)
	$(CXX) -o $@ $^ -L$(LDIR) $(libs) 

build:
	@mkdir -p $(BDIR) $(ODIR)

clean:
	rm -rf $(BDIR) $(EXECUTABLE) $(ODIR)

