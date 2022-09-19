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

#include <alibabacloud/viapi-regen/model/GetUploadPolicyRequest.h>

using AlibabaCloud::Viapi_regen::Model::GetUploadPolicyRequest;

GetUploadPolicyRequest::GetUploadPolicyRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "GetUploadPolicy") {
  setMethod(HttpRequest::Method::Post);
}

GetUploadPolicyRequest::~GetUploadPolicyRequest() {}

std::string GetUploadPolicyRequest::getType() const {
  return type_;
}

void GetUploadPolicyRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

long GetUploadPolicyRequest::getId() const {
  return id_;
}

void GetUploadPolicyRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string GetUploadPolicyRequest::getFileName() const {
  return fileName_;
}

void GetUploadPolicyRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setBodyParameter(std::string("FileName"), fileName);
}

