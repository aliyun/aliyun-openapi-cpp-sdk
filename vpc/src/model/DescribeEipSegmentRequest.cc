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

#include <alibabacloud/vpc/model/DescribeEipSegmentRequest.h>

using AlibabaCloud::Vpc::Model::DescribeEipSegmentRequest;

DescribeEipSegmentRequest::DescribeEipSegmentRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeEipSegment") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEipSegmentRequest::~DescribeEipSegmentRequest() {}

long DescribeEipSegmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEipSegmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEipSegmentRequest::getClientToken() const {
  return clientToken_;
}

void DescribeEipSegmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeEipSegmentRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEipSegmentRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEipSegmentRequest::getRegionId() const {
  return regionId_;
}

void DescribeEipSegmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeEipSegmentRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEipSegmentRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEipSegmentRequest::getSegmentInstanceId() const {
  return segmentInstanceId_;
}

void DescribeEipSegmentRequest::setSegmentInstanceId(const std::string &segmentInstanceId) {
  segmentInstanceId_ = segmentInstanceId;
  setParameter(std::string("SegmentInstanceId"), segmentInstanceId);
}

std::string DescribeEipSegmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEipSegmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEipSegmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEipSegmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeEipSegmentRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEipSegmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

