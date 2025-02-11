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

#include <alibabacloud/cloudauth/model/MobileOnlineStatusRequest.h>

using AlibabaCloud::Cloudauth::Model::MobileOnlineStatusRequest;

MobileOnlineStatusRequest::MobileOnlineStatusRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "MobileOnlineStatus") {
  setMethod(HttpRequest::Method::Post);
}

MobileOnlineStatusRequest::~MobileOnlineStatusRequest() {}

std::string MobileOnlineStatusRequest::getParamType() const {
  return paramType_;
}

void MobileOnlineStatusRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setBodyParameter(std::string("ParamType"), paramType);
}

std::string MobileOnlineStatusRequest::getMobile() const {
  return mobile_;
}

void MobileOnlineStatusRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setBodyParameter(std::string("Mobile"), mobile);
}

