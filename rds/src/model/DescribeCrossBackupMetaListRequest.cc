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

#include <alibabacloud/rds/model/DescribeCrossBackupMetaListRequest.h>

using AlibabaCloud::Rds::Model::DescribeCrossBackupMetaListRequest;

DescribeCrossBackupMetaListRequest::DescribeCrossBackupMetaListRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeCrossBackupMetaList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCrossBackupMetaListRequest::~DescribeCrossBackupMetaListRequest() {}

long DescribeCrossBackupMetaListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCrossBackupMetaListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCrossBackupMetaListRequest::getPattern() const {
  return pattern_;
}

void DescribeCrossBackupMetaListRequest::setPattern(const std::string &pattern) {
  pattern_ = pattern;
  setParameter(std::string("Pattern"), pattern);
}

std::string DescribeCrossBackupMetaListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCrossBackupMetaListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCrossBackupMetaListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCrossBackupMetaListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCrossBackupMetaListRequest::getRegionId() const {
  return regionId_;
}

void DescribeCrossBackupMetaListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCrossBackupMetaListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCrossBackupMetaListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeCrossBackupMetaListRequest::getPageIndex() const {
  return pageIndex_;
}

void DescribeCrossBackupMetaListRequest::setPageIndex(const std::string &pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), pageIndex);
}

std::string DescribeCrossBackupMetaListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCrossBackupMetaListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCrossBackupMetaListRequest::getBackupSetId() const {
  return backupSetId_;
}

void DescribeCrossBackupMetaListRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

long DescribeCrossBackupMetaListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCrossBackupMetaListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCrossBackupMetaListRequest::getGetDbName() const {
  return getDbName_;
}

void DescribeCrossBackupMetaListRequest::setGetDbName(const std::string &getDbName) {
  getDbName_ = getDbName;
  setParameter(std::string("GetDbName"), getDbName);
}

std::string DescribeCrossBackupMetaListRequest::getRegion() const {
  return region_;
}

void DescribeCrossBackupMetaListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

