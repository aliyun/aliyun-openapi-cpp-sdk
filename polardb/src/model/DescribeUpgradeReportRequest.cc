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

#include <alibabacloud/polardb/model/DescribeUpgradeReportRequest.h>

using AlibabaCloud::Polardb::Model::DescribeUpgradeReportRequest;

DescribeUpgradeReportRequest::DescribeUpgradeReportRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeUpgradeReport") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUpgradeReportRequest::~DescribeUpgradeReportRequest() {}

long DescribeUpgradeReportRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUpgradeReportRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUpgradeReportRequest::getType() const {
  return type_;
}

void DescribeUpgradeReportRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeUpgradeReportRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeUpgradeReportRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeUpgradeReportRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeUpgradeReportRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeUpgradeReportRequest::getCreationCategory() const {
  return creationCategory_;
}

void DescribeUpgradeReportRequest::setCreationCategory(const std::string &creationCategory) {
  creationCategory_ = creationCategory;
  setParameter(std::string("CreationCategory"), creationCategory);
}

std::string DescribeUpgradeReportRequest::getSourceDBClusterId() const {
  return sourceDBClusterId_;
}

void DescribeUpgradeReportRequest::setSourceDBClusterId(const std::string &sourceDBClusterId) {
  sourceDBClusterId_ = sourceDBClusterId;
  setParameter(std::string("SourceDBClusterId"), sourceDBClusterId);
}

std::string DescribeUpgradeReportRequest::getRegionId() const {
  return regionId_;
}

void DescribeUpgradeReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeUpgradeReportRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUpgradeReportRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeUpgradeReportRequest::getTaskId() const {
  return taskId_;
}

void DescribeUpgradeReportRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeUpgradeReportRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeUpgradeReportRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeUpgradeReportRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeUpgradeReportRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeUpgradeReportRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUpgradeReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeUpgradeReportRequest::getDBType() const {
  return dBType_;
}

void DescribeUpgradeReportRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeUpgradeReportRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeUpgradeReportRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string DescribeUpgradeReportRequest::getStatus() const {
  return status_;
}

void DescribeUpgradeReportRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

