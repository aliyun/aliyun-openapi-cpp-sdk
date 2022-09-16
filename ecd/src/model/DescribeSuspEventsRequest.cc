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

#include <alibabacloud/ecd/model/DescribeSuspEventsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeSuspEventsRequest;

DescribeSuspEventsRequest::DescribeSuspEventsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeSuspEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSuspEventsRequest::~DescribeSuspEventsRequest() {}

std::string DescribeSuspEventsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeSuspEventsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string DescribeSuspEventsRequest::getAlarmUniqueInfo() const {
  return alarmUniqueInfo_;
}

void DescribeSuspEventsRequest::setAlarmUniqueInfo(const std::string &alarmUniqueInfo) {
  alarmUniqueInfo_ = alarmUniqueInfo;
  setParameter(std::string("AlarmUniqueInfo"), alarmUniqueInfo);
}

std::string DescribeSuspEventsRequest::getDealed() const {
  return dealed_;
}

void DescribeSuspEventsRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeSuspEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSuspEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeSuspEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSuspEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSuspEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSuspEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSuspEventsRequest::getParentEventType() const {
  return parentEventType_;
}

void DescribeSuspEventsRequest::setParentEventType(const std::string &parentEventType) {
  parentEventType_ = parentEventType;
  setParameter(std::string("ParentEventType"), parentEventType);
}

std::string DescribeSuspEventsRequest::getLang() const {
  return lang_;
}

void DescribeSuspEventsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeSuspEventsRequest::getLevels() const {
  return levels_;
}

void DescribeSuspEventsRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

