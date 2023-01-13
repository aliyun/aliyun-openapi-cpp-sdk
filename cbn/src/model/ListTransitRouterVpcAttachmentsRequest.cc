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

#include <alibabacloud/cbn/model/ListTransitRouterVpcAttachmentsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterVpcAttachmentsRequest;

ListTransitRouterVpcAttachmentsRequest::ListTransitRouterVpcAttachmentsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterVpcAttachments") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterVpcAttachmentsRequest::~ListTransitRouterVpcAttachmentsRequest() {}

long ListTransitRouterVpcAttachmentsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterVpcAttachmentsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterVpcAttachmentsRequest::getCenId() const {
  return cenId_;
}

void ListTransitRouterVpcAttachmentsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterVpcAttachmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterVpcAttachmentsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTransitRouterVpcAttachmentsRequest::Tag> ListTransitRouterVpcAttachmentsRequest::getTag() const {
  return tag_;
}

void ListTransitRouterVpcAttachmentsRequest::setTag(const std::vector<ListTransitRouterVpcAttachmentsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListTransitRouterVpcAttachmentsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterVpcAttachmentsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterVpcAttachmentsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterVpcAttachmentsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterVpcAttachmentsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterVpcAttachmentsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterVpcAttachmentsRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterVpcAttachmentsRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getResourceType() const {
  return resourceType_;
}

void ListTransitRouterVpcAttachmentsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTransitRouterVpcAttachmentsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterVpcAttachmentsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterVpcAttachmentsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterVpcAttachmentsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getVpcId() const {
  return vpcId_;
}

void ListTransitRouterVpcAttachmentsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int ListTransitRouterVpcAttachmentsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterVpcAttachmentsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTransitRouterVpcAttachmentsRequest::getOrderType() const {
  return orderType_;
}

void ListTransitRouterVpcAttachmentsRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

std::string ListTransitRouterVpcAttachmentsRequest::getStatus() const {
  return status_;
}

void ListTransitRouterVpcAttachmentsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

