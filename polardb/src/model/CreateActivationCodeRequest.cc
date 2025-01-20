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

#include <alibabacloud/polardb/model/CreateActivationCodeRequest.h>

using AlibabaCloud::Polardb::Model::CreateActivationCodeRequest;

CreateActivationCodeRequest::CreateActivationCodeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateActivationCode") {
  setMethod(HttpRequest::Method::Post);
}

CreateActivationCodeRequest::~CreateActivationCodeRequest() {}

long CreateActivationCodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateActivationCodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateActivationCodeRequest::getDescription() const {
  return description_;
}

void CreateActivationCodeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateActivationCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateActivationCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateActivationCodeRequest::getAliyunOrderId() const {
  return aliyunOrderId_;
}

void CreateActivationCodeRequest::setAliyunOrderId(const std::string &aliyunOrderId) {
  aliyunOrderId_ = aliyunOrderId;
  setParameter(std::string("AliyunOrderId"), aliyunOrderId);
}

std::string CreateActivationCodeRequest::getMacAddress() const {
  return macAddress_;
}

void CreateActivationCodeRequest::setMacAddress(const std::string &macAddress) {
  macAddress_ = macAddress;
  setParameter(std::string("MacAddress"), macAddress);
}

std::string CreateActivationCodeRequest::getSystemIdentifier() const {
  return systemIdentifier_;
}

void CreateActivationCodeRequest::setSystemIdentifier(const std::string &systemIdentifier) {
  systemIdentifier_ = systemIdentifier;
  setParameter(std::string("SystemIdentifier"), systemIdentifier);
}

std::string CreateActivationCodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateActivationCodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateActivationCodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateActivationCodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateActivationCodeRequest::getOwnerId() const {
  return ownerId_;
}

void CreateActivationCodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateActivationCodeRequest::getName() const {
  return name_;
}

void CreateActivationCodeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

