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

#include <alibabacloud/cbn/model/ListGrantVSwitchesToCenRequest.h>

using AlibabaCloud::Cbn::Model::ListGrantVSwitchesToCenRequest;

ListGrantVSwitchesToCenRequest::ListGrantVSwitchesToCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListGrantVSwitchesToCen") {
  setMethod(HttpRequest::Method::Post);
}

ListGrantVSwitchesToCenRequest::~ListGrantVSwitchesToCenRequest() {}

long ListGrantVSwitchesToCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListGrantVSwitchesToCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListGrantVSwitchesToCenRequest::getCenId() const {
  return cenId_;
}

void ListGrantVSwitchesToCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int ListGrantVSwitchesToCenRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGrantVSwitchesToCenRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListGrantVSwitchesToCenRequest::getRegionId() const {
  return regionId_;
}

void ListGrantVSwitchesToCenRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListGrantVSwitchesToCenRequest::getPageSize() const {
  return pageSize_;
}

void ListGrantVSwitchesToCenRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGrantVSwitchesToCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListGrantVSwitchesToCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListGrantVSwitchesToCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListGrantVSwitchesToCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListGrantVSwitchesToCenRequest::getOwnerId() const {
  return ownerId_;
}

void ListGrantVSwitchesToCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListGrantVSwitchesToCenRequest::getVersion() const {
  return version_;
}

void ListGrantVSwitchesToCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListGrantVSwitchesToCenRequest::getVpcId() const {
  return vpcId_;
}

void ListGrantVSwitchesToCenRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ListGrantVSwitchesToCenRequest::getZoneId() const {
  return zoneId_;
}

void ListGrantVSwitchesToCenRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

