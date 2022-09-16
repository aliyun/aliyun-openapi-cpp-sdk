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

#include <alibabacloud/ecd/model/DescribeClientEventsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeClientEventsRequest;

DescribeClientEventsRequest::DescribeClientEventsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeClientEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClientEventsRequest::~DescribeClientEventsRequest() {}

std::string DescribeClientEventsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeClientEventsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::vector<std::string> DescribeClientEventsRequest::getEventTypes() const {
  return eventTypes_;
}

void DescribeClientEventsRequest::setEventTypes(const std::vector<std::string> &eventTypes) {
  eventTypes_ = eventTypes;
}

std::string DescribeClientEventsRequest::getStartTime() const {
  return startTime_;
}

void DescribeClientEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeClientEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeClientEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeClientEventsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeClientEventsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeClientEventsRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeClientEventsRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string DescribeClientEventsRequest::getDirectoryId() const {
  return directoryId_;
}

void DescribeClientEventsRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::string DescribeClientEventsRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeClientEventsRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string DescribeClientEventsRequest::getDesktopName() const {
  return desktopName_;
}

void DescribeClientEventsRequest::setDesktopName(const std::string &desktopName) {
  desktopName_ = desktopName;
  setParameter(std::string("DesktopName"), desktopName);
}

std::string DescribeClientEventsRequest::getEndTime() const {
  return endTime_;
}

void DescribeClientEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeClientEventsRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void DescribeClientEventsRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

std::string DescribeClientEventsRequest::getDesktopIp() const {
  return desktopIp_;
}

void DescribeClientEventsRequest::setDesktopIp(const std::string &desktopIp) {
  desktopIp_ = desktopIp;
  setParameter(std::string("DesktopIp"), desktopIp);
}

int DescribeClientEventsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeClientEventsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeClientEventsRequest::getEventType() const {
  return eventType_;
}

void DescribeClientEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

