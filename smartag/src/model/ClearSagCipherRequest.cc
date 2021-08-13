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

#include <alibabacloud/smartag/model/ClearSagCipherRequest.h>

using AlibabaCloud::Smartag::Model::ClearSagCipherRequest;

ClearSagCipherRequest::ClearSagCipherRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ClearSagCipher") {
  setMethod(HttpRequest::Method::Post);
}

ClearSagCipherRequest::~ClearSagCipherRequest() {}

long ClearSagCipherRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ClearSagCipherRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ClearSagCipherRequest::getSnNumber() const {
  return snNumber_;
}

void ClearSagCipherRequest::setSnNumber(const std::string &snNumber) {
  snNumber_ = snNumber;
  setParameter(std::string("SnNumber"), snNumber);
}

std::string ClearSagCipherRequest::getRegionId() const {
  return regionId_;
}

void ClearSagCipherRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ClearSagCipherRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ClearSagCipherRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ClearSagCipherRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ClearSagCipherRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ClearSagCipherRequest::getOwnerId() const {
  return ownerId_;
}

void ClearSagCipherRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ClearSagCipherRequest::getSagId() const {
  return sagId_;
}

void ClearSagCipherRequest::setSagId(const std::string &sagId) {
  sagId_ = sagId;
  setParameter(std::string("SagId"), sagId);
}

