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

#include <alibabacloud/ims/model/GetGroupRequest.h>

using AlibabaCloud::Ims::Model::GetGroupRequest;

GetGroupRequest::GetGroupRequest()
    : RpcServiceRequest("ims", "2019-08-15", "GetGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetGroupRequest::~GetGroupRequest() {}

std::string GetGroupRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void GetGroupRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string GetGroupRequest::getGroupName() const {
  return groupName_;
}

void GetGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string GetGroupRequest::getGroupPrincipalName() const {
  return groupPrincipalName_;
}

void GetGroupRequest::setGroupPrincipalName(const std::string &groupPrincipalName) {
  groupPrincipalName_ = groupPrincipalName;
  setParameter(std::string("GroupPrincipalName"), groupPrincipalName);
}

