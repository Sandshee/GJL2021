using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ItemUI : MonoBehaviour
    , IPointerEnterHandler
    , IPointerExitHandler
{
    public InventoryItem item;
    public Image icon;
    private bool wasJustOver;
    public Tooltip tooltip;
    // Start is called before the first frame update
    void Start()
    {
        //I should only have one, its quick, dirty, but oh well.
    }

    // Update is called once per frame
    void Update()
    {
       /*
        if (EventSystem.current.IsPointerOverGameObject())
        {
            if (!wasJustOver)
            {
                tooltip.ShowTooltip(item);
                wasJustOver = true;
                Debug.Log("SHOW ME THE WAY!");
            }
        } else
        {
            if (wasJustOver)
            {
                tooltip.HideTooltip(item);
                wasJustOver = false;
            }
        }
        */
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!wasJustOver)
        {
            tooltip.ShowTooltip(item);
            wasJustOver = true;
        }
        Debug.Log("I was called");
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (wasJustOver)
        {
            tooltip.HideTooltip(item);
            wasJustOver = false;
        }
    }

    public void AssignItem(InventoryItem item)
    {
        this.item = item;
        icon.sprite = item.icon;
    }
}
