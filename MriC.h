// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p13
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be\be_codegen.cpp:152

#ifndef _TAO_IDL_MRIC_GHSYHV_H_
#define _TAO_IDL_MRIC_GHSYHV_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "mriCommon_Export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO mriCommon_Export

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:38

namespace Mri
{

  // TAO_IDL - Generated from
  // be\be_type.cpp:261

  struct Aux2Strings;

  typedef
    ::TAO_Var_Var_T<
        Aux2Strings
      >
    Aux2Strings_var;

  typedef
    ::TAO_Out_T<
        Aux2Strings
      >
    Aux2Strings_out;

  // TAO_IDL - Generated from
  // be\be_visitor_structure\structure_ch.cpp:51

  struct mriCommon_Export Aux2Strings
  {

    // TAO_IDL - Generated from
    // be\be_type.cpp:307

    
    typedef Aux2Strings_var _var_type;
    typedef Aux2Strings_out _out_type;
    
    ::CORBA::Long receiverId;
    ::CORBA::Long senderId;
    ::TAO::String_Manager str1;
    ::TAO::String_Manager str2;
    ::TAO::String_Manager tag;
  };

  // TAO_IDL - Generated from
  // be\be_type.cpp:261

  struct V2XMessage;

  typedef
    ::TAO_Var_Var_T<
        V2XMessage
      >
    V2XMessage_var;

  typedef
    ::TAO_Out_T<
        V2XMessage
      >
    V2XMessage_out;

  // TAO_IDL - Generated from
  // be\be_visitor_structure\structure_ch.cpp:51

  struct mriCommon_Export V2XMessage
  {

    // TAO_IDL - Generated from
    // be\be_type.cpp:307

    
    typedef V2XMessage_var _var_type;
    typedef V2XMessage_out _out_type;
    
    ::CORBA::Long sender_id;
    ::CORBA::Long sender_timestamp;
    ::TAO::String_Manager message;
    ::CORBA::Long recipient_id;
    ::CORBA::Long recipient_timestamp;
  };

  // TAO_IDL - Generated from
  // be\be_type.cpp:261

  struct VehData;

  typedef
    ::TAO_Var_Var_T<
        VehData
      >
    VehData_var;

  typedef
    ::TAO_Out_T<
        VehData
      >
    VehData_out;

  // TAO_IDL - Generated from
  // be\be_visitor_structure\structure_ch.cpp:51

  struct mriCommon_Export VehData
  {

    // TAO_IDL - Generated from
    // be\be_type.cpp:307

    
    typedef VehData_var _var_type;
    typedef VehData_out _out_type;
    
    ::CORBA::Long timestamp;
    ::CORBA::Long vehicle_id;
    ::CORBA::Long vehicle_type;
    ::TAO::String_Manager model_file_name;
    ::CORBA::Long color;
    ::CORBA::Double position_x;
    ::CORBA::Double position_y;
    ::CORBA::Double position_z;
    ::CORBA::Double orient_heading;
    ::CORBA::Double orient_pitch;
    ::CORBA::Double orient_roll;
    ::CORBA::Double speed;
    ::CORBA::Long leading_vehicle_id;
    ::CORBA::Long trailing_vehicle_id;
    ::CORBA::Long link_id;
    ::TAO::String_Manager link_name;
    ::CORBA::Double link_coordinate;
    ::CORBA::Long lane_index;
    ::CORBA::Long turning_indicator;
  };

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:67

} // module Mri

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Mri::Aux2Strings>
    : public
        Var_Size_Arg_Traits_T<
            ::Mri::Aux2Strings,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Mri::V2XMessage>
    : public
        Var_Size_Arg_Traits_T<
            ::Mri::V2XMessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Mri::VehData>
    : public
        Var_Size_Arg_Traits_T<
            ::Mri::VehData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

mriCommon_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Mri::Aux2Strings &);
mriCommon_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Mri::Aux2Strings &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

mriCommon_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Mri::V2XMessage &);
mriCommon_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Mri::V2XMessage &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

mriCommon_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Mri::VehData &);
mriCommon_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Mri::VehData &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "MriC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

