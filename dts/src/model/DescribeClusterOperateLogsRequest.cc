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

#include <alibabacloud/dts/model/DescribeClusterOperateLogsRequest.h>

using AlibabaCloud::Dts::Model::DescribeClusterOperateLogsRequest;

DescribeClusterOperateLogsRequest::DescribeClusterOperateLogsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeClusterOperateLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterOperateLogsRequest::~DescribeClusterOperateLogsRequest() {}

std::string DescribeClusterOperateLogsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeClusterOperateLogsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeClusterOperateLogsRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void DescribeClusterOperateLogsRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setBodyParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

long DescribeClusterOperateLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeClusterOperateLogsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeClusterOperateLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeClusterOperateLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeClusterOperateLogsRequest::getAccountId() const {
  return accountId_;
}

void DescribeClusterOperateLogsRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

int DescribeClusterOperateLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeClusterOperateLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeClusterOperateLogsRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeClusterOperateLogsRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setBodyParameter(std::string("DtsJobId"), dtsJobId);
}

long DescribeClusterOperateLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeClusterOperateLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeClusterOperateLogsRequest::getOwnerID() const {
  return ownerID_;
}

void DescribeClusterOperateLogsRequest::setOwnerID(const std::string &ownerID) {
  ownerID_ = ownerID;
  setBodyParameter(std::string("OwnerID"), ownerID);
}

