<?php
session_start();
$host="localhost";
$user="root";
$pssword="";
$db="fithit";
$conn=mysqli_connect("localhost","root","","fithit",3308);
{
    if(!$conn)
    {
        die("connection failed".mysqli_connect_error());
    }

}
$query="select * from equipment"; 
$result=mysqli_query($conn,$query);
?>
<!DOCTYPE html>
<html>
    <head>
        <title>admintrainer</title>
        <style>
            * {
  font-family: sans-serif; /* Change your font family */
}

.content-table {
  border-collapse: collapse;
  margin: 25px 0;
  font-size: 0.9em;
  min-width: 400px;
  border-radius: 5px 5px 0 0;
  overflow: hidden;
  box-shadow: 0 0 20px rgba(0, 0, 0, 0.15);
}

.content-table thead tr {
  background-color: #009879;
  color: #ffffff;
  text-align: left;
  font-weight: bold;
  height: 50px;
}
content-table th,
.content-table td {
  padding: 12px 15px;
}

.content-table tbody tr {
  border-bottom: 1px solid #dddddd;
}

.content-table tbody tr:nth-of-type(even) {
  background-color: #f3f3f3;
}

.content-table tbody tr:last-of-type {
  border-bottom: 2px solid #009879;
}

.content-table tbody tr.active-row {
  font-weight: bold;
  color: #009879;
}
.add{
  margin-left: 25%;
  background: green;
}
.delete{
  background: red;
}
        </style>
    </head>
<body>
<table class="content-table">
    <!-- //<theaad> -->
    <tr> 
		<thead colspan="4"><h2>Equipments</h2></th> 
</tr><tr> 
			  <th> Equipment ID </th> 
			  <th> Equipment Name </th>
        <th> </th>
			  
		</tr> 
</thead>
<tbody>
    <?php while($rows=mysqli_fetch_assoc($result)) 
		{ 
		?> 
		<tr> <td><?php echo $rows['eno']; ?></td> 
		<td><?php echo $rows['etype']; ?></td> 
		
	<?php
          $_SESSION['equipment']=$rows['eno'];
     
          ?>
          <!-- <td><a href=deleteEquip.php><button class="delete">Delete</button></a></td> -->
          <td><a href="deleteEquip.php?equipment=<?php echo $rows['eno'];?>"><button class="delete">Delete</button></a></td>
    </tr>
          <?php
    }
    ?>
          </tbody>
          
  </table>
  <a href="addEquip.html"><button class="add">Add</button></a>
</body>
  </html>