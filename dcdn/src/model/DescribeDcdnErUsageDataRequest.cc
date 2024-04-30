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

#include <alibabacloud/dcdn/model/DescribeDcdnErUsageDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnErUsageDataRequest;

DescribeDcdnErUsageDataRequest::DescribeDcdnErUsageDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnErUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnErUsageDataRequest::~DescribeDcdnErUsageDataRequest() {}

std::string DescribeDcdnErUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnErUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnErUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnErUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnErUsageDataRequest::getRoutineID() const {
  return routineID_;
}

void DescribeDcdnErUsageDataRequest::setRoutineID(const std::string &routineID) {
  routineID_ = routineID;
  setParameter(std::string("RoutineID"), routineID);
}

std::string DescribeDcdnErUsageDataRequest::getSpec() const {
  return spec_;
}

void DescribeDcdnErUsageDataRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string DescribeDcdnErUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeDcdnErUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

