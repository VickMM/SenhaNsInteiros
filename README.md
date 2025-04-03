# Controle de Acesso - Senha

Este repositório contém um programa em C que implementa um simples sistema de controle de acesso por senha. O usuário tem até 3 tentativas para inserir a senha correta antes que o sistema seja bloqueado.

# 📌 Tecnologias Utilizadas

[![My Skills](https://skillicons.dev/icons?i=cpp)](https://skillicons.dev)

# 🔹 Funcionalidades

* Solicita ao usuário uma senha numérica.

* Permite até 3 tentativas de entrada.

* Bloqueia o sistema caso a senha esteja errada nas 3 tentativas.

* Exibe mensagens de erro e instruções adequadas ao usuário.

# 🚀 Como Usar

* Compile o programa usando um compilador C (como GCC): ```gcc -o controle_senha controle_senha.c```

* Execute o programa: ```./controle_senha```

* Digite a senha quando solicitado. O programa aceita apenas números inteiros.

* Se a senha digitada for correta, o sistema será liberado. Caso contrário, após 3 tentativas incorretas, o sistema será bloqueado.

# 📌 Exemplo de Uso

```c++
Digite sua senha:
123

Senha invalida! Por favor, digite senha correta!
Use APENAS com numeros inteiros!

Digite sua senha:
456

Senha invalida! Por favor, digite senha correta!
Use APENAS com numeros inteiros!

Digite sua senha:
789

Sistema liberado
```

# 📈 Melhorias Possíveis

* Permitir que a senha seja configurável pelo usuário.

* Implementar uma opção de "esqueci minha senha".

* Melhorar a segurança da entrada de dados.

* Implementar um sistema de logs para tentativas de acesso.

## 👩‍💻 Autoras

Desenvolvido por:

* [Victória Machado](https://github.com/VickMM)

* [Maria Luiza](https://github.com/i-malur)
