// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Stats>
#include <osgAnimation/Action>
#include <osgAnimation/ActionVisitor>
#include <osgAnimation/AnimationManagerBase>
#include <osgAnimation/StatsVisitor>
#include <osgAnimation/Timeline>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osgAnimation::FrameAction >, osgAnimation::Timeline::ActionList)

TYPE_NAME_ALIAS(std::map< int COMMA  osgAnimation::Timeline::ActionList >, osgAnimation::Timeline::ActionLayers)

BEGIN_ENUM_REFLECTOR(osgAnimation::Timeline::TimelineStatus)
	I_DeclaringFile("osgAnimation/Timeline");
	I_EnumLabel(osgAnimation::Timeline::Play);
	I_EnumLabel(osgAnimation::Timeline::Stop);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgAnimation::Timeline)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osgAnimation::Action);
	I_Constructor0(____Timeline,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgAnimation::Timeline &, nc, , IN, const osg::CopyOp &, op, osg::CopyOp::SHALLOW_COPY,
	                           ____Timeline__C5_Timeline_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method2(, META_Action, IN, osgAnimation, x, IN, osgAnimation::Timeline, x,
	          Properties::NON_VIRTUAL,
	          ____META_Action__osgAnimation__Timeline,
	          "",
	          "");
	I_Method0(osgAnimation::Timeline::TimelineStatus, getStatus,
	          Properties::NON_VIRTUAL,
	          __TimelineStatus__getStatus,
	          "",
	          "");
	I_Method1(const osgAnimation::Timeline::ActionList &, getActionLayer, IN, int, i,
	          Properties::NON_VIRTUAL,
	          __C5_ActionList_R1__getActionLayer__int,
	          "",
	          "");
	I_Method0(unsigned int, getCurrentFrame,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getCurrentFrame,
	          "",
	          "");
	I_Method0(double, getCurrentTime,
	          Properties::NON_VIRTUAL,
	          __double__getCurrentTime,
	          "",
	          "");
	I_Method0(void, play,
	          Properties::NON_VIRTUAL,
	          __void__play,
	          "",
	          "");
	I_Method1(void, gotoFrame, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __void__gotoFrame__unsigned_int,
	          "",
	          "");
	I_Method0(void, stop,
	          Properties::NON_VIRTUAL,
	          __void__stop,
	          "",
	          "");
	I_Method0(bool, getEvaluating,
	          Properties::NON_VIRTUAL,
	          __bool__getEvaluating,
	          "",
	          "");
	I_Method1(bool, isActive, IN, osgAnimation::Action *, activeAction,
	          Properties::NON_VIRTUAL,
	          __bool__isActive__Action_P1,
	          "",
	          "");
	I_Method1(void, removeAction, IN, osgAnimation::Action *, action,
	          Properties::NON_VIRTUAL,
	          __void__removeAction__Action_P1,
	          "",
	          "");
	I_MethodWithDefaults3(void, addActionAt, IN, unsigned int, frame, , IN, osgAnimation::Action *, action, , IN, int, priority, 0,
	                      Properties::VIRTUAL,
	                      __void__addActionAt__unsigned_int__Action_P1__int,
	                      "",
	                      "");
	I_MethodWithDefaults3(void, addActionAt, IN, double, t, , IN, osgAnimation::Action *, action, , IN, int, priority, 0,
	                      Properties::VIRTUAL,
	                      __void__addActionAt__double__Action_P1__int,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, addActionNow, IN, osgAnimation::Action *, action, , IN, int, priority, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__addActionNow__Action_P1__int,
	                      "",
	                      "");
	I_Method0(void, clearActions,
	          Properties::NON_VIRTUAL,
	          __void__clearActions,
	          "",
	          "");
	I_Method1(void, update, IN, double, simulationTime,
	          Properties::VIRTUAL,
	          __void__update__double,
	          "",
	          "");
	I_Method1(void, setLastFrameEvaluated, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __void__setLastFrameEvaluated__unsigned_int,
	          "",
	          "");
	I_Method1(void, setEvaluating, IN, bool, state,
	          Properties::NON_VIRTUAL,
	          __void__setEvaluating__bool,
	          "",
	          "");
	I_Method1(void, traverse, IN, osgAnimation::ActionVisitor &, visitor,
	          Properties::VIRTUAL,
	          __void__traverse__ActionVisitor_R1,
	          "",
	          "");
	I_Method1(void, setStats, IN, osg::Stats *, stats,
	          Properties::NON_VIRTUAL,
	          __void__setStats__osg_Stats_P1,
	          "",
	          "");
	I_Method0(osg::Stats *, getStats,
	          Properties::NON_VIRTUAL,
	          __osg_Stats_P1__getStats,
	          "",
	          "");
	I_Method1(void, collectStats, IN, bool, state,
	          Properties::NON_VIRTUAL,
	          __void__collectStats__bool,
	          "",
	          "");
	I_Method0(osgAnimation::StatsActionVisitor *, getStatsVisitor,
	          Properties::NON_VIRTUAL,
	          __osgAnimation_StatsActionVisitor_P1__getStatsVisitor,
	          "",
	          "");
	I_Method0(const osgAnimation::Timeline::ActionLayers &, getActionLayers,
	          Properties::NON_VIRTUAL,
	          __C5_ActionLayers_R1__getActionLayers,
	          "",
	          "");
	I_Method0(void, processPendingOperation,
	          Properties::NON_VIRTUAL,
	          __void__processPendingOperation,
	          "",
	          "");
	I_Method1(void, setAnimationManager, IN, osgAnimation::AnimationManagerBase *, x,
	          Properties::NON_VIRTUAL,
	          __void__setAnimationManager__AnimationManagerBase_P1,
	          "",
	          "");
	I_ProtectedMethod1(void, internalRemoveAction, IN, osgAnimation::Action *, action,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__internalRemoveAction__Action_P1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, internalAddAction, IN, int, priority, IN, const osgAnimation::FrameAction &, ftl,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__internalAddAction__int__C5_FrameAction_R1,
	                   "",
	                   "");
	I_SimpleProperty(const osgAnimation::Timeline::ActionLayers &, ActionLayers, 
	                 __C5_ActionLayers_R1__getActionLayers, 
	                 0);
	I_SimpleProperty(osgAnimation::AnimationManagerBase *, AnimationManager, 
	                 0, 
	                 __void__setAnimationManager__AnimationManagerBase_P1);
	I_SimpleProperty(unsigned int, CurrentFrame, 
	                 __unsigned_int__getCurrentFrame, 
	                 0);
	I_SimpleProperty(double, CurrentTime, 
	                 __double__getCurrentTime, 
	                 0);
	I_SimpleProperty(bool, Evaluating, 
	                 __bool__getEvaluating, 
	                 __void__setEvaluating__bool);
	I_SimpleProperty(unsigned int, LastFrameEvaluated, 
	                 0, 
	                 __void__setLastFrameEvaluated__unsigned_int);
	I_SimpleProperty(osg::Stats *, Stats, 
	                 __osg_Stats_P1__getStats, 
	                 __void__setStats__osg_Stats_P1);
	I_SimpleProperty(osgAnimation::StatsActionVisitor *, StatsVisitor, 
	                 __osgAnimation_StatsActionVisitor_P1__getStatsVisitor, 
	                 0);
	I_SimpleProperty(osgAnimation::Timeline::TimelineStatus, Status, 
	                 __TimelineStatus__getStatus, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< int COMMA  osgAnimation::Timeline::ActionList >)

