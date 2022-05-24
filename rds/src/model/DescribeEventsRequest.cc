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

#include <alibabacloud/rds/model/DescribeEventsRequest.h>

using AlibabaCloud::Rds::Model::DescribeEventsRequest;

DescribeEventsRequest::DescribeEventsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEventsRequest::~DescribeEventsRequest() {}

long DescribeEventsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEventsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEventsRequest::getStartTime() const {
  return startTime_;
}

void DescribeEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeEventsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEventsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEventsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEventsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEventsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEventsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEventsRequest::getEndTime() const {
  return endTime_;
}

void DescribeEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeEventsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEventsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

