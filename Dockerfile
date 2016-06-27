FROM debian

MAINTAINER Kazuya Yokogawa "yokogawa-k@klab.com"

RUN apt-get update \
 && apt-get --no-install-recommends -y install \
    git \
    ca-certificates \
    gcc \
    make \
    libc6-dev \
    libreadline-dev \
    libfuse-dev \
    fuse \
 && apt-get clean \
 && rm -rf /var/lib/apt/lists

# install mtnd
COPY ./ /mtnd
WORKDIR /mtnd
RUN ./configure \
 && make \
 && make install \
 && mkdir -p /mtnexport /mnt/mtnfs
