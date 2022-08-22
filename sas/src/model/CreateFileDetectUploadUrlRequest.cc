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

#include <alibabacloud/sas/model/CreateFileDetectUploadUrlRequest.h>

using AlibabaCloud::Sas::Model::CreateFileDetectUploadUrlRequest;

CreateFileDetectUploadUrlRequest::CreateFileDetectUploadUrlRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateFileDetectUploadUrl") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileDetectUploadUrlRequest::~CreateFileDetectUploadUrlRequest() {}

std::vector<std::string> CreateFileDetectUploadUrlRequest::getHashKeyList() const {
  return hashKeyList_;
}

void CreateFileDetectUploadUrlRequest::setHashKeyList(const std::vector<std::string> &hashKeyList) {
  hashKeyList_ = hashKeyList;
}

int CreateFileDetectUploadUrlRequest::getType() const {
  return type_;
}

void CreateFileDetectUploadUrlRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::vector<CreateFileDetectUploadUrlRequest::HashKeyContextList> CreateFileDetectUploadUrlRequest::getHashKeyContextList() const {
  return hashKeyContextList_;
}

void CreateFileDetectUploadUrlRequest::setHashKeyContextList(const std::vector<CreateFileDetectUploadUrlRequest::HashKeyContextList> &hashKeyContextList) {
  hashKeyContextList_ = hashKeyContextList;
  for(int dep1 = 0; dep1 != hashKeyContextList.size(); dep1++) {
  auto hashKeyContextListObj = hashKeyContextList.at(dep1);
  std::string hashKeyContextListObjStr = std::string("HashKeyContextList") + "." + std::to_string(dep1 + 1);
    setParameter(hashKeyContextListObjStr + ".HashKey", hashKeyContextListObj.hashKey);
    setParameter(hashKeyContextListObjStr + ".FileSize", std::to_string(hashKeyContextListObj.fileSize));
  }
}

