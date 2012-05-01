<?php
  $serv = $_SERVER['SERVER_NAME'];
  include_once "../../geshi.inc";

  $sourceFiles = array("c02p072.cpp",
                       "c02p077.cpp",
		       "c02p079.cpp",
		       "c02p089.cpp",
		       "c02p093.cpp",
		       "c02p098.cpp",
		       "c02p108.cpp",
		       "c02p113a.cpp",
		       "c02p113b.cpp",
		       "c02p114.cpp",
		       "c02p115.cpp",
		       "c02p116.cpp",
		       "c02p117a.cpp",
		       "c02p117b.cpp",
		       "c02p118.cpp",
		       "c02p119a.cpp",
		       "c02p119b.cpp",
		       "c02p119c.cpp",
		       "c02p121.cpp");

  $source = $_GET['source'];

  $language = 'cpp';

  $geshi =& new GeSHi($source, $language, "../../geshi/");

  $geshi->enable_classes();

  $text = <<< End1
<!DOCTYPE html
     PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
     "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"/>
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">

  <head>
    <title>Data Abstraction and Problem Solving with C++ - 5th edition</title>
    <style type="text/css">
      <!--
        @import url(../../code.css);

End1;
  $text .= $geshi->get_stylesheet();
  $text .= <<< End2
      -->
    </style>
  </head>
  <body>
    <table width="100%">
      <tr>
	<td><a href="http://www.aw-bc.com/cssupport/Carrano.html"><img src="../../images/cover.jpg" border="0"
		 alt="text cover" width="116" height="144"></a></td>
	<td valign="top" align="center">
	  <h1>Data Abstraction and Problem Solving with C++</h1>
	  <h2>Walls and Mirrors</h2>
	  <h3>by Frank M. Carrano</h3>
	  <h3>By Page</h3>
	  <h3>Chapter 2</h3>
	</td>
	<td><a href="http://www.aw-bc.com/"><img src="../../images/aw-logo.gif" border="0"
		 alt="Addison Wesley Logo" width="84" height="64"></a></td>
      </tr>
    </table>

    <table>
      <tr>
        <td width="250px" valign="top">
          <ul>

End2;
  for ($index = 0; $index < count($sourceFiles); $index++) {
    $text .= "            <li><a href=\"" . $sourceFiles[$index] . "\"><img border=\"0\" align=\"middle\" width=\"16\" height=\"16\" src=\"";
    if (ereg('cpp$', $sourceFiles[$index]))
      $text .= "../../images/dotcpp.png\" alt=\"Source file\">";
    elseif (ereg('h$', $sourceFiles[$index]))
      $text .= "../../images/doth.png\" alt=\"Header file\">";
    else
      $text .= "../../images/unknown.png\" alt=\"Unknown file\">";
    $text .= "</a>&nbsp;&nbsp;<a href=\"index.php?source=$index\"><tt";
    if ($index == $source) $text .= " class=\"current\"";
    $text .= ">" . $sourceFiles[$index] . "</tt></a></li>\n";
  }
  $text .= "          </ul>\n        </td>\n";
  $text .= "        <td valign=\"top\" style=\"border:1px solid #000; background-color: #ffffcc;\">\n";

  $geshi->load_from_file($sourceFiles[$source]);
  $text .= $geshi->parse_code();

  $text .= <<< End3
        </td>
      </tr>
    </table>

  </body>
</html>

End3;

echo $text;
?>

