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

#include <alibabacloud/cloud-siem/model/AddDataSourceRequest.h>

using AlibabaCloud::Cloud_siem::Model::AddDataSourceRequest;

AddDataSourceRequest::AddDataSourceRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "AddDataSource") {
  setMethod(HttpRequest::Method::Post);
}

AddDataSourceRequest::~AddDataSourceRequest() {}

std::string AddDataSourceRequest::getDataSourceType() const {
  return dataSourceType_;
}

void AddDataSourceRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setBodyParameter(std::string("DataSourceType"), dataSourceType);
}

std::string AddDataSourceRequest::getCloudCode() const {
  return cloudCode_;
}

void AddDataSourceRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string AddDataSourceRequest::getDataSourceInstanceName() const {
  return dataSourceInstanceName_;
}

void AddDataSourceRequest::setDataSourceInstanceName(const std::string &dataSourceInstanceName) {
  dataSourceInstanceName_ = dataSourceInstanceName;
  setBodyParameter(std::string("DataSourceInstanceName"), dataSourceInstanceName);
}

std::string AddDataSourceRequest::getAccountId() const {
  return accountId_;
}

void AddDataSourceRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string AddDataSourceRequest::getRegionId() const {
  return regionId_;
}

void AddDataSourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string AddDataSourceRequest::getDataSourceInstanceRemark() const {
  return dataSourceInstanceRemark_;
}

void AddDataSourceRequest::setDataSourceInstanceRemark(const std::string &dataSourceInstanceRemark) {
  dataSourceInstanceRemark_ = dataSourceInstanceRemark;
  setBodyParameter(std::string("DataSourceInstanceRemark"), dataSourceInstanceRemark);
}

std::string AddDataSourceRequest::getDataSourceInstanceParams() const {
  return dataSourceInstanceParams_;
}

void AddDataSourceRequest::setDataSourceInstanceParams(const std::string &dataSourceInstanceParams) {
  dataSourceInstanceParams_ = dataSourceInstanceParams;
  setBodyParameter(std::string("DataSourceInstanceParams"), dataSourceInstanceParams);
}

