//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef _SMARTPLANNERBREADTHFIRSTSEARCHIMPL_HH
#define _SMARTPLANNERBREADTHFIRSTSEARCHIMPL_HH

#include "aceSmartSoft.hh"

class SmartPlannerBreadthFirstSearchImpl : public SmartACE::SmartComponent {
public:
	SmartPlannerBreadthFirstSearchImpl(const std::string &componentName, int & argc, char ** argv);
	SmartPlannerBreadthFirstSearchImpl(const std::string &componentName, int & argc, char ** argv, const ACE_Sched_Params &sched_params);
	virtual ~SmartPlannerBreadthFirstSearchImpl();

	Smart::StatusCode run(void);
	void closeAllAssociatedTasks(const int &taskShutdownTimeLimit);
	void cleanUpComponentResources();
};

#endif
