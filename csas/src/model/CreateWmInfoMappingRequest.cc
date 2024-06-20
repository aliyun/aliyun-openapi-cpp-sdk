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

#include <alibabacloud/csas/model/CreateWmInfoMappingRequest.h>

using AlibabaCloud::Csas::Model::CreateWmInfoMappingRequest;

CreateWmInfoMappingRequest::CreateWmInfoMappingRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateWmInfoMapping") {
  setMethod(HttpRequest::Method::Post);
}

CreateWmInfoMappingRequest::~CreateWmInfoMappingRequest() {}

long CreateWmInfoMappingRequest::getWmInfoSize() const {
  return wmInfoSize_;
}

void CreateWmInfoMappingRequest::setWmInfoSize(long wmInfoSize) {
  wmInfoSize_ = wmInfoSize;
  setBodyParameter(std::string("WmInfoSize"), std::to_string(wmInfoSize));
}

std::string CreateWmInfoMappingRequest::getWmInfoBytesB64() const {
  return wmInfoBytesB64_;
}

void CreateWmInfoMappingRequest::setWmInfoBytesB64(const std::string &wmInfoBytesB64) {
  wmInfoBytesB64_ = wmInfoBytesB64;
  setBodyParameter(std::string("WmInfoBytesB64"), wmInfoBytesB64);
}

std::string CreateWmInfoMappingRequest::getWmType() const {
  return wmType_;
}

void CreateWmInfoMappingRequest::setWmType(const std::string &wmType) {
  wmType_ = wmType;
  setBodyParameter(std::string("WmType"), wmType);
}

