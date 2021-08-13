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

#include <alibabacloud/smartag/model/DescribeSagPortRouteProtocolListRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagPortRouteProtocolListRequest;

DescribeSagPortRouteProtocolListRequest::DescribeSagPortRouteProtocolListRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagPortRouteProtocolList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagPortRouteProtocolListRequest::~DescribeSagPortRouteProtocolListRequest() {}

long DescribeSagPortRouteProtocolListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagPortRouteProtocolListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagPortRouteProtocolListRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagPortRouteProtocolListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagPortRouteProtocolListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagPortRouteProtocolListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagPortRouteProtocolListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagPortRouteProtocolListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagPortRouteProtocolListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagPortRouteProtocolListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagPortRouteProtocolListRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagPortRouteProtocolListRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagPortRouteProtocolListRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagPortRouteProtocolListRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

