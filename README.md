🎮 Interactive Door Framework (UE Plugin)

A modular Unreal Engine plugin providing a complete, physically interactive door system.
Designed for immersive first-person experiences, architectural visualizations, and games requiring detailed door interactions.
Fully extensible for third-person projects.

🧩 Overview

Interactive Door Framework (IDF) is a flexible Unreal Engine plugin that provides a ready-to-use door interaction system.
It combines physics-based motion, interaction logic, and locking mechanics into a single, customizable framework.

With IDF you can easily create:

Physically interactive doors

Animation-driven or hybrid door systems

Locked doors with key or one-sided unlock logic

Immersive interaction prompts and UI feedback

✨ Features
Category	Features
🕹 Interaction System	- First-person ready interaction component (IDFPlayerInteractionComponent)
- Detects interactables via sphere trace
- Supports interaction start/hold/release
- Blueprint-expandable
🚪 Door Framework	- Skeletal or static mesh support
- Physics-based motion or animation montage
- Supports single and double doors
- Customizable handle meshes, sockets, and animation
- Configurable door blockers to prevent clipping
🔒 Lock System	- IDFLockComponent for per-door locking
- Supports: unlocked, one-side lock, and key-based lock states
- Integrated with KeyItemsManager subsystem
- Dynamic unlocking and feedback events
🗝 Key Items	- IDFKeyActor for collectible key items
- Adds collected keys to KeyItemsManager
- Keys can be examined and have name/description
💬 UI Prompts	- IDFInteractionPromptActor displays context prompts
- Easily customizable with your own widgets
⚙️ Blueprint Integration	- Most systems are blueprint-accessible and customizable
- Custom materials, meshes, sounds, and montages assignable in the editor
🧠 Core Components
File	Purpose
IDFDoorActor	The main interactive door actor. Handles physical interaction, animation montage playback, lock checks, and prompt updates.
IDFLockComponent	Manages door lock state and logic (unlocked, one-side, key-based).
IDFKeyActor	Represents collectible key items; integrates with KeyItemsManager.
KeyItemsManager	Global subsystem tracking all collected key items.
IDFPlayerInteractionComponent	Handles interaction traces, detecting and interacting with targets implementing the IIDFInteractable interface.
IDFInteractionPromptActor	Displays and hides on-screen prompts tied to interactable objects.


🧰 Requirements

Unreal Engine 5.3+

Uses Enhanced Input System

Designed for first-person templates

Fully compatible with Blueprints and C++

🚀 Installation

Clone or download this repository.

Place the folder inside your project’s Plugins/ directory:

<YourProject>/Plugins/InteractiveDoorFramework/


Launch Unreal and enable the plugin in Edit → Plugins → Installed.

Restart the editor.

🧪 Example Setup

Add a Door:

Place an IDFDoorActor in your level.

Assign a Skeletal Mesh and Animation Blueprint.

Configure the Lock Component (key IDs, one-side lock, etc.).

Optionally assign prompt and interaction montage.

Add a Key Item:

Place an IDFKeyActor in your level.

Set its KeyItemSettings (ID, mesh, description).

Enable Interaction:

Add IDFPlayerInteractionComponent to your player character.

Bind your input action to start and end interaction.

🎨 Customization

All door and UI materials are fully replaceable.

Use your own meshes, sounds, montages, and prompt widgets.

Extend the base classes in C++ or Blueprint.

🧩 Example Systems

Soft push / Hard slam interaction depending on tap speed

Lock preview gizmos for easy editor alignment

Sound cues and montage notifies for unlock feedback

Dynamic handle placement through skeletal sockets

🧑‍💻 Author

Lorenzo Pusateri
🎮 Game Developer & Designer
🔗 GitHub: LoreArk

📄 License

MIT License — free to use, modify, and include in commercial or personal projects.
Attribution appreciated but not required.
