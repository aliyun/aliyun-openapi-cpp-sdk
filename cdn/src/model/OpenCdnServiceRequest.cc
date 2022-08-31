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

#include <alibabacloud/cdn/model/OpenCdnServiceRequest.h>

using AlibabaCloud::Cdn::Model::OpenCdnServiceRequest;

OpenCdnServiceRequest::OpenCdnServiceRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "OpenCdnService") {
  setMethod(HttpRequest::Method::Post);
}

OpenCdnServiceRequest::~OpenCdnServiceRequest() {}

long OpenCdnServiceRequest::getOwnerId() const {
  return ownerId_;
}

void OpenCdnServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string OpenCdnServiceRequest::getSecurityToken() const {
  return securityToken_;
}

void OpenCdnServiceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string OpenCdnServiceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void OpenCdnServiceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

