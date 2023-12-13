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

#include <alibabacloud/cloud-siem/model/ModifyDataSourceRequest.h>

using AlibabaCloud::Cloud_siem::Model::ModifyDataSourceRequest;

ModifyDataSourceRequest::ModifyDataSourceRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ModifyDataSource") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDataSourceRequest::~ModifyDataSourceRequest() {}

std::string ModifyDataSourceRequest::getDataSourceType() const {
  return dataSourceType_;
}

void ModifyDataSourceRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setBodyParameter(std::string("DataSourceType"), dataSourceType);
}

std::string ModifyDataSourceRequest::getCloudCode() const {
  return cloudCode_;
}

void ModifyDataSourceRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string ModifyDataSourceRequest::getDataSourceInstanceName() const {
  return dataSourceInstanceName_;
}

void ModifyDataSourceRequest::setDataSourceInstanceName(const std::string &dataSourceInstanceName) {
  dataSourceInstanceName_ = dataSourceInstanceName;
  setBodyParameter(std::string("DataSourceInstanceName"), dataSourceInstanceName);
}

std::string ModifyDataSourceRequest::getAccountId() const {
  return accountId_;
}

void ModifyDataSourceRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string ModifyDataSourceRequest::getRegionId() const {
  return regionId_;
}

void ModifyDataSourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ModifyDataSourceRequest::getDataSourceInstanceRemark() const {
  return dataSourceInstanceRemark_;
}

void ModifyDataSourceRequest::setDataSourceInstanceRemark(const std::string &dataSourceInstanceRemark) {
  dataSourceInstanceRemark_ = dataSourceInstanceRemark;
  setBodyParameter(std::string("DataSourceInstanceRemark"), dataSourceInstanceRemark);
}

std::string ModifyDataSourceRequest::getDataSourceInstanceParams() const {
  return dataSourceInstanceParams_;
}

void ModifyDataSourceRequest::setDataSourceInstanceParams(const std::string &dataSourceInstanceParams) {
  dataSourceInstanceParams_ = dataSourceInstanceParams;
  setBodyParameter(std::string("DataSourceInstanceParams"), dataSourceInstanceParams);
}

std::string ModifyDataSourceRequest::getDataSourceInstanceId() const {
  return dataSourceInstanceId_;
}

void ModifyDataSourceRequest::setDataSourceInstanceId(const std::string &dataSourceInstanceId) {
  dataSourceInstanceId_ = dataSourceInstanceId;
  setBodyParameter(std::string("DataSourceInstanceId"), dataSourceInstanceId);
}

