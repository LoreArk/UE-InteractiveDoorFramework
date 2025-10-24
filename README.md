# 🎮 Interactive Door Framework (UE Plugin)

> **A fully modular Unreal Engine plugin for creating interactive, physically responsive doors.**  
> Built for **immersive first-person projects**, easily extendable to third-person and architectural experiences.

---

## 🧩 Overview

**Interactive Door Framework (IDF)** provides a complete, ready-to-use **Blueprint framework** for physically interactive doors.  
It’s designed for creators who want intuitive, realistic door interactions — from subtle pushes to full animation-driven sequences — without coding from scratch.

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
- All major systems are **Blueprint-customizable**, ready for designers and level builders:
  - Door Blueprints (`BP_SingleDoor`, `BP_DoubleDoor`)
  - Key Item Blueprint (`BP_KeyItem`)
  - Interaction Prompt Blueprint (`BP_InteractionPrompt`)
- No C++ setup required — everything works out of the box once the plugin is enabled.

---


## 🚀 Installation

### 🟦 For Blueprint-Only Projects

If your project **does not contain any C++ code**, you’ll need to use a **precompiled version** of the plugin.

#### ✅ Option 1 — Download Precompiled Version
1. Go to the [Releases](https://github.com/LoreArk/UE-InteractiveDoorFramework/releases) page.
2. Download the latest `.zip` file (e.g. `InteractiveDoorFramework_v1.0_Win64.zip`).
3. Extract the folder into your project’s `Plugins/` directory:
4. <YourProject>/Plugins/InteractiveDoorFramework/
5. Launch Unreal → The plugin will appear under **Edit → Plugins → Installed**.
6. Restart the editor.

No compilation or Visual Studio setup required.

---

#### ⚙️ Option 2 — Compile Once in a C++ Project
If no precompiled version is available, you can compile the plugin manually:

1. Create a temporary **C++ project** (Games → Blank → C++).
2. Copy the plugin into that project’s `Plugins/` folder.
3. Open the `.uproject` → Unreal will compile the plugin automatically.
4. Once compiled, copy the **entire plugin folder** (including `Binaries/`) into your Blueprint-only project.

---
### 🟨 For C++ Projects

If your project already contains C++ code, Unreal will automatically compile the plugin the next time you build your project.

1. **Download and unzip** this repository.  
2. Copy the content of the extracted folder (the InteractiveDoorFramework folder) into your project’s `Plugins/` directory.
3. **Right-click** your `.uproject` file → select **"Generate Visual Studio project files"**.  
4. Open the generated `.sln` and **build the project** (Development Editor, Win64).  
5. Launch Unreal → go to **Edit → Plugins** and enable the plugin.  

Once compiled, the plugin will appear in your project and be ready to use.

---

## 🧪 Setup

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


