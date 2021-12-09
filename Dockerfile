FROM ubuntu:20.04

RUN apt update
RUN apt install -y git clang make

ENV DEBIAN_FRONTEND noninteractive

RUN git clone https://github.com/pwndbg/pwndbg
RUN cd pwndbg && ./setup.sh

RUN python3 -m pip install ROPgadget

CMD /bin/bash
