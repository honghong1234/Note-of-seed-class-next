# 
# Synthesis run script generated by Vivado
# 

set_param xicom.use_bs_reader 1
debug::add_scope template.lib 1
set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z010clg400-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.cache/wt [current_project]
set_property parent.project_path C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part digilentinc.com:zybo:part0:1.0 [current_project]
read_verilog -library xil_defaultlib {
  C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.srcs/sources_1/imports/OrginalPongZyboSpring2019/GameZybo.v
  C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.srcs/sources_1/imports/OrginalPongZyboSpring2019/ClockGenerator.v
  C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.srcs/sources_1/imports/OrginalPongZyboSpring2019/PongZybo2019spring.v
}
read_xdc C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.srcs/constrs_1/imports/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019xdc.xdc
set_property used_in_implementation false [get_files C:/Users/yizii/Desktop/yzh/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019.srcs/constrs_1/imports/OrginalPongZyboSpring2019/OriginalPongZyboSpring2019xdc.xdc]

synth_design -top pongZybo2019spring -part xc7z010clg400-1
write_checkpoint -noxdef pongZybo2019spring.dcp
catch { report_utilization -file pongZybo2019spring_utilization_synth.rpt -pb pongZybo2019spring_utilization_synth.pb }
