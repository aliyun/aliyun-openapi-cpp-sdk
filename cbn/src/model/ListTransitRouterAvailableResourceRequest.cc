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

#include <alibabacloud/cbn/model/ListTransitRouterAvailableResourceRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterAvailableResourceRequest;

ListTransitRouterAvailableResourceRequest::ListTransitRouterAvailableResourceRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterAvailableResourceRequest::~ListTransitRouterAvailableResourceRequest() {}

long ListTransitRouterAvailableResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ListTransitRouterAvailableResourceRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTransitRouterAvailableResourceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListTransitRouterAvailableResourceRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterAvailableResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListTransitRouterAvailableResourceRequest::getPageSize() const {
  return pageSize_;
}

void ListTransitRouterAvailableResourceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTransitRouterAvailableResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterAvailableResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterAvailableResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterAvailableResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterAvailableResourceRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterAvailableResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ListTransitRouterAvailableResourceRequest::getSupportMulticast() const {
  return supportMulticast_;
}

void ListTransitRouterAvailableResourceRequest::setSupportMulticast(bool supportMulticast) {
  supportMulticast_ = supportMulticast;
  setParameter(std::string("SupportMulticast"), supportMulticast ? "true" : "false");
}

std::string ListTransitRouterAvailableResourceRequest::getVersion() const {
  return version_;
}

void ListTransitRouterAvailableResourceRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

