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

#include <alibabacloud/swas-open/model/DescribeDatabaseInstanceMetricDataRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeDatabaseInstanceMetricDataRequest;

DescribeDatabaseInstanceMetricDataRequest::DescribeDatabaseInstanceMetricDataRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeDatabaseInstanceMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabaseInstanceMetricDataRequest::~DescribeDatabaseInstanceMetricDataRequest() {}

std::string DescribeDatabaseInstanceMetricDataRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void DescribeDatabaseInstanceMetricDataRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string DescribeDatabaseInstanceMetricDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDatabaseInstanceMetricDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDatabaseInstanceMetricDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDatabaseInstanceMetricDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDatabaseInstanceMetricDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeDatabaseInstanceMetricDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDatabaseInstanceMetricDataRequest::getMetricName() const {
  return metricName_;
}

void DescribeDatabaseInstanceMetricDataRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

