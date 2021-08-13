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

#include <alibabacloud/smartag/model/DescribeSagManagementPortRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagManagementPortRequest;

DescribeSagManagementPortRequest::DescribeSagManagementPortRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagManagementPort") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagManagementPortRequest::~DescribeSagManagementPortRequest() {}

long DescribeSagManagementPortRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagManagementPortRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagManagementPortRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagManagementPortRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagManagementPortRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagManagementPortRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagManagementPortRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagManagementPortRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagManagementPortRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagManagementPortRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagManagementPortRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagManagementPortRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagManagementPortRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagManagementPortRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

