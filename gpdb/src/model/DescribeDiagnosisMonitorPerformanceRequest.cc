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

#include <alibabacloud/gpdb/model/DescribeDiagnosisMonitorPerformanceRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDiagnosisMonitorPerformanceRequest;

DescribeDiagnosisMonitorPerformanceRequest::DescribeDiagnosisMonitorPerformanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDiagnosisMonitorPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosisMonitorPerformanceRequest::~DescribeDiagnosisMonitorPerformanceRequest() {}

std::string DescribeDiagnosisMonitorPerformanceRequest::getQueryCondition() const {
  return queryCondition_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getDatabase() const {
  return database_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getUser() const {
  return user_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

