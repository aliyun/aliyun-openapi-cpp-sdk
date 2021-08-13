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

#include <alibabacloud/smartag/model/DescribeSagWanListRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagWanListRequest;

DescribeSagWanListRequest::DescribeSagWanListRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagWanList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagWanListRequest::~DescribeSagWanListRequest() {}

long DescribeSagWanListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagWanListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagWanListRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagWanListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagWanListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagWanListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagWanListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagWanListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagWanListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagWanListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagWanListRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagWanListRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagWanListRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagWanListRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

