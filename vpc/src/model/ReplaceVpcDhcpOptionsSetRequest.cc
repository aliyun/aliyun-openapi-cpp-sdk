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

#include <alibabacloud/vpc/model/ReplaceVpcDhcpOptionsSetRequest.h>

using AlibabaCloud::Vpc::Model::ReplaceVpcDhcpOptionsSetRequest;

ReplaceVpcDhcpOptionsSetRequest::ReplaceVpcDhcpOptionsSetRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ReplaceVpcDhcpOptionsSet") {
  setMethod(HttpRequest::Method::Post);
}

ReplaceVpcDhcpOptionsSetRequest::~ReplaceVpcDhcpOptionsSetRequest() {}

long ReplaceVpcDhcpOptionsSetRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReplaceVpcDhcpOptionsSetRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReplaceVpcDhcpOptionsSetRequest::getClientToken() const {
  return clientToken_;
}

void ReplaceVpcDhcpOptionsSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ReplaceVpcDhcpOptionsSetRequest::getRegionId() const {
  return regionId_;
}

void ReplaceVpcDhcpOptionsSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ReplaceVpcDhcpOptionsSetRequest::getDryRun() const {
  return dryRun_;
}

void ReplaceVpcDhcpOptionsSetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ReplaceVpcDhcpOptionsSetRequest::getDhcpOptionsSetId() const {
  return dhcpOptionsSetId_;
}

void ReplaceVpcDhcpOptionsSetRequest::setDhcpOptionsSetId(const std::string &dhcpOptionsSetId) {
  dhcpOptionsSetId_ = dhcpOptionsSetId;
  setParameter(std::string("DhcpOptionsSetId"), dhcpOptionsSetId);
}

std::string ReplaceVpcDhcpOptionsSetRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReplaceVpcDhcpOptionsSetRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReplaceVpcDhcpOptionsSetRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReplaceVpcDhcpOptionsSetRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReplaceVpcDhcpOptionsSetRequest::getOwnerId() const {
  return ownerId_;
}

void ReplaceVpcDhcpOptionsSetRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReplaceVpcDhcpOptionsSetRequest::getVpcId() const {
  return vpcId_;
}

void ReplaceVpcDhcpOptionsSetRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

