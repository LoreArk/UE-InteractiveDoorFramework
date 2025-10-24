# 🎮 Interactive Door Framework (UE Plugin)

> **A modular Unreal Engine plugin providing a complete, physically interactive door system.**  
> Designed for **immersive first-person experiences**, architectural visualizations, and games requiring detailed door interactions.  
> Fully extensible for **third-person projects**.

---

## 🧩 Overview

**Interactive Door Framework (IDF)** is a flexible Unreal Engine plugin that provides a ready-to-use **door interaction system**.  
It combines physics-based motion, interaction logic, and locking mechanics into a single, customizable framework.

With IDF you can easily create:
- Physically interactive doors  
- Animation-driven or hybrid door systems  
- Locked doors with key or one-sided unlock logic  
- Immersive interaction prompts and UI feedback  

---

## ✨ Features

| Category | Features |
|-----------|-----------|
| 🕹 **Interaction System** | - First-person ready interaction component (`IDFPlayerInteractionComponent`)<br>- Detects interactables via sphere trace<br>- Supports interaction start/hold/release<br>- Blueprint-expandable |
| 🚪 **Door Framework** | - Skeletal or static mesh support<br>- Physics-based motion or animation montage<br>- Supports single and double doors<br>- Customizable handle meshes, sockets, and animation<br>- Configurable door blockers to prevent clipping |
| 🔒 **Lock System** | - `IDFLockComponent` for per-door locking<br>- Supports: unlocked, one-side lock, and key-based lock states<br>- Integrated with `KeyItemsManager` subsystem<br>- Dynamic unlocking and feedback events |
| 🗝 **Key Items** | - `IDFKeyActor` for collectible key items<br>- Adds collected keys to `KeyItemsManager`<br>- Keys can be examined and have name/description |
| 💬 **UI Prompts** | - `IDFInteractionPromptActor` displays context prompts<br>- Easily customizable with your own widgets |
| ⚙️ **Blueprint Integration** | - Most systems are blueprint-accessible and customizable<br>- Custom materials, meshes, sounds, and montages assignable in the editor |

---

## 🧠 Core Components

| File | Purpose |
|------|----------|
| **`IDFDoorActor`** | Main interactive door actor. Handles physical movement, animation montage playback, lock checks, and prompt updates. |
| **`IDFLockComponent`** | Manages door lock state and logic (unlocked, one-side, key-based). |
| **`IDFKeyActor`** | Represents collectible key items; integrates with `KeyItemsManager`. |
| **`KeyItemsManager`** | Global subsystem tracking all collected key items. |
| **`IDFPlayerInteractionComponent`** | Handles interaction traces and communication with `IIDFInteractable` objects. |
| **`IDFInteractionPromptActor`** | Displays and hides context-sensitive interaction prompts. |

---


---

## 🧰 Requirements

- **Unreal Engine 5.3+**
- Uses the **Enhanced Input System**
- Designed for **first-person templates**
- Fully compatible with **Blueprints and C++**

---

## 🚀 Installation

1. Clone or download this repository.
2. Place the folder inside your project’s `Plugins/` directory:


3. Launch Unreal and enable the plugin in **Edit → Plugins → Installed**.
4. Restart the editor.

---

## 🧪 Example Setup

### 🔹 Add a Door
1. Place an `IDFDoorActor` in your level.  
2. Assign a Skeletal Mesh and Animation Blueprint.  
3. Configure the `Lock Component` (key IDs, one-side lock, etc.).  
4. Optionally assign prompt and interaction montage.

### 🔹 Add a Key Item
1. Place an `IDFKeyActor` in your level.  
2. Set its `KeyItemSettings` (ID, mesh, description).  

### 🔹 Enable Interaction
1. Add `IDFPlayerInteractionComponent` to your player character.  
2. Bind your input actions to start and end interaction.  

---

## 🎨 Customization

- All door and UI materials are **fully replaceable**.  
- Use your own **meshes, sounds, montages**, and **prompt widgets**.  
- Extend base classes in **C++ or Blueprint**.

---

## 🧩 Example Systems

- Soft push / hard slam interactions  
- Lock preview gizmos for easy alignment  
- Sound cues and montage notifies for unlock feedback  
- Dynamic handle placement via skeletal sockets  

---

## 🧑‍💻 Author

**Lorenzo Pusateri**  
🎮 Game Developer & Designer  
🔗 [GitHub: LoreArk](https://github.com/LoreArk)

---

## 📄 License

MIT License — free to use, modify, and include in commercial or personal projects.  
Attribution appreciated but not required.
