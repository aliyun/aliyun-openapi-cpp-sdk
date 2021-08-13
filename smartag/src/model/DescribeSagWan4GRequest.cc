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

#include <alibabacloud/smartag/model/DescribeSagWan4GRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagWan4GRequest;

DescribeSagWan4GRequest::DescribeSagWan4GRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagWan4G") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagWan4GRequest::~DescribeSagWan4GRequest() {}

long DescribeSagWan4GRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagWan4GRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagWan4GRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagWan4GRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagWan4GRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagWan4GRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagWan4GRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagWan4GRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagWan4GRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagWan4GRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagWan4GRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagWan4GRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagWan4GRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagWan4GRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

