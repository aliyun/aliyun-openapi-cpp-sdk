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

#include <alibabacloud/cbn/model/ListTransitRouterVbrAttachmentsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterVbrAttachmentsRequest;

ListTransitRouterVbrAttachmentsRequest::ListTransitRouterVbrAttachmentsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterVbrAttachments") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterVbrAttachmentsRequest::~ListTransitRouterVbrAttachmentsRequest() {}

long ListTransitRouterVbrAttachmentsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterVbrAttachmentsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterVbrAttachmentsRequest::getCenId() const {
  return cenId_;
}

void ListTransitRouterVbrAttachmentsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ListTransitRouterVbrAttachmentsRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterVbrAttachmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterVbrAttachmentsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterVbrAttachmentsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTransitRouterVbrAttachmentsRequest::Tag> ListTransitRouterVbrAttachmentsRequest::getTag() const {
  return tag_;
}

void ListTransitRouterVbrAttachmentsRequest::setTag(const std::vector<ListTransitRouterVbrAttachmentsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListTransitRouterVbrAttachmentsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterVbrAttachmentsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterVbrAttachmentsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterVbrAttachmentsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterVbrAttachmentsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterVbrAttachmentsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterVbrAttachmentsRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterVbrAttachmentsRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterVbrAttachmentsRequest::getResourceType() const {
  return resourceType_;
}

void ListTransitRouterVbrAttachmentsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTransitRouterVbrAttachmentsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterVbrAttachmentsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterVbrAttachmentsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterVbrAttachmentsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListTransitRouterVbrAttachmentsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterVbrAttachmentsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

