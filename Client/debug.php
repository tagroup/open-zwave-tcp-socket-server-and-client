<?php
/**
 * http://thomasloughlin.com
**/

define("ZWAVE_HOST", "localhost");
define("ZWAVE_PORT", 6004);

$socket = socket_create(AF_INET, SOCK_STREAM, SOL_TCP);
if ($socket === false) {
    return "ERROR: socket_create() failed: reason: " . socket_strerror(socket_last_error()) . "\n";
}

$result = socket_connect($socket, ZWAVE_HOST, ZWAVE_PORT);
if ($result === false) {
    return "ERROR: socket_connect() failed.\nReason: ($result) " . socket_strerror(socket_last_error($socket)) . "\n";
}


socket_write($socket, 'ALIST',5);

$data=socket_read($socket, 2048,PHP_NORMAL_READ );

if(strlen($data) >0)
{
    echo '<p>', $data, '</p>';
    $devices=explode('#',$data);
    for($i=0;$i<count($devices) ;$i++)
    {
        $device=explode('~',$devices[$i]);
        echo '<h3>' . $device[4] . '</h3>';
        echo 'Node Number: ' . $device[2] . '<br />';
        echo 'Node Name: ' . $device[1] . '<br />';
        echo 'Node Group: ' . $device[3] . '<br />';
        echo 'Node Properties: <ul>';
        $properties = explode('<>', $device[5]);
        foreach($properties as $property)
        {
            if($property)
            {
                echo '<li>' .  $property . '</li>';
            }
        }
        echo '</ul>';
    }

}


socket_close($socket);