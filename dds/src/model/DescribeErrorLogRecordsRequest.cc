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

#include <alibabacloud/dds/model/DescribeErrorLogRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeErrorLogRecordsRequest;

DescribeErrorLogRecordsRequest::DescribeErrorLogRecordsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeErrorLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeErrorLogRecordsRequest::~DescribeErrorLogRecordsRequest() {}

long DescribeErrorLogRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeErrorLogRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeErrorLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeErrorLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeErrorLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeErrorLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeErrorLogRecordsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeErrorLogRecordsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

std::string DescribeErrorLogRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeErrorLogRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeErrorLogRecordsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeErrorLogRecordsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeErrorLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeErrorLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeErrorLogRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeErrorLogRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeErrorLogRecordsRequest::getRoleType() const {
  return roleType_;
}

void DescribeErrorLogRecordsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeErrorLogRecordsRequest::getNodeId() const {
  return nodeId_;
}

void DescribeErrorLogRecordsRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeErrorLogRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeErrorLogRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeErrorLogRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeErrorLogRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeErrorLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeErrorLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeErrorLogRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeErrorLogRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeErrorLogRecordsRequest::getLogicalOperator() const {
  return logicalOperator_;
}

void DescribeErrorLogRecordsRequest::setLogicalOperator(const std::string &logicalOperator) {
  logicalOperator_ = logicalOperator;
  setParameter(std::string("LogicalOperator"), logicalOperator);
}

std::string DescribeErrorLogRecordsRequest::getDBName() const {
  return dBName_;
}

void DescribeErrorLogRecordsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

