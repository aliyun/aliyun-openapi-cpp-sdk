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

#include <alibabacloud/ims/model/UpdateAccessKeyRequest.h>

using AlibabaCloud::Ims::Model::UpdateAccessKeyRequest;

UpdateAccessKeyRequest::UpdateAccessKeyRequest()
    : RpcServiceRequest("ims", "2019-08-15", "UpdateAccessKey") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAccessKeyRequest::~UpdateAccessKeyRequest() {}

std::string UpdateAccessKeyRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void UpdateAccessKeyRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string UpdateAccessKeyRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void UpdateAccessKeyRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string UpdateAccessKeyRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void UpdateAccessKeyRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

std::string UpdateAccessKeyRequest::getStatus() const {
  return status_;
}

void UpdateAccessKeyRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

