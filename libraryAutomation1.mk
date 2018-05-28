##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=libraryAutomation1
ConfigurationName      :=Debug
WorkspacePath          :=/home/senior/Belgeler/deneme
ProjectPath            :=/home/senior/Belgeler/deneme/libraryAutomation1
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mustafa TURKMEN
Date                   :=17/05/18
CodeLitePath           :=/home/senior/.codelite
LinkerName             :=gcc
SharedObjectLinkerName :=gcc -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="libraryAutomation1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := gcc
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/sil.c$(ObjectSuffix) $(IntermediateDirectory)/listele.c$(ObjectSuffix) $(IntermediateDirectory)/ekle.c$(ObjectSuffix) $(IntermediateDirectory)/menu.c$(ObjectSuffix) $(IntermediateDirectory)/ara.c$(ObjectSuffix) $(IntermediateDirectory)/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/sil.c$(ObjectSuffix): sil.c $(IntermediateDirectory)/sil.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/senior/Belgeler/deneme/libraryAutomation1/sil.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sil.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sil.c$(DependSuffix): sil.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sil.c$(ObjectSuffix) -MF$(IntermediateDirectory)/sil.c$(DependSuffix) -MM sil.c

$(IntermediateDirectory)/sil.c$(PreprocessSuffix): sil.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sil.c$(PreprocessSuffix) sil.c

$(IntermediateDirectory)/listele.c$(ObjectSuffix): listele.c $(IntermediateDirectory)/listele.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/senior/Belgeler/deneme/libraryAutomation1/listele.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/listele.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/listele.c$(DependSuffix): listele.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/listele.c$(ObjectSuffix) -MF$(IntermediateDirectory)/listele.c$(DependSuffix) -MM listele.c

$(IntermediateDirectory)/listele.c$(PreprocessSuffix): listele.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/listele.c$(PreprocessSuffix) listele.c

$(IntermediateDirectory)/ekle.c$(ObjectSuffix): ekle.c $(IntermediateDirectory)/ekle.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/senior/Belgeler/deneme/libraryAutomation1/ekle.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ekle.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ekle.c$(DependSuffix): ekle.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ekle.c$(ObjectSuffix) -MF$(IntermediateDirectory)/ekle.c$(DependSuffix) -MM ekle.c

$(IntermediateDirectory)/ekle.c$(PreprocessSuffix): ekle.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ekle.c$(PreprocessSuffix) ekle.c

$(IntermediateDirectory)/menu.c$(ObjectSuffix): menu.c $(IntermediateDirectory)/menu.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/senior/Belgeler/deneme/libraryAutomation1/menu.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menu.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menu.c$(DependSuffix): menu.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/menu.c$(ObjectSuffix) -MF$(IntermediateDirectory)/menu.c$(DependSuffix) -MM menu.c

$(IntermediateDirectory)/menu.c$(PreprocessSuffix): menu.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menu.c$(PreprocessSuffix) menu.c

$(IntermediateDirectory)/ara.c$(ObjectSuffix): ara.c $(IntermediateDirectory)/ara.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/senior/Belgeler/deneme/libraryAutomation1/ara.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ara.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ara.c$(DependSuffix): ara.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ara.c$(ObjectSuffix) -MF$(IntermediateDirectory)/ara.c$(DependSuffix) -MM ara.c

$(IntermediateDirectory)/ara.c$(PreprocessSuffix): ara.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ara.c$(PreprocessSuffix) ara.c

$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/senior/Belgeler/deneme/libraryAutomation1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


