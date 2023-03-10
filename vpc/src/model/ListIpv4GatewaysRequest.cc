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

#include <alibabacloud/vpc/model/ListIpv4GatewaysRequest.h>

using AlibabaCloud::Vpc::Model::ListIpv4GatewaysRequest;

ListIpv4GatewaysRequest::ListIpv4GatewaysRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListIpv4Gateways") {
  setMethod(HttpRequest::Method::Post);
}

ListIpv4GatewaysRequest::~ListIpv4GatewaysRequest() {}

long ListIpv4GatewaysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListIpv4GatewaysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListIpv4GatewaysRequest::getIpv4GatewayName() const {
  return ipv4GatewayName_;
}

void ListIpv4GatewaysRequest::setIpv4GatewayName(const std::string &ipv4GatewayName) {
  ipv4GatewayName_ = ipv4GatewayName;
  setParameter(std::string("Ipv4GatewayName"), ipv4GatewayName);
}

std::string ListIpv4GatewaysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListIpv4GatewaysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListIpv4GatewaysRequest::getRegionId() const {
  return regionId_;
}

void ListIpv4GatewaysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListIpv4GatewaysRequest::getNextToken() const {
  return nextToken_;
}

void ListIpv4GatewaysRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListIpv4GatewaysRequest::getIpv4GatewayId() const {
  return ipv4GatewayId_;
}

void ListIpv4GatewaysRequest::setIpv4GatewayId(const std::string &ipv4GatewayId) {
  ipv4GatewayId_ = ipv4GatewayId;
  setParameter(std::string("Ipv4GatewayId"), ipv4GatewayId);
}

std::string ListIpv4GatewaysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListIpv4GatewaysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListIpv4GatewaysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListIpv4GatewaysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListIpv4GatewaysRequest::getOwnerId() const {
  return ownerId_;
}

void ListIpv4GatewaysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListIpv4GatewaysRequest::Tags> ListIpv4GatewaysRequest::getTags() const {
  return tags_;
}

void ListIpv4GatewaysRequest::setTags(const std::vector<ListIpv4GatewaysRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string ListIpv4GatewaysRequest::getVpcId() const {
  return vpcId_;
}

void ListIpv4GatewaysRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int ListIpv4GatewaysRequest::getMaxResults() const {
  return maxResults_;
}

void ListIpv4GatewaysRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

