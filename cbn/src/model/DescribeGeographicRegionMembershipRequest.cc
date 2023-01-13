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

#include <alibabacloud/cbn/model/DescribeGeographicRegionMembershipRequest.h>

using AlibabaCloud::Cbn::Model::DescribeGeographicRegionMembershipRequest;

DescribeGeographicRegionMembershipRequest::DescribeGeographicRegionMembershipRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeGeographicRegionMembership") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGeographicRegionMembershipRequest::~DescribeGeographicRegionMembershipRequest() {}

long DescribeGeographicRegionMembershipRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGeographicRegionMembershipRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeGeographicRegionMembershipRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGeographicRegionMembershipRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeGeographicRegionMembershipRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGeographicRegionMembershipRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGeographicRegionMembershipRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGeographicRegionMembershipRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGeographicRegionMembershipRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGeographicRegionMembershipRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGeographicRegionMembershipRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGeographicRegionMembershipRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeGeographicRegionMembershipRequest::getVersion() const {
  return version_;
}

void DescribeGeographicRegionMembershipRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DescribeGeographicRegionMembershipRequest::getGeographicRegionId() const {
  return geographicRegionId_;
}

void DescribeGeographicRegionMembershipRequest::setGeographicRegionId(const std::string &geographicRegionId) {
  geographicRegionId_ = geographicRegionId;
  setParameter(std::string("GeographicRegionId"), geographicRegionId);
}

