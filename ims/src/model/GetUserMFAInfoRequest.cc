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

#include <alibabacloud/ims/model/GetUserMFAInfoRequest.h>

using AlibabaCloud::Ims::Model::GetUserMFAInfoRequest;

GetUserMFAInfoRequest::GetUserMFAInfoRequest()
    : RpcServiceRequest("ims", "2019-08-15", "GetUserMFAInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetUserMFAInfoRequest::~GetUserMFAInfoRequest() {}

std::string GetUserMFAInfoRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void GetUserMFAInfoRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string GetUserMFAInfoRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void GetUserMFAInfoRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

