#COMPILER
PATH_OBJECTS 	= OpenSMOKE_SurfaceChemistry/$(OBJ_PATH)
PATH_CPP 	= ../../cpp/surfaceChemistry
PATH_HPP 	= ../../hpp/surfaceChemistry

# OBJECT FILES
OBJS =  $(PATH_OBJECTS)/OpenSMOKE_ReactingSurface.o \
	$(PATH_OBJECTS)/OpenSMOKE_SurfaceBulk.o \
	$(PATH_OBJECTS)/OpenSMOKE_SurfaceKinetics.o \
	$(PATH_OBJECTS)/OpenSMOKE_SurfaceMaterial.o \
	$(PATH_OBJECTS)/OpenSMOKE_SurfaceReaction.o \
	$(PATH_OBJECTS)/OpenSMOKE_SurfaceSite.o \
	$(PATH_OBJECTS)/OpenSMOKE_SurfaceThermodynamics.o


# MAIN TARGET
../../lib/linux/$(OBJ_PATH)/libOpenSMOKE_SurfaceChemistry_$(STRING_NAME).a : $(OBJS)
	ar rc ../../lib/linux/$(OBJ_PATH)/libOpenSMOKE_SurfaceChemistry_$(STRING_NAME).a $(OBJS)


# MAKE
$(PATH_OBJECTS)/OpenSMOKE_ReactingSurface.o : $(PATH_CPP)/OpenSMOKE_ReactingSurface.cpp $(PATH_HPP)/OpenSMOKE_ReactingSurface.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_ReactingSurface.cpp -o $(PATH_OBJECTS)/OpenSMOKE_ReactingSurface.o

$(PATH_OBJECTS)/OpenSMOKE_SurfaceBulk.o : $(PATH_CPP)/OpenSMOKE_SurfaceBulk.cpp $(PATH_HPP)/OpenSMOKE_SurfaceBulk.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_SurfaceBulk.cpp -o $(PATH_OBJECTS)/OpenSMOKE_SurfaceBulk.o

$(PATH_OBJECTS)/OpenSMOKE_SurfaceKinetics.o : $(PATH_CPP)/OpenSMOKE_SurfaceKinetics.cpp $(PATH_HPP)/OpenSMOKE_SurfaceKinetics.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_SurfaceKinetics.cpp -o $(PATH_OBJECTS)/OpenSMOKE_SurfaceKinetics.o

$(PATH_OBJECTS)/OpenSMOKE_SurfaceMaterial.o : $(PATH_CPP)/OpenSMOKE_SurfaceMaterial.cpp $(PATH_HPP)/OpenSMOKE_SurfaceMaterial.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_SurfaceMaterial.cpp -o $(PATH_OBJECTS)/OpenSMOKE_SurfaceMaterial.o

$(PATH_OBJECTS)/OpenSMOKE_SurfaceReaction.o : $(PATH_CPP)/OpenSMOKE_SurfaceReaction.cpp $(PATH_HPP)/OpenSMOKE_SurfaceReaction.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_SurfaceReaction.cpp -o $(PATH_OBJECTS)/OpenSMOKE_SurfaceReaction.o
	
$(PATH_OBJECTS)/OpenSMOKE_SurfaceSite.o : $(PATH_CPP)/OpenSMOKE_SurfaceSite.cpp $(PATH_HPP)/OpenSMOKE_SurfaceSite.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_SurfaceSite.cpp -o $(PATH_OBJECTS)/OpenSMOKE_SurfaceSite.o

$(PATH_OBJECTS)/OpenSMOKE_SurfaceThermodynamics.o : $(PATH_CPP)/OpenSMOKE_SurfaceThermodynamics.cpp $(PATH_HPP)/OpenSMOKE_SurfaceThermodynamics.h
		 	 $(CCP) $(PATH_CPP)/OpenSMOKE_SurfaceThermodynamics.cpp -o $(PATH_OBJECTS)/OpenSMOKE_SurfaceThermodynamics.o
		 	 
clean:
	-rm $(PATH_OBJECTS)/*.o ../../lib/linux/$(OBJ_PATH)/libOpenSMOKE_SurfaceChemistry_$(STRING_NAME).a

