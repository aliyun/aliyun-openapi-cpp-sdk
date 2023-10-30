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

#include <alibabacloud/polardb/model/DescribeMetaListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeMetaListRequest;

DescribeMetaListRequest::DescribeMetaListRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeMetaList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetaListRequest::~DescribeMetaListRequest() {}

long DescribeMetaListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMetaListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeMetaListRequest::getRegionCode() const {
  return regionCode_;
}

void DescribeMetaListRequest::setRegionCode(const std::string &regionCode) {
  regionCode_ = regionCode;
  setParameter(std::string("RegionCode"), regionCode);
}

int DescribeMetaListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMetaListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMetaListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMetaListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMetaListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeMetaListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeMetaListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMetaListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMetaListRequest::getRestoreTime() const {
  return restoreTime_;
}

void DescribeMetaListRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string DescribeMetaListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMetaListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeMetaListRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeMetaListRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeMetaListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeMetaListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeMetaListRequest::getBackupId() const {
  return backupId_;
}

void DescribeMetaListRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long DescribeMetaListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMetaListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeMetaListRequest::getGetDbName() const {
  return getDbName_;
}

void DescribeMetaListRequest::setGetDbName(const std::string &getDbName) {
  getDbName_ = getDbName;
  setParameter(std::string("GetDbName"), getDbName);
}

