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

#include <alibabacloud/sas/model/DescribeUniBackupDatabaseRequest.h>

using AlibabaCloud::Sas::Model::DescribeUniBackupDatabaseRequest;

DescribeUniBackupDatabaseRequest::DescribeUniBackupDatabaseRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeUniBackupDatabase") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUniBackupDatabaseRequest::~DescribeUniBackupDatabaseRequest() {}

std::string DescribeUniBackupDatabaseRequest::getDatabaseType() const {
  return databaseType_;
}

void DescribeUniBackupDatabaseRequest::setDatabaseType(const std::string &databaseType) {
  databaseType_ = databaseType;
  setParameter(std::string("DatabaseType"), databaseType);
}

long DescribeUniBackupDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUniBackupDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUniBackupDatabaseRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeUniBackupDatabaseRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeUniBackupDatabaseRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUniBackupDatabaseRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeUniBackupDatabaseRequest::getQueryType() const {
  return queryType_;
}

void DescribeUniBackupDatabaseRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

int DescribeUniBackupDatabaseRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeUniBackupDatabaseRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeUniBackupDatabaseRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeUniBackupDatabaseRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeUniBackupDatabaseRequest::getUniRegionId() const {
  return uniRegionId_;
}

void DescribeUniBackupDatabaseRequest::setUniRegionId(const std::string &uniRegionId) {
  uniRegionId_ = uniRegionId;
  setParameter(std::string("UniRegionId"), uniRegionId);
}

