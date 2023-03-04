class CfgPatches
{
 class RestrictArea
 {
  requiredAddons[]=
  {
    // ""
  };
 }
}
class CfgMods
{
 class RestrictArea
 {
  type = "mod";
  
  class defs
  {
   class worldScriptModule
   {
    value = "";
    files[] = {"RestrictArea/WorldScripts"};
   }
  }
 }
}