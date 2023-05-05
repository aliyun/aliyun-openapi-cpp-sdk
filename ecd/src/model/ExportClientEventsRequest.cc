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

#include <alibabacloud/ecd/model/ExportClientEventsRequest.h>

using AlibabaCloud::Ecd::Model::ExportClientEventsRequest;

ExportClientEventsRequest::ExportClientEventsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ExportClientEvents") {
  setMethod(HttpRequest::Method::Post);
}

ExportClientEventsRequest::~ExportClientEventsRequest() {}

std::string ExportClientEventsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ExportClientEventsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::vector<std::string> ExportClientEventsRequest::getEventTypes() const {
  return eventTypes_;
}

void ExportClientEventsRequest::setEventTypes(const std::vector<std::string> &eventTypes) {
  eventTypes_ = eventTypes;
}

std::string ExportClientEventsRequest::getStartTime() const {
  return startTime_;
}

void ExportClientEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ExportClientEventsRequest::getRegionId() const {
  return regionId_;
}

void ExportClientEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ExportClientEventsRequest::getEndUserId() const {
  return endUserId_;
}

void ExportClientEventsRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string ExportClientEventsRequest::getDesktopId() const {
  return desktopId_;
}

void ExportClientEventsRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string ExportClientEventsRequest::getDesktopName() const {
  return desktopName_;
}

void ExportClientEventsRequest::setDesktopName(const std::string &desktopName) {
  desktopName_ = desktopName;
  setParameter(std::string("DesktopName"), desktopName);
}

std::string ExportClientEventsRequest::getEndTime() const {
  return endTime_;
}

void ExportClientEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ExportClientEventsRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void ExportClientEventsRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

int ExportClientEventsRequest::getMaxResults() const {
  return maxResults_;
}

void ExportClientEventsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ExportClientEventsRequest::getEventType() const {
  return eventType_;
}

void ExportClientEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string ExportClientEventsRequest::getLangType() const {
  return langType_;
}

void ExportClientEventsRequest::setLangType(const std::string &langType) {
  langType_ = langType;
  setParameter(std::string("LangType"), langType);
}

