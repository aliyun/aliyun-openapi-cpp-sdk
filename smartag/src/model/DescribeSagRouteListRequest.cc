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

#include <alibabacloud/smartag/model/DescribeSagRouteListRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagRouteListRequest;

DescribeSagRouteListRequest::DescribeSagRouteListRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagRouteList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagRouteListRequest::~DescribeSagRouteListRequest() {}

long DescribeSagRouteListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagRouteListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagRouteListRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagRouteListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagRouteListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagRouteListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagRouteListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagRouteListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagRouteListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagRouteListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagRouteListRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagRouteListRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagRouteListRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagRouteListRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

