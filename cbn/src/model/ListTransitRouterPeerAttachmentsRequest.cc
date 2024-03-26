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

#include <alibabacloud/cbn/model/ListTransitRouterPeerAttachmentsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterPeerAttachmentsRequest;

ListTransitRouterPeerAttachmentsRequest::ListTransitRouterPeerAttachmentsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterPeerAttachments") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterPeerAttachmentsRequest::~ListTransitRouterPeerAttachmentsRequest() {}

long ListTransitRouterPeerAttachmentsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterPeerAttachmentsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterPeerAttachmentsRequest::getCenId() const {
  return cenId_;
}

void ListTransitRouterPeerAttachmentsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ListTransitRouterPeerAttachmentsRequest::getDefaultLinkType() const {
  return defaultLinkType_;
}

void ListTransitRouterPeerAttachmentsRequest::setDefaultLinkType(const std::string &defaultLinkType) {
  defaultLinkType_ = defaultLinkType;
  setParameter(std::string("DefaultLinkType"), defaultLinkType);
}

std::string ListTransitRouterPeerAttachmentsRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterPeerAttachmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterPeerAttachmentsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterPeerAttachmentsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTransitRouterPeerAttachmentsRequest::Tag> ListTransitRouterPeerAttachmentsRequest::getTag() const {
  return tag_;
}

void ListTransitRouterPeerAttachmentsRequest::setTag(const std::vector<ListTransitRouterPeerAttachmentsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListTransitRouterPeerAttachmentsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterPeerAttachmentsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterPeerAttachmentsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterPeerAttachmentsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterPeerAttachmentsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterPeerAttachmentsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterPeerAttachmentsRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterPeerAttachmentsRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterPeerAttachmentsRequest::getResourceType() const {
  return resourceType_;
}

void ListTransitRouterPeerAttachmentsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTransitRouterPeerAttachmentsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterPeerAttachmentsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterPeerAttachmentsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterPeerAttachmentsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListTransitRouterPeerAttachmentsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterPeerAttachmentsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

