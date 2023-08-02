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

#include <alibabacloud/gpdb/model/DownloadDiagnosisRecordsRequest.h>

using AlibabaCloud::Gpdb::Model::DownloadDiagnosisRecordsRequest;

DownloadDiagnosisRecordsRequest::DownloadDiagnosisRecordsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DownloadDiagnosisRecords") {
  setMethod(HttpRequest::Method::Post);
}

DownloadDiagnosisRecordsRequest::~DownloadDiagnosisRecordsRequest() {}

std::string DownloadDiagnosisRecordsRequest::getQueryCondition() const {
  return queryCondition_;
}

void DownloadDiagnosisRecordsRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DownloadDiagnosisRecordsRequest::getStartTime() const {
  return startTime_;
}

void DownloadDiagnosisRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DownloadDiagnosisRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DownloadDiagnosisRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DownloadDiagnosisRecordsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DownloadDiagnosisRecordsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DownloadDiagnosisRecordsRequest::getDatabase() const {
  return database_;
}

void DownloadDiagnosisRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DownloadDiagnosisRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DownloadDiagnosisRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DownloadDiagnosisRecordsRequest::getLang() const {
  return lang_;
}

void DownloadDiagnosisRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DownloadDiagnosisRecordsRequest::getEndTime() const {
  return endTime_;
}

void DownloadDiagnosisRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DownloadDiagnosisRecordsRequest::getUser() const {
  return user_;
}

void DownloadDiagnosisRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

