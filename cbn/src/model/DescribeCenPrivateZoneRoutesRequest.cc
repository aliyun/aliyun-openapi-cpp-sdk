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

#include <alibabacloud/cbn/model/DescribeCenPrivateZoneRoutesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenPrivateZoneRoutesRequest;

DescribeCenPrivateZoneRoutesRequest::DescribeCenPrivateZoneRoutesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenPrivateZoneRoutes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenPrivateZoneRoutesRequest::~DescribeCenPrivateZoneRoutesRequest() {}

long DescribeCenPrivateZoneRoutesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenPrivateZoneRoutesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCenPrivateZoneRoutesRequest::getCenId() const {
  return cenId_;
}

void DescribeCenPrivateZoneRoutesRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DescribeCenPrivateZoneRoutesRequest::getAccessRegionId() const {
  return accessRegionId_;
}

void DescribeCenPrivateZoneRoutesRequest::setAccessRegionId(const std::string &accessRegionId) {
  accessRegionId_ = accessRegionId;
  setParameter(std::string("AccessRegionId"), accessRegionId);
}

int DescribeCenPrivateZoneRoutesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenPrivateZoneRoutesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeCenPrivateZoneRoutesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenPrivateZoneRoutesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCenPrivateZoneRoutesRequest::getHostRegionId() const {
  return hostRegionId_;
}

void DescribeCenPrivateZoneRoutesRequest::setHostRegionId(const std::string &hostRegionId) {
  hostRegionId_ = hostRegionId;
  setParameter(std::string("HostRegionId"), hostRegionId);
}

std::string DescribeCenPrivateZoneRoutesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenPrivateZoneRoutesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenPrivateZoneRoutesRequest::getVersion() const {
  return version_;
}

void DescribeCenPrivateZoneRoutesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

