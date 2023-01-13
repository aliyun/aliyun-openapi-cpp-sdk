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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastDomainsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterMulticastDomainsRequest;

ListTransitRouterMulticastDomainsRequest::ListTransitRouterMulticastDomainsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterMulticastDomains") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterMulticastDomainsRequest::~ListTransitRouterMulticastDomainsRequest() {}

long ListTransitRouterMulticastDomainsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterMulticastDomainsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterMulticastDomainsRequest::getClientToken() const {
  return clientToken_;
}

void ListTransitRouterMulticastDomainsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListTransitRouterMulticastDomainsRequest::getCenId() const {
  return cenId_;
}

void ListTransitRouterMulticastDomainsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ListTransitRouterMulticastDomainsRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void ListTransitRouterMulticastDomainsRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::string ListTransitRouterMulticastDomainsRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterMulticastDomainsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterMulticastDomainsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterMulticastDomainsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTransitRouterMulticastDomainsRequest::Tag> ListTransitRouterMulticastDomainsRequest::getTag() const {
  return tag_;
}

void ListTransitRouterMulticastDomainsRequest::setTag(const std::vector<ListTransitRouterMulticastDomainsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListTransitRouterMulticastDomainsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterMulticastDomainsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterMulticastDomainsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterMulticastDomainsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterMulticastDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterMulticastDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterMulticastDomainsRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterMulticastDomainsRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterMulticastDomainsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterMulticastDomainsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

long ListTransitRouterMulticastDomainsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterMulticastDomainsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

