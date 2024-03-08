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

#include <alibabacloud/dds/model/DescribeAuditRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeAuditRecordsRequest;

DescribeAuditRecordsRequest::DescribeAuditRecordsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeAuditRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAuditRecordsRequest::~DescribeAuditRecordsRequest() {}

long DescribeAuditRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAuditRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAuditRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeAuditRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeAuditRecordsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeAuditRecordsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

int DescribeAuditRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAuditRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAuditRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAuditRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAuditRecordsRequest::getDatabase() const {
  return database_;
}

void DescribeAuditRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

int DescribeAuditRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAuditRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAuditRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeAuditRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeAuditRecordsRequest::getNodeId() const {
  return nodeId_;
}

void DescribeAuditRecordsRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeAuditRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAuditRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAuditRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAuditRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAuditRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeAuditRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeAuditRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAuditRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAuditRecordsRequest::getLogicalOperator() const {
  return logicalOperator_;
}

void DescribeAuditRecordsRequest::setLogicalOperator(const std::string &logicalOperator) {
  logicalOperator_ = logicalOperator;
  setParameter(std::string("LogicalOperator"), logicalOperator);
}

std::string DescribeAuditRecordsRequest::getForm() const {
  return form_;
}

void DescribeAuditRecordsRequest::setForm(const std::string &form) {
  form_ = form;
  setParameter(std::string("Form"), form);
}

std::string DescribeAuditRecordsRequest::getUser() const {
  return user_;
}

void DescribeAuditRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

std::string DescribeAuditRecordsRequest::getOrderType() const {
  return orderType_;
}

void DescribeAuditRecordsRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

