Prepare evrything before build:

Run these commands from git root directory.

```bash
sudo apt install build-essential git python2 uuid-dev nasm acpica-tools
```

```bash
pip install -r edk2/pip-requirements.txt
```

```bash
cd edk2/
```

```bash
. edksetup.sh
```

```bash
export EDK_PATH=$(pwd)
```
