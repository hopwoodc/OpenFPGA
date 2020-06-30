#ifndef BUILD_ROUTING_MODULE_UTILS_H
#define BUILD_ROUTING_MODULE_UTILS_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/

#include <vector>
#include <tuple>
#include "rr_gsb.h"
#include "module_manager.h"
#include "vpr_types.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

std::pair<ModulePortId, size_t> find_switch_block_module_chan_port(const ModuleManager& module_manager, 
                                                                   const ModuleId& sb_module,
                                                                   const RRGraph& rr_graph,
                                                                   const RRGSB& rr_gsb, 
                                                                   const e_side& chan_side,
                                                                   const RRNodeId& cur_rr_node,
                                                                   const PORTS& cur_rr_node_direction);

std::pair<ModulePortId, size_t> find_switch_block_module_input_port(const ModuleManager& module_manager,
                                                                    const ModuleId& sb_module, 
                                                                    const RRGraph& rr_graph,
                                                                    const RRGSB& rr_gsb, 
                                                                    const e_side& input_side,
                                                                    const RRNodeId& input_rr_node);

std::vector<std::pair<ModulePortId, size_t>> find_switch_block_module_input_ports(const ModuleManager& module_manager,
                                                                                  const ModuleId& sb_module, 
                                                                                  const RRGraph& rr_graph,
                                                                                  const RRGSB& rr_gsb, 
                                                                                  const std::vector<RRNodeId>& input_rr_nodes);

std::pair<ModulePortId, size_t> find_connection_block_module_chan_port(const ModuleManager& module_manager, 
                                                                       const ModuleId& cb_module,
                                                                       const RRGraph& rr_graph,
                                                                       const RRGSB& rr_gsb, 
                                                                       const t_rr_type& cb_type,
                                                                       const RRNodeId& chan_rr_node);

ModulePortId find_connection_block_module_ipin_port(const ModuleManager& module_manager,
                                                    const ModuleId& cb_module, 
                                                    const RRGraph& rr_graph,
                                                    const RRGSB& rr_gsb, 
                                                    const RRNodeId& src_rr_node);

std::vector<std::pair<ModulePortId, size_t>> find_connection_block_module_input_ports(const ModuleManager& module_manager,
                                                                                      const ModuleId& cb_module,
                                                                                      const RRGraph& rr_graph,
                                                                                      const RRGSB& rr_gsb, 
                                                                                      const t_rr_type& cb_type,
                                                                                      const std::vector<RRNodeId>& input_rr_nodes);

} /* end namespace openfpga */

#endif
