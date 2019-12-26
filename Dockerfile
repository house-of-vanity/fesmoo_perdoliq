FROM ubuntu:18.04
RUN apt-get update && \
      apt-get install -y python3 python3-pip && \
      pip3 install python-telegram-bot && \
      pip3 install requests && \
      pip3 install beautifulsoup4
      
WORKDIR /usr/share/fesmoo_perdoliq
COPY ./*py /usr/share/fesmoo_perdoliq/
CMD python3 bot_keys.py

