# Adding Action to Object

```SQF
this addAction ["Name of your action", {// code for your action ... what it does}];
```

This is an event handler that is triggered by player proximity.
```SQF
this addAction 
[
    "Action Title Text", // what you want your player to see in their action menu
    { /* code */ } // this is what you want your action to do when the player selects it
];
```

![Add Action](./images/add_action.png)  

See the community wiki for 
[more details](https://community.bistudio.com/wiki/addAction).