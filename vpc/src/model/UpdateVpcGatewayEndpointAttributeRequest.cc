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

#include <alibabacloud/vpc/model/UpdateVpcGatewayEndpointAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateVpcGatewayEndpointAttributeRequest;

UpdateVpcGatewayEndpointAttributeRequest::UpdateVpcGatewayEndpointAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateVpcGatewayEndpointAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpcGatewayEndpointAttributeRequest::~UpdateVpcGatewayEndpointAttributeRequest() {}

long UpdateVpcGatewayEndpointAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getEndpointId() const {
  return endpointId_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateVpcGatewayEndpointAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getEndpointDescription() const {
  return endpointDescription_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setEndpointDescription(const std::string &endpointDescription) {
  endpointDescription_ = endpointDescription;
  setParameter(std::string("EndpointDescription"), endpointDescription);
}

long UpdateVpcGatewayEndpointAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getEndpointName() const {
  return endpointName_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setEndpointName(const std::string &endpointName) {
  endpointName_ = endpointName;
  setParameter(std::string("EndpointName"), endpointName);
}

std::string UpdateVpcGatewayEndpointAttributeRequest::getPolicyDocument() const {
  return policyDocument_;
}

void UpdateVpcGatewayEndpointAttributeRequest::setPolicyDocument(const std::string &policyDocument) {
  policyDocument_ = policyDocument;
  setParameter(std::string("PolicyDocument"), policyDocument);
}

