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

#include <alibabacloud/dataworks-public/model/ListPermissionApplyOrdersRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListPermissionApplyOrdersRequest;

ListPermissionApplyOrdersRequest::ListPermissionApplyOrdersRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListPermissionApplyOrders") {
  setMethod(HttpRequest::Method::Post);
}

ListPermissionApplyOrdersRequest::~ListPermissionApplyOrdersRequest() {}

long ListPermissionApplyOrdersRequest::getStartTime() const {
  return startTime_;
}

void ListPermissionApplyOrdersRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListPermissionApplyOrdersRequest::getPageNum() const {
  return pageNum_;
}

void ListPermissionApplyOrdersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListPermissionApplyOrdersRequest::getPageSize() const {
  return pageSize_;
}

void ListPermissionApplyOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPermissionApplyOrdersRequest::getTableName() const {
  return tableName_;
}

void ListPermissionApplyOrdersRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

int ListPermissionApplyOrdersRequest::getQueryType() const {
  return queryType_;
}

void ListPermissionApplyOrdersRequest::setQueryType(int queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), std::to_string(queryType));
}

std::string ListPermissionApplyOrdersRequest::getEngineType() const {
  return engineType_;
}

void ListPermissionApplyOrdersRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

std::string ListPermissionApplyOrdersRequest::getMaxComputeProjectName() const {
  return maxComputeProjectName_;
}

void ListPermissionApplyOrdersRequest::setMaxComputeProjectName(const std::string &maxComputeProjectName) {
  maxComputeProjectName_ = maxComputeProjectName;
  setParameter(std::string("MaxComputeProjectName"), maxComputeProjectName);
}

std::string ListPermissionApplyOrdersRequest::getCatalogName() const {
  return catalogName_;
}

void ListPermissionApplyOrdersRequest::setCatalogName(const std::string &catalogName) {
  catalogName_ = catalogName;
  setParameter(std::string("CatalogName"), catalogName);
}

long ListPermissionApplyOrdersRequest::getEndTime() const {
  return endTime_;
}

void ListPermissionApplyOrdersRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListPermissionApplyOrdersRequest::getFlowStatus() const {
  return flowStatus_;
}

void ListPermissionApplyOrdersRequest::setFlowStatus(int flowStatus) {
  flowStatus_ = flowStatus;
  setParameter(std::string("FlowStatus"), std::to_string(flowStatus));
}

std::string ListPermissionApplyOrdersRequest::getApplyType() const {
  return applyType_;
}

void ListPermissionApplyOrdersRequest::setApplyType(const std::string &applyType) {
  applyType_ = applyType;
  setParameter(std::string("ApplyType"), applyType);
}

int ListPermissionApplyOrdersRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListPermissionApplyOrdersRequest::setWorkspaceId(int workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

int ListPermissionApplyOrdersRequest::getOrderType() const {
  return orderType_;
}

void ListPermissionApplyOrdersRequest::setOrderType(int orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), std::to_string(orderType));
}

