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

#include <alibabacloud/vpc/model/GetVpcGatewayEndpointAttributeRequest.h>

using AlibabaCloud::Vpc::Model::GetVpcGatewayEndpointAttributeRequest;

GetVpcGatewayEndpointAttributeRequest::GetVpcGatewayEndpointAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetVpcGatewayEndpointAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetVpcGatewayEndpointAttributeRequest::~GetVpcGatewayEndpointAttributeRequest() {}

long GetVpcGatewayEndpointAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetVpcGatewayEndpointAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetVpcGatewayEndpointAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetVpcGatewayEndpointAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetVpcGatewayEndpointAttributeRequest::getEndpointId() const {
  return endpointId_;
}

void GetVpcGatewayEndpointAttributeRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string GetVpcGatewayEndpointAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetVpcGatewayEndpointAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetVpcGatewayEndpointAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void GetVpcGatewayEndpointAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetVpcGatewayEndpointAttributeRequest::getRegionId() const {
  return regionId_;
}

void GetVpcGatewayEndpointAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

