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

#include <alibabacloud/dypnsapi/model/DeleteVerifySchemeRequest.h>

using AlibabaCloud::Dypnsapi::Model::DeleteVerifySchemeRequest;

DeleteVerifySchemeRequest::DeleteVerifySchemeRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "DeleteVerifyScheme") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVerifySchemeRequest::~DeleteVerifySchemeRequest() {}

long DeleteVerifySchemeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVerifySchemeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVerifySchemeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVerifySchemeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteVerifySchemeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVerifySchemeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVerifySchemeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteVerifySchemeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteVerifySchemeRequest::getSchemeCode() const {
  return schemeCode_;
}

void DeleteVerifySchemeRequest::setSchemeCode(const std::string &schemeCode) {
  schemeCode_ = schemeCode;
  setParameter(std::string("SchemeCode"), schemeCode);
}

long DeleteVerifySchemeRequest::getCustomerId() const {
  return customerId_;
}

void DeleteVerifySchemeRequest::setCustomerId(long customerId) {
  customerId_ = customerId;
  setParameter(std::string("CustomerId"), std::to_string(customerId));
}

