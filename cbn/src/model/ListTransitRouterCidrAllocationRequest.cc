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

#include <alibabacloud/cbn/model/ListTransitRouterCidrAllocationRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterCidrAllocationRequest;

ListTransitRouterCidrAllocationRequest::ListTransitRouterCidrAllocationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterCidrAllocation") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterCidrAllocationRequest::~ListTransitRouterCidrAllocationRequest() {}

long ListTransitRouterCidrAllocationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterCidrAllocationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterCidrAllocationRequest::getClientToken() const {
  return clientToken_;
}

void ListTransitRouterCidrAllocationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListTransitRouterCidrAllocationRequest::getTransitRouterCidrId() const {
  return transitRouterCidrId_;
}

void ListTransitRouterCidrAllocationRequest::setTransitRouterCidrId(const std::string &transitRouterCidrId) {
  transitRouterCidrId_ = transitRouterCidrId;
  setParameter(std::string("TransitRouterCidrId"), transitRouterCidrId);
}

std::string ListTransitRouterCidrAllocationRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterCidrAllocationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterCidrAllocationRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterCidrAllocationRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterCidrAllocationRequest::getCidr() const {
  return cidr_;
}

void ListTransitRouterCidrAllocationRequest::setCidr(const std::string &cidr) {
  cidr_ = cidr;
  setParameter(std::string("Cidr"), cidr);
}

std::string ListTransitRouterCidrAllocationRequest::getDedicatedOwnerId() const {
  return dedicatedOwnerId_;
}

void ListTransitRouterCidrAllocationRequest::setDedicatedOwnerId(const std::string &dedicatedOwnerId) {
  dedicatedOwnerId_ = dedicatedOwnerId;
  setParameter(std::string("DedicatedOwnerId"), dedicatedOwnerId);
}

bool ListTransitRouterCidrAllocationRequest::getDryRun() const {
  return dryRun_;
}

void ListTransitRouterCidrAllocationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ListTransitRouterCidrAllocationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterCidrAllocationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterCidrAllocationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterCidrAllocationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterCidrAllocationRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterCidrAllocationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterCidrAllocationRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterCidrAllocationRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterCidrAllocationRequest::getAttachmentName() const {
  return attachmentName_;
}

void ListTransitRouterCidrAllocationRequest::setAttachmentName(const std::string &attachmentName) {
  attachmentName_ = attachmentName;
  setParameter(std::string("AttachmentName"), attachmentName);
}

std::string ListTransitRouterCidrAllocationRequest::getVersion() const {
  return version_;
}

void ListTransitRouterCidrAllocationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterCidrAllocationRequest::getCidrBlock() const {
  return cidrBlock_;
}

void ListTransitRouterCidrAllocationRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

int ListTransitRouterCidrAllocationRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterCidrAllocationRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTransitRouterCidrAllocationRequest::getAttachmentId() const {
  return attachmentId_;
}

void ListTransitRouterCidrAllocationRequest::setAttachmentId(const std::string &attachmentId) {
  attachmentId_ = attachmentId;
  setParameter(std::string("AttachmentId"), attachmentId);
}

