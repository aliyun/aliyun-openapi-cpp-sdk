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

#include <alibabacloud/smartag/model/ModifySmartAccessGatewayUpBandwidthRequest.h>

using AlibabaCloud::Smartag::Model::ModifySmartAccessGatewayUpBandwidthRequest;

ModifySmartAccessGatewayUpBandwidthRequest::ModifySmartAccessGatewayUpBandwidthRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySmartAccessGatewayUpBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

ModifySmartAccessGatewayUpBandwidthRequest::~ModifySmartAccessGatewayUpBandwidthRequest() {}

long ModifySmartAccessGatewayUpBandwidthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getRegionId() const {
  return regionId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifySmartAccessGatewayUpBandwidthRequest::getUpBandwidthWan() const {
  return upBandwidthWan_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setUpBandwidthWan(int upBandwidthWan) {
  upBandwidthWan_ = upBandwidthWan;
  setParameter(std::string("UpBandwidthWan"), std::to_string(upBandwidthWan));
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifySmartAccessGatewayUpBandwidthRequest::getUpBandwidth4G() const {
  return upBandwidth4G_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setUpBandwidth4G(int upBandwidth4G) {
  upBandwidth4G_ = upBandwidth4G;
  setParameter(std::string("UpBandwidth4G"), std::to_string(upBandwidth4G));
}

long ModifySmartAccessGatewayUpBandwidthRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

