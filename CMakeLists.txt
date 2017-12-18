cmake_minimum_required(VERSION 3.9)
project(Photonics_Analysis)

set(CMAKE_CXX_STANDARD 11)

add_executable(Photonics_Analysis
        src/FragenSteller.c
        src/FragenSteller.h
        src/Main.c
        src/PhotonicsAssistant_Analysis_DE.c
        src/PhotonicsAssistant_Analysis_DE.h
        src/PhotonicsAssistant_Analysis_Main.c
        src/PhotonicsAssistant_Analysis_Main.h
        PhotonicsAssistant_Analysis_Diff2.c
        tempMain.c)
