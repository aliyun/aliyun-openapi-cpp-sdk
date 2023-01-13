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

#include <alibabacloud/cbn/model/ListTransitRouterVpnAttachmentsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterVpnAttachmentsRequest;

ListTransitRouterVpnAttachmentsRequest::ListTransitRouterVpnAttachmentsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterVpnAttachments") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterVpnAttachmentsRequest::~ListTransitRouterVpnAttachmentsRequest() {}

long ListTransitRouterVpnAttachmentsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterVpnAttachmentsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterVpnAttachmentsRequest::getCenId() const {
  return cenId_;
}

void ListTransitRouterVpnAttachmentsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ListTransitRouterVpnAttachmentsRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterVpnAttachmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterVpnAttachmentsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterVpnAttachmentsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTransitRouterVpnAttachmentsRequest::Tag> ListTransitRouterVpnAttachmentsRequest::getTag() const {
  return tag_;
}

void ListTransitRouterVpnAttachmentsRequest::setTag(const std::vector<ListTransitRouterVpnAttachmentsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListTransitRouterVpnAttachmentsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterVpnAttachmentsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterVpnAttachmentsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterVpnAttachmentsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterVpnAttachmentsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterVpnAttachmentsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterVpnAttachmentsRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterVpnAttachmentsRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterVpnAttachmentsRequest::getResourceType() const {
  return resourceType_;
}

void ListTransitRouterVpnAttachmentsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTransitRouterVpnAttachmentsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterVpnAttachmentsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterVpnAttachmentsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterVpnAttachmentsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListTransitRouterVpnAttachmentsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterVpnAttachmentsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

