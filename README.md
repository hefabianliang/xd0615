# xd0615
# 学习日志
# 默认情况下，用户的 SSH 密钥存储在其 ~/.ssh 目录下。 进入该目录并列出其中内容，可以确认自己是否已拥有密钥：
# 需要寻找一对以 id_dsa 或 id_rsa 命名的文件，其中一个带有 .pub 扩展名。 .pub 文件是你的公钥，另一个则是与之对应的私钥。 如果找不到这样的文件（或者根本没有 .ssh 目录），你可以通过运行 ssh-keygen 程序来创建它们。 在 Linux/macOS 系统中，ssh-keygen 随 SSH 软件包提供；在 Windows 上，该程序包含于 MSysGit 软件包中。
# 首先 ssh-keygen 会确认密钥的存储位置（默认是 .ssh/id_rsa），然后它会要求你输入两次密钥口令。 如果不想在使用密钥时输入口令，将其留空即可。 如果使用了密码，那么请确保添加了 -o 选项，它会以比默认格式更能抗暴力破解的格式保存私钥。 也可以用 ssh-agent 工具来避免每次都要输入密码。
# 希望老师可以讲课时慢一点。
