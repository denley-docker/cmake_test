FROM gcc:7

RUN apt-get purge -y cmake

ARG VERSION=3.21.2
WORKDIR /opt/app
RUN wget https://github.com/Kitware/CMake/releases/download/v${VERSION}/cmake-${VERSION}.tar.gz && \
    tar -xzvf cmake-${VERSION}.tar.gz > /dev/null

WORKDIR cmake-${VERSION}
RUN ./bootstrap > /dev/null && \
    make -j$(nproc --all) > /dev/null && \
    make install > /dev/null

WORKDIR /
RUN rm -rf /opt/app
