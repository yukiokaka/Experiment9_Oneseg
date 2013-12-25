
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

hdi::project new -name HelloWorld -dir "/home/oneseg13/temp/HelloWorld/planAhead_run_2"
hdi::project setArch -name HelloWorld -arch virtex5
hdi::design setOptions -project HelloWorld -top netlist_1_EMPTY
hdi::param set -name project.paUcfFile -svalue "sysele.ucf"
hdi::floorplan new -name floorplan_1 -part xc5vlx30ff676-1 -project HelloWorld
hdi::port import -project HelloWorld -verilog {HelloWorld_pa_ports.v work}
hdi::pconst import -project HelloWorld -floorplan floorplan_1 -file "sysele.ucf"
