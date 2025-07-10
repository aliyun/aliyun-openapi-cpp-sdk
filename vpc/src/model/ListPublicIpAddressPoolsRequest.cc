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

#include <alibabacloud/vpc/model/ListPublicIpAddressPoolsRequest.h>

using AlibabaCloud::Vpc::Model::ListPublicIpAddressPoolsRequest;

ListPublicIpAddressPoolsRequest::ListPublicIpAddressPoolsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListPublicIpAddressPools") {
  setMethod(HttpRequest::Method::Post);
}

ListPublicIpAddressPoolsRequest::~ListPublicIpAddressPoolsRequest() {}

long ListPublicIpAddressPoolsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListPublicIpAddressPoolsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ListPublicIpAddressPoolsRequest::getSecurityProtectionEnabled() const {
  return securityProtectionEnabled_;
}

void ListPublicIpAddressPoolsRequest::setSecurityProtectionEnabled(bool securityProtectionEnabled) {
  securityProtectionEnabled_ = securityProtectionEnabled;
  setParameter(std::string("SecurityProtectionEnabled"), securityProtectionEnabled ? "true" : "false");
}

std::string ListPublicIpAddressPoolsRequest::getIsp() const {
  return isp_;
}

void ListPublicIpAddressPoolsRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

int ListPublicIpAddressPoolsRequest::getSecurityProtectionEnabledForCommonBuy() const {
  return securityProtectionEnabledForCommonBuy_;
}

void ListPublicIpAddressPoolsRequest::setSecurityProtectionEnabledForCommonBuy(int securityProtectionEnabledForCommonBuy) {
  securityProtectionEnabledForCommonBuy_ = securityProtectionEnabledForCommonBuy;
  setParameter(std::string("SecurityProtectionEnabledForCommonBuy"), std::to_string(securityProtectionEnabledForCommonBuy));
}

std::string ListPublicIpAddressPoolsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListPublicIpAddressPoolsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListPublicIpAddressPoolsRequest::getNextToken() const {
  return nextToken_;
}

void ListPublicIpAddressPoolsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListPublicIpAddressPoolsRequest::getRegionId() const {
  return regionId_;
}

void ListPublicIpAddressPoolsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ListPublicIpAddressPoolsRequest::getDryRun() const {
  return dryRun_;
}

void ListPublicIpAddressPoolsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<std::string> ListPublicIpAddressPoolsRequest::getPublicIpAddressPoolIds() const {
  return publicIpAddressPoolIds_;
}

void ListPublicIpAddressPoolsRequest::setPublicIpAddressPoolIds(const std::vector<std::string> &publicIpAddressPoolIds) {
  publicIpAddressPoolIds_ = publicIpAddressPoolIds;
}

std::string ListPublicIpAddressPoolsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPublicIpAddressPoolsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPublicIpAddressPoolsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPublicIpAddressPoolsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListPublicIpAddressPoolsRequest::getOwnerId() const {
  return ownerId_;
}

void ListPublicIpAddressPoolsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListPublicIpAddressPoolsRequest::Tags> ListPublicIpAddressPoolsRequest::getTags() const {
  return tags_;
}

void ListPublicIpAddressPoolsRequest::setTags(const std::vector<ListPublicIpAddressPoolsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string ListPublicIpAddressPoolsRequest::getName() const {
  return name_;
}

void ListPublicIpAddressPoolsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListPublicIpAddressPoolsRequest::getMaxResults() const {
  return maxResults_;
}

void ListPublicIpAddressPoolsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListPublicIpAddressPoolsRequest::getStatus() const {
  return status_;
}

void ListPublicIpAddressPoolsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

