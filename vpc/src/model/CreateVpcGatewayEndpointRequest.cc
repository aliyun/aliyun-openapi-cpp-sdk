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

#include <alibabacloud/vpc/model/CreateVpcGatewayEndpointRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpcGatewayEndpointRequest;

CreateVpcGatewayEndpointRequest::CreateVpcGatewayEndpointRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpcGatewayEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpcGatewayEndpointRequest::~CreateVpcGatewayEndpointRequest() {}

long CreateVpcGatewayEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpcGatewayEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpcGatewayEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpcGatewayEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVpcGatewayEndpointRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpcGatewayEndpointRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpcGatewayEndpointRequest::getRegionId() const {
  return regionId_;
}

void CreateVpcGatewayEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVpcGatewayEndpointRequest::getServiceName() const {
  return serviceName_;
}

void CreateVpcGatewayEndpointRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::vector<CreateVpcGatewayEndpointRequest::Tag> CreateVpcGatewayEndpointRequest::getTag() const {
  return tag_;
}

void CreateVpcGatewayEndpointRequest::setTag(const std::vector<CreateVpcGatewayEndpointRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateVpcGatewayEndpointRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpcGatewayEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVpcGatewayEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpcGatewayEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVpcGatewayEndpointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpcGatewayEndpointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateVpcGatewayEndpointRequest::getEndpointDescription() const {
  return endpointDescription_;
}

void CreateVpcGatewayEndpointRequest::setEndpointDescription(const std::string &endpointDescription) {
  endpointDescription_ = endpointDescription;
  setParameter(std::string("EndpointDescription"), endpointDescription);
}

long CreateVpcGatewayEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVpcGatewayEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVpcGatewayEndpointRequest::getVpcId() const {
  return vpcId_;
}

void CreateVpcGatewayEndpointRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateVpcGatewayEndpointRequest::getEndpointName() const {
  return endpointName_;
}

void CreateVpcGatewayEndpointRequest::setEndpointName(const std::string &endpointName) {
  endpointName_ = endpointName;
  setParameter(std::string("EndpointName"), endpointName);
}

std::string CreateVpcGatewayEndpointRequest::getPolicyDocument() const {
  return policyDocument_;
}

void CreateVpcGatewayEndpointRequest::setPolicyDocument(const std::string &policyDocument) {
  policyDocument_ = policyDocument;
  setParameter(std::string("PolicyDocument"), policyDocument);
}

