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

#include <alibabacloud/sas/model/CreateFileDetectRequest.h>

using AlibabaCloud::Sas::Model::CreateFileDetectRequest;

CreateFileDetectRequest::CreateFileDetectRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateFileDetect") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileDetectRequest::~CreateFileDetectRequest() {}

std::string CreateFileDetectRequest::getHashKey() const {
  return hashKey_;
}

void CreateFileDetectRequest::setHashKey(const std::string &hashKey) {
  hashKey_ = hashKey;
  setParameter(std::string("HashKey"), hashKey);
}

std::string CreateFileDetectRequest::getOssKey() const {
  return ossKey_;
}

void CreateFileDetectRequest::setOssKey(const std::string &ossKey) {
  ossKey_ = ossKey;
  setParameter(std::string("OssKey"), ossKey);
}

int CreateFileDetectRequest::getType() const {
  return type_;
}

void CreateFileDetectRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string CreateFileDetectRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateFileDetectRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateFileDetectRequest::getDownloadUrl() const {
  return downloadUrl_;
}

void CreateFileDetectRequest::setDownloadUrl(const std::string &downloadUrl) {
  downloadUrl_ = downloadUrl;
  setParameter(std::string("DownloadUrl"), downloadUrl);
}

