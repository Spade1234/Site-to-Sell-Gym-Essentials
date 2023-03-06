<?php

    session_start();
    $uid=$_GET['user'];

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
     echo "$uid";
    
        $query="DELETE FROM user WHERE uid='$uid'";
        $connection=mysqli_query($conn,$query);
        
       
    

        if($connection){
            //echo "Deletion Successful";
            ?>
            <script type="text/javascript">
               alert("User Details Deleted Successfully");
               window.location.href="adminuser.php";
             </script>
             <?php
        }
        else{
            echo "Error: Deletion not Successful";
        }
    
?>