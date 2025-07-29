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

#include <alibabacloud/live/model/DescribeLiveStreamPreloadTasksRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamPreloadTasksRequest;

DescribeLiveStreamPreloadTasksRequest::DescribeLiveStreamPreloadTasksRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamPreloadTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamPreloadTasksRequest::~DescribeLiveStreamPreloadTasksRequest() {}

std::string DescribeLiveStreamPreloadTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveStreamPreloadTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeLiveStreamPreloadTasksRequest::getPageNum() const {
  return pageNum_;
}

void DescribeLiveStreamPreloadTasksRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeLiveStreamPreloadTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamPreloadTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLiveStreamPreloadTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveStreamPreloadTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveStreamPreloadTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeLiveStreamPreloadTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeLiveStreamPreloadTasksRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamPreloadTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveStreamPreloadTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveStreamPreloadTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveStreamPreloadTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamPreloadTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveStreamPreloadTasksRequest::getPlayUrl() const {
  return playUrl_;
}

void DescribeLiveStreamPreloadTasksRequest::setPlayUrl(const std::string &playUrl) {
  playUrl_ = playUrl;
  setParameter(std::string("PlayUrl"), playUrl);
}

std::string DescribeLiveStreamPreloadTasksRequest::getStatus() const {
  return status_;
}

void DescribeLiveStreamPreloadTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

