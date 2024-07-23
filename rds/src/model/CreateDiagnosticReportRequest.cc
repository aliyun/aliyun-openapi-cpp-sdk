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

#include <alibabacloud/rds/model/CreateDiagnosticReportRequest.h>

using AlibabaCloud::Rds::Model::CreateDiagnosticReportRequest;

CreateDiagnosticReportRequest::CreateDiagnosticReportRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDiagnosticReport") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiagnosticReportRequest::~CreateDiagnosticReportRequest() {}

std::string CreateDiagnosticReportRequest::getEndTime() const {
  return endTime_;
}

void CreateDiagnosticReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string CreateDiagnosticReportRequest::getStartTime() const {
  return startTime_;
}

void CreateDiagnosticReportRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateDiagnosticReportRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDiagnosticReportRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDiagnosticReportRequest::getRegionId() const {
  return regionId_;
}

void CreateDiagnosticReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDiagnosticReportRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDiagnosticReportRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDiagnosticReportRequest::getCategory() const {
  return category_;
}

void CreateDiagnosticReportRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

