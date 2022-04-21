/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/outboundbot/model/GenerateUploadUrlRequest.h>

using AlibabaCloud::OutboundBot::Model::GenerateUploadUrlRequest;

GenerateUploadUrlRequest::GenerateUploadUrlRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GenerateUploadUrl") {
  setMethod(HttpRequest::Method::Post);
}

GenerateUploadUrlRequest::~GenerateUploadUrlRequest() {}

std::string GenerateUploadUrlRequest::getFileName() const {
  return fileName_;
}

void GenerateUploadUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string GenerateUploadUrlRequest::getKey() const {
  return key_;
}

void GenerateUploadUrlRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

