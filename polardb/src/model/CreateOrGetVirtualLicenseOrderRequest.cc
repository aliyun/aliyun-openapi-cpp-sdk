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

#include <alibabacloud/polardb/model/CreateOrGetVirtualLicenseOrderRequest.h>

using AlibabaCloud::Polardb::Model::CreateOrGetVirtualLicenseOrderRequest;

CreateOrGetVirtualLicenseOrderRequest::CreateOrGetVirtualLicenseOrderRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateOrGetVirtualLicenseOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrGetVirtualLicenseOrderRequest::~CreateOrGetVirtualLicenseOrderRequest() {}

long CreateOrGetVirtualLicenseOrderRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateOrGetVirtualLicenseOrderRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateOrGetVirtualLicenseOrderRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateOrGetVirtualLicenseOrderRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateOrGetVirtualLicenseOrderRequest::getEngine() const {
  return engine_;
}

void CreateOrGetVirtualLicenseOrderRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateOrGetVirtualLicenseOrderRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateOrGetVirtualLicenseOrderRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateOrGetVirtualLicenseOrderRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateOrGetVirtualLicenseOrderRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateOrGetVirtualLicenseOrderRequest::getOwnerId() const {
  return ownerId_;
}

void CreateOrGetVirtualLicenseOrderRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

