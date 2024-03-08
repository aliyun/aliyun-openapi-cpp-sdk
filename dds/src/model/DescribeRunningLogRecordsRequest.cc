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

#include <alibabacloud/dds/model/DescribeRunningLogRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeRunningLogRecordsRequest;

DescribeRunningLogRecordsRequest::DescribeRunningLogRecordsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeRunningLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRunningLogRecordsRequest::~DescribeRunningLogRecordsRequest() {}

long DescribeRunningLogRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRunningLogRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRunningLogRecordsRequest::getRoleId() const {
  return roleId_;
}

void DescribeRunningLogRecordsRequest::setRoleId(const std::string &roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), roleId);
}

std::string DescribeRunningLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeRunningLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeRunningLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRunningLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRunningLogRecordsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeRunningLogRecordsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

std::string DescribeRunningLogRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRunningLogRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRunningLogRecordsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRunningLogRecordsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeRunningLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRunningLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRunningLogRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeRunningLogRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeRunningLogRecordsRequest::getRoleType() const {
  return roleType_;
}

void DescribeRunningLogRecordsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeRunningLogRecordsRequest::getNodeId() const {
  return nodeId_;
}

void DescribeRunningLogRecordsRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeRunningLogRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRunningLogRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRunningLogRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRunningLogRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeRunningLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeRunningLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeRunningLogRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRunningLogRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRunningLogRecordsRequest::getLogicalOperator() const {
  return logicalOperator_;
}

void DescribeRunningLogRecordsRequest::setLogicalOperator(const std::string &logicalOperator) {
  logicalOperator_ = logicalOperator;
  setParameter(std::string("LogicalOperator"), logicalOperator);
}

std::string DescribeRunningLogRecordsRequest::getDBName() const {
  return dBName_;
}

void DescribeRunningLogRecordsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DescribeRunningLogRecordsRequest::getOrderType() const {
  return orderType_;
}

void DescribeRunningLogRecordsRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

