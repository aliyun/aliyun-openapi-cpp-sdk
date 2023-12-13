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

#include <alibabacloud/cloud-siem/model/ModifyDataSourceLogRequest.h>

using AlibabaCloud::Cloud_siem::Model::ModifyDataSourceLogRequest;

ModifyDataSourceLogRequest::ModifyDataSourceLogRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ModifyDataSourceLog") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDataSourceLogRequest::~ModifyDataSourceLogRequest() {}

std::string ModifyDataSourceLogRequest::getDataSourceType() const {
  return dataSourceType_;
}

void ModifyDataSourceLogRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setBodyParameter(std::string("DataSourceType"), dataSourceType);
}

std::string ModifyDataSourceLogRequest::getCloudCode() const {
  return cloudCode_;
}

void ModifyDataSourceLogRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string ModifyDataSourceLogRequest::getAccountId() const {
  return accountId_;
}

void ModifyDataSourceLogRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string ModifyDataSourceLogRequest::getLogCode() const {
  return logCode_;
}

void ModifyDataSourceLogRequest::setLogCode(const std::string &logCode) {
  logCode_ = logCode;
  setBodyParameter(std::string("LogCode"), logCode);
}

std::string ModifyDataSourceLogRequest::getRegionId() const {
  return regionId_;
}

void ModifyDataSourceLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ModifyDataSourceLogRequest::getLogInstanceId() const {
  return logInstanceId_;
}

void ModifyDataSourceLogRequest::setLogInstanceId(const std::string &logInstanceId) {
  logInstanceId_ = logInstanceId;
  setBodyParameter(std::string("LogInstanceId"), logInstanceId);
}

std::string ModifyDataSourceLogRequest::getDataSourceInstanceLogs() const {
  return dataSourceInstanceLogs_;
}

void ModifyDataSourceLogRequest::setDataSourceInstanceLogs(const std::string &dataSourceInstanceLogs) {
  dataSourceInstanceLogs_ = dataSourceInstanceLogs;
  setBodyParameter(std::string("DataSourceInstanceLogs"), dataSourceInstanceLogs);
}

std::string ModifyDataSourceLogRequest::getDataSourceInstanceId() const {
  return dataSourceInstanceId_;
}

void ModifyDataSourceLogRequest::setDataSourceInstanceId(const std::string &dataSourceInstanceId) {
  dataSourceInstanceId_ = dataSourceInstanceId;
  setBodyParameter(std::string("DataSourceInstanceId"), dataSourceInstanceId);
}

