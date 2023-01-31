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

#include <alibabacloud/vpc/model/GetNatGatewayConvertStatusRequest.h>

using AlibabaCloud::Vpc::Model::GetNatGatewayConvertStatusRequest;

GetNatGatewayConvertStatusRequest::GetNatGatewayConvertStatusRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetNatGatewayConvertStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetNatGatewayConvertStatusRequest::~GetNatGatewayConvertStatusRequest() {}

long GetNatGatewayConvertStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetNatGatewayConvertStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetNatGatewayConvertStatusRequest::getRegionId() const {
  return regionId_;
}

void GetNatGatewayConvertStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetNatGatewayConvertStatusRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void GetNatGatewayConvertStatusRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string GetNatGatewayConvertStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetNatGatewayConvertStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetNatGatewayConvertStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetNatGatewayConvertStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetNatGatewayConvertStatusRequest::getOwnerId() const {
  return ownerId_;
}

void GetNatGatewayConvertStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

