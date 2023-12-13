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

#include <alibabacloud/cloud-siem/model/DeleteDataSourceRequest.h>

using AlibabaCloud::Cloud_siem::Model::DeleteDataSourceRequest;

DeleteDataSourceRequest::DeleteDataSourceRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DeleteDataSource") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDataSourceRequest::~DeleteDataSourceRequest() {}

std::string DeleteDataSourceRequest::getCloudCode() const {
  return cloudCode_;
}

void DeleteDataSourceRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string DeleteDataSourceRequest::getAccountId() const {
  return accountId_;
}

void DeleteDataSourceRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string DeleteDataSourceRequest::getRegionId() const {
  return regionId_;
}

void DeleteDataSourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DeleteDataSourceRequest::getDataSourceInstanceId() const {
  return dataSourceInstanceId_;
}

void DeleteDataSourceRequest::setDataSourceInstanceId(const std::string &dataSourceInstanceId) {
  dataSourceInstanceId_ = dataSourceInstanceId;
  setBodyParameter(std::string("DataSourceInstanceId"), dataSourceInstanceId);
}

