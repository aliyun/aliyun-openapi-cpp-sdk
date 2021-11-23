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

#include <alibabacloud/rtc/model/DescribeRecordFilesRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRecordFilesRequest;

DescribeRecordFilesRequest::DescribeRecordFilesRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "DescribeRecordFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecordFilesRequest::~DescribeRecordFilesRequest() {}

std::string DescribeRecordFilesRequest::getStartTime() const {
  return startTime_;
}

void DescribeRecordFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeRecordFilesRequest::getPageNum() const {
  return pageNum_;
}

void DescribeRecordFilesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::vector<std::string> DescribeRecordFilesRequest::getTaskIds() const {
  return taskIds_;
}

void DescribeRecordFilesRequest::setTaskIds(const std::vector<std::string> &taskIds) {
  taskIds_ = taskIds;
}

int DescribeRecordFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRecordFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRecordFilesRequest::getShowLog() const {
  return showLog_;
}

void DescribeRecordFilesRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::string DescribeRecordFilesRequest::getEndTime() const {
  return endTime_;
}

void DescribeRecordFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeRecordFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRecordFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRecordFilesRequest::getAppId() const {
  return appId_;
}

void DescribeRecordFilesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeRecordFilesRequest::getChannelId() const {
  return channelId_;
}

void DescribeRecordFilesRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

