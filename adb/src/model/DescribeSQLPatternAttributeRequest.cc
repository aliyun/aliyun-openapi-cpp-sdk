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

#include <alibabacloud/adb/model/DescribeSQLPatternAttributeRequest.h>

using AlibabaCloud::Adb::Model::DescribeSQLPatternAttributeRequest;

DescribeSQLPatternAttributeRequest::DescribeSQLPatternAttributeRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeSQLPatternAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLPatternAttributeRequest::~DescribeSQLPatternAttributeRequest() {}

std::string DescribeSQLPatternAttributeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSQLPatternAttributeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

long DescribeSQLPatternAttributeRequest::getPatternId() const {
  return patternId_;
}

void DescribeSQLPatternAttributeRequest::setPatternId(long patternId) {
  patternId_ = patternId;
  setParameter(std::string("PatternId"), std::to_string(patternId));
}

std::string DescribeSQLPatternAttributeRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLPatternAttributeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLPatternAttributeRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLPatternAttributeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLPatternAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeSQLPatternAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSQLPatternAttributeRequest::getLang() const {
  return lang_;
}

void DescribeSQLPatternAttributeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

