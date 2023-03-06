<?php

    session_start();
    $bid=$_GET['batch'];

    $host="localhost";
    $user="root";
    $password="";
    $db="fithit";
    $conn=mysqli_connect($host, $user, $password, $db,3308);
    {
        if(!$conn)
        {
            die("connection failed".mysqli_connect_error());
        }
    }

    
        $query="DELETE FROM batch WHERE bid='$bid'";;
        $connection=mysqli_query($conn,$query);

        if($connection){
            //echo "Deletion Successful";
            ?>
            <script type="text/javascript">
               alert("Batch Details Deleted Successfully");
               window.location.href="adminbatch.php";
             </script>
             <?php
        }
        else{
            echo "Error: Deletion not Successful";
        }
    
?>