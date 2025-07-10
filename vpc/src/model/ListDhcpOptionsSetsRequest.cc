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

#include <alibabacloud/vpc/model/ListDhcpOptionsSetsRequest.h>

using AlibabaCloud::Vpc::Model::ListDhcpOptionsSetsRequest;

ListDhcpOptionsSetsRequest::ListDhcpOptionsSetsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListDhcpOptionsSets") {
  setMethod(HttpRequest::Method::Post);
}

ListDhcpOptionsSetsRequest::~ListDhcpOptionsSetsRequest() {}

long ListDhcpOptionsSetsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListDhcpOptionsSetsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListDhcpOptionsSetsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListDhcpOptionsSetsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListDhcpOptionsSetsRequest::getRegionId() const {
  return regionId_;
}

void ListDhcpOptionsSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDhcpOptionsSetsRequest::getNextToken() const {
  return nextToken_;
}

void ListDhcpOptionsSetsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListDhcpOptionsSetsRequest::getDhcpOptionsSetId() const {
  return dhcpOptionsSetId_;
}

void ListDhcpOptionsSetsRequest::setDhcpOptionsSetId(const std::vector<std::string> &dhcpOptionsSetId) {
  dhcpOptionsSetId_ = dhcpOptionsSetId;
}

std::string ListDhcpOptionsSetsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListDhcpOptionsSetsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListDhcpOptionsSetsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListDhcpOptionsSetsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListDhcpOptionsSetsRequest::getDomainName() const {
  return domainName_;
}

void ListDhcpOptionsSetsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long ListDhcpOptionsSetsRequest::getOwnerId() const {
  return ownerId_;
}

void ListDhcpOptionsSetsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListDhcpOptionsSetsRequest::Tags> ListDhcpOptionsSetsRequest::getTags() const {
  return tags_;
}

void ListDhcpOptionsSetsRequest::setTags(const std::vector<ListDhcpOptionsSetsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string ListDhcpOptionsSetsRequest::getDhcpOptionsSetName() const {
  return dhcpOptionsSetName_;
}

void ListDhcpOptionsSetsRequest::setDhcpOptionsSetName(const std::string &dhcpOptionsSetName) {
  dhcpOptionsSetName_ = dhcpOptionsSetName;
  setParameter(std::string("DhcpOptionsSetName"), dhcpOptionsSetName);
}

int ListDhcpOptionsSetsRequest::getMaxResults() const {
  return maxResults_;
}

void ListDhcpOptionsSetsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

