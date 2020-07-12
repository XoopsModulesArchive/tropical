<?php
$dir= "directory to erase";

function delete_files($target, $exceptions, $output=true)
{
   $sourcedir = opendir($target);
   while(false !== ($filename = readdir($sourcedir)))
   {
       if(!in_array($filename, $exceptions))
       {
           if($output)
           { echo "Processing: ".$target."/".$filename."<br>"; }
           if(is_dir($target."/".$filename))
           {
               // recurse subdirectory; call of function recursive
               delete_files($target."/".$filename, $exceptions);
           }
           else if(is_file($target."/".$filename))
           {
               // unlink file
               unlink($target."/".$filename);
           }
       }
   }
   closedir($sourcedir);
   if(rmdir($target))
   { return true; }
   else
   { return false; }
}

$exceptions = array(".", "..");
if(delete_files($dir, $exceptions, true))
{ echo "deletion successed"; }
else
{ echo "deletion failed"; }
?>