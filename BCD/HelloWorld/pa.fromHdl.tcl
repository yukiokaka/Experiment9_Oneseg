
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

hdi::project new -name HelloWorld -dir "/home/oneseg13/temp/HelloWorld/planAhead_run_2"
hdi::project setArch -name HelloWorld -arch virtex5
hdi::design setOptions -project HelloWorld -top sysele  
hdi::param set -name project.paUcfFile -svalue "sysele.ucf"
hdi::floorplan new -name floorplan_1 -part xc5vlx30ff676-1 -project HelloWorld
hdi::port import -project HelloWorld \
    -verilog {num2char.v work} \
    -verilog {lcd_memory.v work} \
    -verilog {lcd_control.v work} \
    -verilog {lcd_comm.v work} \
    -verilog {ber.v work} \
    -verilog {switch.v work} \
    -verilog {rstgen.v work} \
    -verilog {lcd_ber_top.v work} \
    -verilog {lcd.v work} \
    -verilog {pll2.v work} \
    -verilog {pll.v work} \
    -verilog {top.v work}
hdi::port export -project HelloWorld -file HelloWorld_pa_ports.v -format verilog
hdi::pconst import -project HelloWorld -floorplan floorplan_1 -file "sysele.ucf"
