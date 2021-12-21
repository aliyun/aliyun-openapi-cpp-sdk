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

#include <alibabacloud/cbn/model/ListTransitRoutersRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRoutersRequest;

ListTransitRoutersRequest::ListTransitRoutersRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouters") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRoutersRequest::~ListTransitRoutersRequest() {}

long ListTransitRoutersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRoutersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRoutersRequest::getCenId() const {
  return cenId_;
}

void ListTransitRoutersRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::vector<std::string> ListTransitRoutersRequest::getTransitRouterIds() const {
  return transitRouterIds_;
}

void ListTransitRoutersRequest::setTransitRouterIds(const std::vector<std::string> &transitRouterIds) {
  transitRouterIds_ = transitRouterIds;
}

int ListTransitRoutersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTransitRoutersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListTransitRoutersRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRoutersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListTransitRoutersRequest::getPageSize() const {
  return pageSize_;
}

void ListTransitRoutersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTransitRoutersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRoutersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRoutersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRoutersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRoutersRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRoutersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRoutersRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRoutersRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

