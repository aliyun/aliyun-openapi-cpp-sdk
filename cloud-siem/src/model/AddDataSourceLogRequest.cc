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

#include <alibabacloud/cloud-siem/model/AddDataSourceLogRequest.h>

using AlibabaCloud::Cloud_siem::Model::AddDataSourceLogRequest;

AddDataSourceLogRequest::AddDataSourceLogRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "AddDataSourceLog") {
  setMethod(HttpRequest::Method::Post);
}

AddDataSourceLogRequest::~AddDataSourceLogRequest() {}

std::string AddDataSourceLogRequest::getCloudCode() const {
  return cloudCode_;
}

void AddDataSourceLogRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string AddDataSourceLogRequest::getAccountId() const {
  return accountId_;
}

void AddDataSourceLogRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string AddDataSourceLogRequest::getLogCode() const {
  return logCode_;
}

void AddDataSourceLogRequest::setLogCode(const std::string &logCode) {
  logCode_ = logCode;
  setBodyParameter(std::string("LogCode"), logCode);
}

std::string AddDataSourceLogRequest::getRegionId() const {
  return regionId_;
}

void AddDataSourceLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string AddDataSourceLogRequest::getDataSourceInstanceLogs() const {
  return dataSourceInstanceLogs_;
}

void AddDataSourceLogRequest::setDataSourceInstanceLogs(const std::string &dataSourceInstanceLogs) {
  dataSourceInstanceLogs_ = dataSourceInstanceLogs;
  setBodyParameter(std::string("DataSourceInstanceLogs"), dataSourceInstanceLogs);
}

std::string AddDataSourceLogRequest::getDataSourceInstanceId() const {
  return dataSourceInstanceId_;
}

void AddDataSourceLogRequest::setDataSourceInstanceId(const std::string &dataSourceInstanceId) {
  dataSourceInstanceId_ = dataSourceInstanceId;
  setBodyParameter(std::string("DataSourceInstanceId"), dataSourceInstanceId);
}

