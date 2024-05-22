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

#include <alibabacloud/polardbx/model/DescribeActiveOperationTasksRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeActiveOperationTasksRequest;

DescribeActiveOperationTasksRequest::DescribeActiveOperationTasksRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeActiveOperationTasks") {
  setMethod(HttpRequest::Method::Get);
}

DescribeActiveOperationTasksRequest::~DescribeActiveOperationTasksRequest() {}

std::string DescribeActiveOperationTasksRequest::getProductId() const {
  return productId_;
}

void DescribeActiveOperationTasksRequest::setProductId(const std::string &productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), productId);
}

std::string DescribeActiveOperationTasksRequest::getChangeLevel() const {
  return changeLevel_;
}

void DescribeActiveOperationTasksRequest::setChangeLevel(const std::string &changeLevel) {
  changeLevel_ = changeLevel;
  setParameter(std::string("ChangeLevel"), changeLevel);
}

long DescribeActiveOperationTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeActiveOperationTasksRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeActiveOperationTasksRequest::getInsName() const {
  return insName_;
}

void DescribeActiveOperationTasksRequest::setInsName(const std::string &insName) {
  insName_ = insName;
  setParameter(std::string("InsName"), insName);
}

std::string DescribeActiveOperationTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeActiveOperationTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeActiveOperationTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeActiveOperationTasksRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeActiveOperationTasksRequest::getTaskType() const {
  return taskType_;
}

void DescribeActiveOperationTasksRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long DescribeActiveOperationTasksRequest::getAllowCancel() const {
  return allowCancel_;
}

void DescribeActiveOperationTasksRequest::setAllowCancel(long allowCancel) {
  allowCancel_ = allowCancel;
  setParameter(std::string("AllowCancel"), std::to_string(allowCancel));
}

std::string DescribeActiveOperationTasksRequest::getDbType() const {
  return dbType_;
}

void DescribeActiveOperationTasksRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

long DescribeActiveOperationTasksRequest::getAllowChange() const {
  return allowChange_;
}

void DescribeActiveOperationTasksRequest::setAllowChange(long allowChange) {
  allowChange_ = allowChange;
  setParameter(std::string("AllowChange"), std::to_string(allowChange));
}

std::string DescribeActiveOperationTasksRequest::getRegion() const {
  return region_;
}

void DescribeActiveOperationTasksRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

long DescribeActiveOperationTasksRequest::getStatus() const {
  return status_;
}

void DescribeActiveOperationTasksRequest::setStatus(long status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

