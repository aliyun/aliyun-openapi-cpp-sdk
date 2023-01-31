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

#include <alibabacloud/vpc/model/CreateIpv6EgressOnlyRuleRequest.h>

using AlibabaCloud::Vpc::Model::CreateIpv6EgressOnlyRuleRequest;

CreateIpv6EgressOnlyRuleRequest::CreateIpv6EgressOnlyRuleRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateIpv6EgressOnlyRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateIpv6EgressOnlyRuleRequest::~CreateIpv6EgressOnlyRuleRequest() {}

long CreateIpv6EgressOnlyRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateIpv6EgressOnlyRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateIpv6EgressOnlyRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateIpv6EgressOnlyRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIpv6EgressOnlyRuleRequest::getDescription() const {
  return description_;
}

void CreateIpv6EgressOnlyRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateIpv6EgressOnlyRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateIpv6EgressOnlyRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getInstanceType() const {
  return instanceType_;
}

void CreateIpv6EgressOnlyRuleRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateIpv6EgressOnlyRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateIpv6EgressOnlyRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateIpv6EgressOnlyRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateIpv6EgressOnlyRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateIpv6EgressOnlyRuleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateIpv6EgressOnlyRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateIpv6EgressOnlyRuleRequest::getInstanceId() const {
  return instanceId_;
}

void CreateIpv6EgressOnlyRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void CreateIpv6EgressOnlyRuleRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getName() const {
  return name_;
}

void CreateIpv6EgressOnlyRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

