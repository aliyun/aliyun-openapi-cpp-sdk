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

#include <alibabacloud/cloudauth/model/DetectFaceAttributesRequest.h>

using AlibabaCloud::Cloudauth::Model::DetectFaceAttributesRequest;

DetectFaceAttributesRequest::DetectFaceAttributesRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DetectFaceAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DetectFaceAttributesRequest::~DetectFaceAttributesRequest() {}

std::string DetectFaceAttributesRequest::getBizType() const {
  return bizType_;
}

void DetectFaceAttributesRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setBodyParameter(std::string("BizType"), bizType);
}

std::string DetectFaceAttributesRequest::getMaterialValue() const {
  return materialValue_;
}

void DetectFaceAttributesRequest::setMaterialValue(const std::string &materialValue) {
  materialValue_ = materialValue;
  setBodyParameter(std::string("MaterialValue"), materialValue);
}

