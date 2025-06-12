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

#include <alibabacloud/clickhouse/model/TransferVersionRequest.h>

using AlibabaCloud::Clickhouse::Model::TransferVersionRequest;

TransferVersionRequest::TransferVersionRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "TransferVersion") {
  setMethod(HttpRequest::Method::Post);
}

TransferVersionRequest::~TransferVersionRequest() {}

long TransferVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TransferVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int TransferVersionRequest::getPageNumber() const {
  return pageNumber_;
}

void TransferVersionRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string TransferVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TransferVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TransferVersionRequest::getSourceAccount() const {
  return sourceAccount_;
}

void TransferVersionRequest::setSourceAccount(const std::string &sourceAccount) {
  sourceAccount_ = sourceAccount;
  setParameter(std::string("SourceAccount"), sourceAccount);
}

std::string TransferVersionRequest::getTargetAccount() const {
  return targetAccount_;
}

void TransferVersionRequest::setTargetAccount(const std::string &targetAccount) {
  targetAccount_ = targetAccount;
  setParameter(std::string("TargetAccount"), targetAccount);
}

std::string TransferVersionRequest::getRegionId() const {
  return regionId_;
}

void TransferVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string TransferVersionRequest::getSourceClusterName() const {
  return sourceClusterName_;
}

void TransferVersionRequest::setSourceClusterName(const std::string &sourceClusterName) {
  sourceClusterName_ = sourceClusterName;
  setParameter(std::string("SourceClusterName"), sourceClusterName);
}

int TransferVersionRequest::getPageSize() const {
  return pageSize_;
}

void TransferVersionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string TransferVersionRequest::getSourcePassword() const {
  return sourcePassword_;
}

void TransferVersionRequest::setSourcePassword(const std::string &sourcePassword) {
  sourcePassword_ = sourcePassword;
  setParameter(std::string("SourcePassword"), sourcePassword);
}

std::string TransferVersionRequest::getDisableWriteWindows() const {
  return disableWriteWindows_;
}

void TransferVersionRequest::setDisableWriteWindows(const std::string &disableWriteWindows) {
  disableWriteWindows_ = disableWriteWindows;
  setParameter(std::string("DisableWriteWindows"), disableWriteWindows);
}

std::string TransferVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TransferVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TransferVersionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void TransferVersionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string TransferVersionRequest::getTargetPassword() const {
  return targetPassword_;
}

void TransferVersionRequest::setTargetPassword(const std::string &targetPassword) {
  targetPassword_ = targetPassword;
  setParameter(std::string("TargetPassword"), targetPassword);
}

std::string TransferVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TransferVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TransferVersionRequest::getOwnerId() const {
  return ownerId_;
}

void TransferVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TransferVersionRequest::getTargetDbClusterId() const {
  return targetDbClusterId_;
}

void TransferVersionRequest::setTargetDbClusterId(const std::string &targetDbClusterId) {
  targetDbClusterId_ = targetDbClusterId;
  setParameter(std::string("TargetDbClusterId"), targetDbClusterId);
}

std::string TransferVersionRequest::getSourceShards() const {
  return sourceShards_;
}

void TransferVersionRequest::setSourceShards(const std::string &sourceShards) {
  sourceShards_ = sourceShards;
  setParameter(std::string("SourceShards"), sourceShards);
}

