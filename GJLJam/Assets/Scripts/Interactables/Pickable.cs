using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickable : Interactible
{

    private Inventory inv;
    public InventoryItem item;
    public bool isPistol = false;
    // Start is called before the first frame update
    void Start()
    {
        inv = FindObjectOfType<Inventory>();

        if(isPistol && BetweenLoopData.GetGunsPickedUp() >= FindObjectOfType<Pistol>().gunPickupThreshold)
        {
            GameObject.Destroy(this.gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override void Interact()
    {
        if (!isPistol)
        {
            //Add  it to the inventory.
            inv.AddItem(item);
            //Probably also play a pop SFX or something, idk.
            GameObject.Destroy(gameObject);
        } else
        {
            BetweenLoopData.PickUpGun();
            FindObjectOfType<Pistol>().Draw();
            FindObjectOfType<Pistol>().PlayPickupSFX();
            GameObject.Destroy(gameObject);
        }
    }

    //This shouldn't be doable, but nevermind.
    public override void UnInteract()
    {
        base.UnInteract();
    }
}
