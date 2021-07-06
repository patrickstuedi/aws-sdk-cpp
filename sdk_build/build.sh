sudo apt-get install libcurl4-openssl-dev libssl-dev uuid-dev zlib1g-dev libpulse-dev
cmake .. -DCMAKE_BUILD_TYPE=Debug -DENABLE_TESTING=OFF
cmake .. -DCMAKE_BUILD_TYPE=Debug -DENABLE_TESTING=OFF -DNO_ENCRYPTION=ON -DBUILD_ONLY="s3;kinesis;transfer"
