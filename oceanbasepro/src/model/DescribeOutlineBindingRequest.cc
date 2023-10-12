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

#include <alibabacloud/oceanbasepro/model/DescribeOutlineBindingRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOutlineBindingRequest;

DescribeOutlineBindingRequest::DescribeOutlineBindingRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOutlineBinding") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOutlineBindingRequest::~DescribeOutlineBindingRequest() {}

std::string DescribeOutlineBindingRequest::getSQLId() const {
  return sQLId_;
}

void DescribeOutlineBindingRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeOutlineBindingRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOutlineBindingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOutlineBindingRequest::getDatabaseName() const {
  return databaseName_;
}

void DescribeOutlineBindingRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

std::string DescribeOutlineBindingRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOutlineBindingRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeOutlineBindingRequest::getTableName() const {
  return tableName_;
}

void DescribeOutlineBindingRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setBodyParameter(std::string("TableName"), tableName);
}

bool DescribeOutlineBindingRequest::getIsConcurrentLimit() const {
  return isConcurrentLimit_;
}

void DescribeOutlineBindingRequest::setIsConcurrentLimit(bool isConcurrentLimit) {
  isConcurrentLimit_ = isConcurrentLimit;
  setBodyParameter(std::string("IsConcurrentLimit"), isConcurrentLimit ? "true" : "false");
}

