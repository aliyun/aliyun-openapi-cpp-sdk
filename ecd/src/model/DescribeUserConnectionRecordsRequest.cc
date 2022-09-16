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

#include <alibabacloud/ecd/model/DescribeUserConnectionRecordsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeUserConnectionRecordsRequest;

DescribeUserConnectionRecordsRequest::DescribeUserConnectionRecordsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeUserConnectionRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserConnectionRecordsRequest::~DescribeUserConnectionRecordsRequest() {}

long DescribeUserConnectionRecordsRequest::getConnectEndTimeFrom() const {
  return connectEndTimeFrom_;
}

void DescribeUserConnectionRecordsRequest::setConnectEndTimeFrom(long connectEndTimeFrom) {
  connectEndTimeFrom_ = connectEndTimeFrom;
  setParameter(std::string("ConnectEndTimeFrom"), std::to_string(connectEndTimeFrom));
}

long DescribeUserConnectionRecordsRequest::getConnectDurationFrom() const {
  return connectDurationFrom_;
}

void DescribeUserConnectionRecordsRequest::setConnectDurationFrom(long connectDurationFrom) {
  connectDurationFrom_ = connectDurationFrom;
  setParameter(std::string("ConnectDurationFrom"), std::to_string(connectDurationFrom));
}

long DescribeUserConnectionRecordsRequest::getConnectDurationTo() const {
  return connectDurationTo_;
}

void DescribeUserConnectionRecordsRequest::setConnectDurationTo(long connectDurationTo) {
  connectDurationTo_ = connectDurationTo;
  setParameter(std::string("ConnectDurationTo"), std::to_string(connectDurationTo));
}

std::string DescribeUserConnectionRecordsRequest::getEndUserType() const {
  return endUserType_;
}

void DescribeUserConnectionRecordsRequest::setEndUserType(const std::string &endUserType) {
  endUserType_ = endUserType;
  setParameter(std::string("EndUserType"), endUserType);
}

std::string DescribeUserConnectionRecordsRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DescribeUserConnectionRecordsRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DescribeUserConnectionRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeUserConnectionRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeUserConnectionRecordsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeUserConnectionRecordsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long DescribeUserConnectionRecordsRequest::getConnectStartTimeFrom() const {
  return connectStartTimeFrom_;
}

void DescribeUserConnectionRecordsRequest::setConnectStartTimeFrom(long connectStartTimeFrom) {
  connectStartTimeFrom_ = connectStartTimeFrom;
  setParameter(std::string("ConnectStartTimeFrom"), std::to_string(connectStartTimeFrom));
}

std::string DescribeUserConnectionRecordsRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeUserConnectionRecordsRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string DescribeUserConnectionRecordsRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeUserConnectionRecordsRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

long DescribeUserConnectionRecordsRequest::getConnectEndTimeTo() const {
  return connectEndTimeTo_;
}

void DescribeUserConnectionRecordsRequest::setConnectEndTimeTo(long connectEndTimeTo) {
  connectEndTimeTo_ = connectEndTimeTo;
  setParameter(std::string("ConnectEndTimeTo"), std::to_string(connectEndTimeTo));
}

long DescribeUserConnectionRecordsRequest::getConnectStartTimeTo() const {
  return connectStartTimeTo_;
}

void DescribeUserConnectionRecordsRequest::setConnectStartTimeTo(long connectStartTimeTo) {
  connectStartTimeTo_ = connectStartTimeTo;
  setParameter(std::string("ConnectStartTimeTo"), std::to_string(connectStartTimeTo));
}

int DescribeUserConnectionRecordsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeUserConnectionRecordsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

