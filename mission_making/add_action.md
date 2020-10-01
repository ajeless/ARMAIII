# Adding Action to Object

```SQF
this addAction ["Name of your action", {// code for your action ... what it does}];
```

This is essentially event handler that is displayed by player proximity.
```SQF
this addAction 
[
    "Action Title Text", // what you want your player to see in their action menu
    { /* code */ } // this is what you want your action to do when the player selects it
];
```

Add it to the object init field in the editor.
![Add Action](./images/add_action_to_object.png)  

Here we see it availabe as an action to the player.
![Add Action](./images/add_action.png)  

See the community wiki for 
[more details](https://community.bistudio.com/wiki/addAction).