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

#include <alibabacloud/oceanbasepro/model/DescribeProcessStatsCompositionRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeProcessStatsCompositionRequest;

DescribeProcessStatsCompositionRequest::DescribeProcessStatsCompositionRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeProcessStatsComposition") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProcessStatsCompositionRequest::~DescribeProcessStatsCompositionRequest() {}

std::string DescribeProcessStatsCompositionRequest::getUId() const {
  return uId_;
}

void DescribeProcessStatsCompositionRequest::setUId(const std::string &uId) {
  uId_ = uId;
  setBodyParameter(std::string("UId"), uId);
}

bool DescribeProcessStatsCompositionRequest::getMergeDynamicSql() const {
  return mergeDynamicSql_;
}

void DescribeProcessStatsCompositionRequest::setMergeDynamicSql(bool mergeDynamicSql) {
  mergeDynamicSql_ = mergeDynamicSql;
  setBodyParameter(std::string("MergeDynamicSql"), mergeDynamicSql ? "true" : "false");
}

std::string DescribeProcessStatsCompositionRequest::getSqlText() const {
  return sqlText_;
}

void DescribeProcessStatsCompositionRequest::setSqlText(const std::string &sqlText) {
  sqlText_ = sqlText;
  setBodyParameter(std::string("SqlText"), sqlText);
}

std::string DescribeProcessStatsCompositionRequest::getClientIp() const {
  return clientIp_;
}

void DescribeProcessStatsCompositionRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setBodyParameter(std::string("ClientIp"), clientIp);
}

std::string DescribeProcessStatsCompositionRequest::getTenantId() const {
  return tenantId_;
}

void DescribeProcessStatsCompositionRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeProcessStatsCompositionRequest::getServerIp() const {
  return serverIp_;
}

void DescribeProcessStatsCompositionRequest::setServerIp(const std::string &serverIp) {
  serverIp_ = serverIp;
  setBodyParameter(std::string("ServerIp"), serverIp);
}

std::string DescribeProcessStatsCompositionRequest::getUsers() const {
  return users_;
}

void DescribeProcessStatsCompositionRequest::setUsers(const std::string &users) {
  users_ = users;
  setBodyParameter(std::string("Users"), users);
}

std::string DescribeProcessStatsCompositionRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeProcessStatsCompositionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeProcessStatsCompositionRequest::getStatus() const {
  return status_;
}

void DescribeProcessStatsCompositionRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

