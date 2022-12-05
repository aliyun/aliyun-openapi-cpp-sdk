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

#include <alibabacloud/polardb/model/DescribeScheduleTasksRequest.h>

using AlibabaCloud::Polardb::Model::DescribeScheduleTasksRequest;

DescribeScheduleTasksRequest::DescribeScheduleTasksRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeScheduleTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScheduleTasksRequest::~DescribeScheduleTasksRequest() {}

long DescribeScheduleTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScheduleTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScheduleTasksRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DescribeScheduleTasksRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string DescribeScheduleTasksRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void DescribeScheduleTasksRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

int DescribeScheduleTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScheduleTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScheduleTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScheduleTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeScheduleTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeScheduleTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeScheduleTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeScheduleTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScheduleTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScheduleTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScheduleTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScheduleTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScheduleTasksRequest::getOrderId() const {
  return orderId_;
}

void DescribeScheduleTasksRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string DescribeScheduleTasksRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeScheduleTasksRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeScheduleTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScheduleTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScheduleTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScheduleTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScheduleTasksRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void DescribeScheduleTasksRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string DescribeScheduleTasksRequest::getTaskAction() const {
  return taskAction_;
}

void DescribeScheduleTasksRequest::setTaskAction(const std::string &taskAction) {
  taskAction_ = taskAction;
  setParameter(std::string("TaskAction"), taskAction);
}

std::string DescribeScheduleTasksRequest::getStatus() const {
  return status_;
}

void DescribeScheduleTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

