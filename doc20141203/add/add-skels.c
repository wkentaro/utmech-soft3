/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#include <string.h>
#define ORBIT2_STUBS_API
#include "add.h"

static ORBitSmallSkeleton get_skel_small_AddApp_Add(POA_AddApp_Add *servant,
const char *opname,gpointer *m_data, gpointer *impl)
{
switch(opname[0]) {
case 'a':
if(strcmp((opname + 1), "ddInts")) break;
*impl = (gpointer)servant->vepv->AddApp_Add_epv->addInts;
{ORBit_IInterface *volatile _t_=&AddApp_Add__iinterface;*m_data = (gpointer)&_t_->methods._buffer [0];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_AddApp_Add_addInts;
break;
default: break; 
}
return NULL;
}

void POA_AddApp_Add__init(PortableServer_Servant servant,
CORBA_Environment *env)
{
  static PortableServer_ClassInfo class_info = {NULL, (ORBit_small_impl_finder)&get_skel_small_AddApp_Add, "IDL:AddApp/Add:1.0", &AddApp_Add__classid, NULL, &AddApp_Add__iinterface};
  PortableServer_ServantBase__init (       ((PortableServer_ServantBase *)servant), env);
   ORBit_skel_class_register (&class_info,
   (PortableServer_ServantBase *)servant, POA_AddApp_Add__fini,
   ORBIT_VEPV_OFFSET (POA_AddApp_Add__vepv, AddApp_Add_epv),
   (CORBA_unsigned_long) 0);}

void POA_AddApp_Add__fini(PortableServer_Servant servant,
CORBA_Environment *env)
{
  PortableServer_ServantBase__fini(servant, env);
}

