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

#include <alibabacloud/drds/model/DescribeDrdsInstanceMonitorRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsInstanceMonitorRequest;

DescribeDrdsInstanceMonitorRequest::DescribeDrdsInstanceMonitorRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsInstanceMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsInstanceMonitorRequest::~DescribeDrdsInstanceMonitorRequest() {}

long DescribeDrdsInstanceMonitorRequest::getEndTime() const {
  return endTime_;
}

void DescribeDrdsInstanceMonitorRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeDrdsInstanceMonitorRequest::getStartTime() const {
  return startTime_;
}

void DescribeDrdsInstanceMonitorRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDrdsInstanceMonitorRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsInstanceMonitorRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeDrdsInstanceMonitorRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsInstanceMonitorRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDrdsInstanceMonitorRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrdsInstanceMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDrdsInstanceMonitorRequest::getKey() const {
  return key_;
}

void DescribeDrdsInstanceMonitorRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

int DescribeDrdsInstanceMonitorRequest::getPeriodMultiple() const {
  return periodMultiple_;
}

void DescribeDrdsInstanceMonitorRequest::setPeriodMultiple(int periodMultiple) {
  periodMultiple_ = periodMultiple;
  setParameter(std::string("PeriodMultiple"), std::to_string(periodMultiple));
}

