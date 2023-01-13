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

#include <alibabacloud/cbn/model/DescribeCenVbrHealthCheckRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenVbrHealthCheckRequest;

DescribeCenVbrHealthCheckRequest::DescribeCenVbrHealthCheckRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenVbrHealthCheck") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenVbrHealthCheckRequest::~DescribeCenVbrHealthCheckRequest() {}

long DescribeCenVbrHealthCheckRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenVbrHealthCheckRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCenVbrHealthCheckRequest::getCenId() const {
  return cenId_;
}

void DescribeCenVbrHealthCheckRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int DescribeCenVbrHealthCheckRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenVbrHealthCheckRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeCenVbrHealthCheckRequest::getVbrInstanceOwnerId() const {
  return vbrInstanceOwnerId_;
}

void DescribeCenVbrHealthCheckRequest::setVbrInstanceOwnerId(long vbrInstanceOwnerId) {
  vbrInstanceOwnerId_ = vbrInstanceOwnerId;
  setParameter(std::string("VbrInstanceOwnerId"), std::to_string(vbrInstanceOwnerId));
}

int DescribeCenVbrHealthCheckRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenVbrHealthCheckRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCenVbrHealthCheckRequest::getVbrInstanceRegionId() const {
  return vbrInstanceRegionId_;
}

void DescribeCenVbrHealthCheckRequest::setVbrInstanceRegionId(const std::string &vbrInstanceRegionId) {
  vbrInstanceRegionId_ = vbrInstanceRegionId;
  setParameter(std::string("VbrInstanceRegionId"), vbrInstanceRegionId);
}

std::string DescribeCenVbrHealthCheckRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenVbrHealthCheckRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenVbrHealthCheckRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCenVbrHealthCheckRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCenVbrHealthCheckRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCenVbrHealthCheckRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCenVbrHealthCheckRequest::getVersion() const {
  return version_;
}

void DescribeCenVbrHealthCheckRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DescribeCenVbrHealthCheckRequest::getVbrInstanceId() const {
  return vbrInstanceId_;
}

void DescribeCenVbrHealthCheckRequest::setVbrInstanceId(const std::string &vbrInstanceId) {
  vbrInstanceId_ = vbrInstanceId;
  setParameter(std::string("VbrInstanceId"), vbrInstanceId);
}

