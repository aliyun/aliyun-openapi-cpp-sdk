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

#include <alibabacloud/adb/model/DescribeDiagnosisDimensionsRequest.h>

using AlibabaCloud::Adb::Model::DescribeDiagnosisDimensionsRequest;

DescribeDiagnosisDimensionsRequest::DescribeDiagnosisDimensionsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDiagnosisDimensions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosisDimensionsRequest::~DescribeDiagnosisDimensionsRequest() {}

std::string DescribeDiagnosisDimensionsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDiagnosisDimensionsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDiagnosisDimensionsRequest::getQueryCondition() const {
  return queryCondition_;
}

void DescribeDiagnosisDimensionsRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DescribeDiagnosisDimensionsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDiagnosisDimensionsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDiagnosisDimensionsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDiagnosisDimensionsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDiagnosisDimensionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosisDimensionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosisDimensionsRequest::getLang() const {
  return lang_;
}

void DescribeDiagnosisDimensionsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

