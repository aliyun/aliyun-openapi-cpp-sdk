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

#include <alibabacloud/live/model/DescribeLivePullToPushListRequest.h>

using AlibabaCloud::Live::Model::DescribeLivePullToPushListRequest;

DescribeLivePullToPushListRequest::DescribeLivePullToPushListRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLivePullToPushList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeLivePullToPushListRequest::~DescribeLivePullToPushListRequest() {}

std::string DescribeLivePullToPushListRequest::getTaskName() const {
  return taskName_;
}

void DescribeLivePullToPushListRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

int DescribeLivePullToPushListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLivePullToPushListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLivePullToPushListRequest::getRegionId() const {
  return regionId_;
}

void DescribeLivePullToPushListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLivePullToPushListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLivePullToPushListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLivePullToPushListRequest::getTaskId() const {
  return taskId_;
}

void DescribeLivePullToPushListRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeLivePullToPushListRequest::getDstUrl() const {
  return dstUrl_;
}

void DescribeLivePullToPushListRequest::setDstUrl(const std::string &dstUrl) {
  dstUrl_ = dstUrl;
  setParameter(std::string("DstUrl"), dstUrl);
}

long DescribeLivePullToPushListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLivePullToPushListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLivePullToPushListRequest::getRegion() const {
  return region_;
}

void DescribeLivePullToPushListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

