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

#include <alibabacloud/smartag/model/ListSmartAGByAccessPointRequest.h>

using AlibabaCloud::Smartag::Model::ListSmartAGByAccessPointRequest;

ListSmartAGByAccessPointRequest::ListSmartAGByAccessPointRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ListSmartAGByAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

ListSmartAGByAccessPointRequest::~ListSmartAGByAccessPointRequest() {}

int ListSmartAGByAccessPointRequest::getAccessPointId() const {
  return accessPointId_;
}

void ListSmartAGByAccessPointRequest::setAccessPointId(int accessPointId) {
  accessPointId_ = accessPointId;
  setParameter(std::string("AccessPointId"), std::to_string(accessPointId));
}

long ListSmartAGByAccessPointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListSmartAGByAccessPointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ListSmartAGByAccessPointRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSmartAGByAccessPointRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSmartAGByAccessPointRequest::getRegionId() const {
  return regionId_;
}

void ListSmartAGByAccessPointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListSmartAGByAccessPointRequest::getPageSize() const {
  return pageSize_;
}

void ListSmartAGByAccessPointRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSmartAGByAccessPointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListSmartAGByAccessPointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListSmartAGByAccessPointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListSmartAGByAccessPointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListSmartAGByAccessPointRequest::getOwnerId() const {
  return ownerId_;
}

void ListSmartAGByAccessPointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListSmartAGByAccessPointRequest::getSmartAGStatus() const {
  return smartAGStatus_;
}

void ListSmartAGByAccessPointRequest::setSmartAGStatus(const std::string &smartAGStatus) {
  smartAGStatus_ = smartAGStatus;
  setParameter(std::string("SmartAGStatus"), smartAGStatus);
}

