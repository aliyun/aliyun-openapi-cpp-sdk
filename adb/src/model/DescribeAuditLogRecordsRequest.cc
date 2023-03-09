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

#include <alibabacloud/adb/model/DescribeAuditLogRecordsRequest.h>

using AlibabaCloud::Adb::Model::DescribeAuditLogRecordsRequest;

DescribeAuditLogRecordsRequest::DescribeAuditLogRecordsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeAuditLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAuditLogRecordsRequest::~DescribeAuditLogRecordsRequest() {}

long DescribeAuditLogRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAuditLogRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAuditLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeAuditLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeAuditLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAuditLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAuditLogRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAuditLogRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAuditLogRecordsRequest::getHostAddress() const {
  return hostAddress_;
}

void DescribeAuditLogRecordsRequest::setHostAddress(const std::string &hostAddress) {
  hostAddress_ = hostAddress;
  setParameter(std::string("HostAddress"), hostAddress);
}

std::string DescribeAuditLogRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeAuditLogRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAuditLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAuditLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAuditLogRecordsRequest::getOrder() const {
  return order_;
}

void DescribeAuditLogRecordsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeAuditLogRecordsRequest::getSqlType() const {
  return sqlType_;
}

void DescribeAuditLogRecordsRequest::setSqlType(const std::string &sqlType) {
  sqlType_ = sqlType;
  setParameter(std::string("SqlType"), sqlType);
}

std::string DescribeAuditLogRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAuditLogRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAuditLogRecordsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAuditLogRecordsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAuditLogRecordsRequest::getQueryKeyword() const {
  return queryKeyword_;
}

void DescribeAuditLogRecordsRequest::setQueryKeyword(const std::string &queryKeyword) {
  queryKeyword_ = queryKeyword;
  setParameter(std::string("QueryKeyword"), queryKeyword);
}

std::string DescribeAuditLogRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAuditLogRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAuditLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeAuditLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeAuditLogRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAuditLogRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAuditLogRecordsRequest::getDBName() const {
  return dBName_;
}

void DescribeAuditLogRecordsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DescribeAuditLogRecordsRequest::getSucceed() const {
  return succeed_;
}

void DescribeAuditLogRecordsRequest::setSucceed(const std::string &succeed) {
  succeed_ = succeed;
  setParameter(std::string("Succeed"), succeed);
}

std::string DescribeAuditLogRecordsRequest::getUser() const {
  return user_;
}

void DescribeAuditLogRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

std::string DescribeAuditLogRecordsRequest::getOrderType() const {
  return orderType_;
}

void DescribeAuditLogRecordsRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

