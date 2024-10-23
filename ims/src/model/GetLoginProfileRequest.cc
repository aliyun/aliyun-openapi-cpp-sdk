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

#include <alibabacloud/ims/model/GetLoginProfileRequest.h>

using AlibabaCloud::Ims::Model::GetLoginProfileRequest;

GetLoginProfileRequest::GetLoginProfileRequest()
    : RpcServiceRequest("ims", "2019-08-15", "GetLoginProfile") {
  setMethod(HttpRequest::Method::Post);
}

GetLoginProfileRequest::~GetLoginProfileRequest() {}

std::string GetLoginProfileRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void GetLoginProfileRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string GetLoginProfileRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void GetLoginProfileRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

