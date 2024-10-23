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

#include <alibabacloud/ims/model/DeleteAccessKeyRequest.h>

using AlibabaCloud::Ims::Model::DeleteAccessKeyRequest;

DeleteAccessKeyRequest::DeleteAccessKeyRequest()
    : RpcServiceRequest("ims", "2019-08-15", "DeleteAccessKey") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccessKeyRequest::~DeleteAccessKeyRequest() {}

std::string DeleteAccessKeyRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void DeleteAccessKeyRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string DeleteAccessKeyRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void DeleteAccessKeyRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string DeleteAccessKeyRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void DeleteAccessKeyRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

