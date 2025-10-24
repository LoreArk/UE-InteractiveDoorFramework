# 🎮 Interactive Door Framework (UE Plugin)

> **A fully modular Unreal Engine plugin for creating interactive, physically responsive doors.**  
> Built for **immersive first-person projects**, easily extendable to third-person and architectural experiences.

---

## 🧩 Overview

**Interactive Door Framework (IDF)** provides a complete, ready-to-use **Blueprint framework** for physically interactive doors.  
It’s designed for creators who want intuitive, realistic door interactions — from subtle pushes to full animation-driven sequences —  
without coding from scratch.

The system integrates:
- Fully **customizable Blueprint doors** (single or double)
- **Lock and key** logic with collectible key items
- **Physical interaction and dragging**
- **Animation and montage-based behavior**
- A player **interaction system and prompt UI**

---

## ✨ Key Features

### 🚪 **Door Blueprints**
- Modular **Blueprint doors** ready to use in your project.  
- Assign your own:
  - **Frame Mesh**
  - **Door Mesh**
  - **Handle Mesh**
  - **Materials** for each element
- Editable **handle and lock positions**, automatically adjusting related bones and animations.
- Supports both **single and double doors**.
- Comes with **custom skeletal meshes** that drive door, handle, and lock animations dynamically.

---

### 🕹 **Interaction System**
- Assign `IDFPlayerInteractionComponent` to your player character to enable interactions.  
- Configure your **interaction input** (press, hold, or double tap).  
- Supports:
  - **Tap / Double Tap animations**
  - **Hold interactions** (for dragging or physically moving doors)
  - **Unlock animations**
  - **Physical pushing with collision**

---

### 🔒 **Lock & Key System**
- Each door has an `IDFLockComponent` that defines its **locking logic**.
- Supports:
  - Unlocked doors
  - One-sided locked doors
  - Doors requiring **specific key items**
- Integrated with the `KeyItemsManager` subsystem to track collected keys.
- Includes ready-to-use **Blueprint Key Items** with placeholder meshes you can easily replace.

---

### 💬 **Interaction Prompts**
- Includes a `IDFInteractionPromptActor` with a 3D widget to display interaction hints.
- The prompt visibility is automatically managed by the player’s interaction component.
- Fully customizable UI and text.

---

### ⚙️ **Blueprint-Driven Customization**
- All major systems are **Blueprint-based**, ready for designers and level builders:
  - Door Blueprints (`BP_SingleDoor`, `BP_DoubleDoor`)
  - Key Item Blueprint (`BP_KeyItem`)
  - Interaction Prompt Blueprint (`BP_InteractionPrompt`)
- No C++ setup required — everything works out of the box once the plugin is enabled.

---


---

## 🚀 Getting Started

### 1️⃣ **Install**
1. Clone or download this repository.  
2. Place it inside your project’s `Plugins/` folder:
3. Launch Unreal and enable it in **Edit → Plugins → Installed**.  
4. Restart the editor.

---

### 2️⃣ **Setup**
1. Add the **`IDFPlayerInteractionComponent`** to your character.  
2. Bind your input action for interaction (press / hold / double tap).  
3. Place one of the provided **Door Blueprints** in your level.  
4. Assign your meshes and materials directly in the Blueprint.  
5. Optionally, add **Key Items** to lock/unlock your doors.

That’s it — your doors are now fully interactive and customizable.

---

## 🧠 Core Components

| File | Role |
|------|------|
| **`IDFDoorActor`** | Base C++ logic for physical and animated door interaction. |
| **`IDFLockComponent`** | Manages lock state and checks for key items. |
| **`IDFKeyActor`** | Collectible key actor integrated with the manager. |
| **`KeyItemsManager`** | Subsystem tracking found key items. |
| **`IDFPlayerInteractionComponent`** | Detects interactables and handles input. |
| **`IDFInteractionPromptActor`** | Displays 3D prompts for interaction. |

---

## 🧪 Interaction Flow

Player → InteractionComponent → DoorActor
│
├─> LockComponent (checks keys)
├─> KeyItemsManager (inventory of keys)
└─> InteractionPrompt (UI feedback)


---

## 🧑‍💻 Author

**Lorenzo Pusateri**  
🎮 Game Developer & Designer  
🔗 [GitHub: LoreArk](https://github.com/LoreArk)

---

## 📄 License

MIT License — free to use, modify, and include in commercial or personal projects.  
Attribution appreciated but not required.
