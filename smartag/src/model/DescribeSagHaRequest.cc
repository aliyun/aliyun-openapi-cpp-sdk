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

#include <alibabacloud/smartag/model/DescribeSagHaRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagHaRequest;

DescribeSagHaRequest::DescribeSagHaRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagHa") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagHaRequest::~DescribeSagHaRequest() {}

long DescribeSagHaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagHaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagHaRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagHaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagHaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagHaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagHaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagHaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagHaRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagHaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagHaRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagHaRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagHaRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagHaRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

