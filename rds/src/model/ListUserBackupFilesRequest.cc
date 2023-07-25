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

#include <alibabacloud/rds/model/ListUserBackupFilesRequest.h>

using AlibabaCloud::Rds::Model::ListUserBackupFilesRequest;

ListUserBackupFilesRequest::ListUserBackupFilesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ListUserBackupFiles") {
  setMethod(HttpRequest::Method::Post);
}

ListUserBackupFilesRequest::~ListUserBackupFilesRequest() {}

std::string ListUserBackupFilesRequest::getTag4value() const {
  return tag4value_;
}

void ListUserBackupFilesRequest::setTag4value(const std::string &tag4value) {
  tag4value_ = tag4value;
  setParameter(std::string("Tag.4.value"), tag4value);
}

long ListUserBackupFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListUserBackupFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListUserBackupFilesRequest::getTag2key() const {
  return tag2key_;
}

void ListUserBackupFilesRequest::setTag2key(const std::string &tag2key) {
  tag2key_ = tag2key;
  setParameter(std::string("Tag.2.key"), tag2key);
}

std::string ListUserBackupFilesRequest::getTag3key() const {
  return tag3key_;
}

void ListUserBackupFilesRequest::setTag3key(const std::string &tag3key) {
  tag3key_ = tag3key;
  setParameter(std::string("Tag.3.key"), tag3key);
}

std::string ListUserBackupFilesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListUserBackupFilesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListUserBackupFilesRequest::getTag1value() const {
  return tag1value_;
}

void ListUserBackupFilesRequest::setTag1value(const std::string &tag1value) {
  tag1value_ = tag1value;
  setParameter(std::string("Tag.1.value"), tag1value);
}

std::string ListUserBackupFilesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListUserBackupFilesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListUserBackupFilesRequest::getEngine() const {
  return engine_;
}

void ListUserBackupFilesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string ListUserBackupFilesRequest::getRegionId() const {
  return regionId_;
}

void ListUserBackupFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListUserBackupFilesRequest::getTag3value() const {
  return tag3value_;
}

void ListUserBackupFilesRequest::setTag3value(const std::string &tag3value) {
  tag3value_ = tag3value;
  setParameter(std::string("Tag.3.value"), tag3value);
}

std::string ListUserBackupFilesRequest::getTag5key() const {
  return tag5key_;
}

void ListUserBackupFilesRequest::setTag5key(const std::string &tag5key) {
  tag5key_ = tag5key;
  setParameter(std::string("Tag.5.key"), tag5key);
}

std::string ListUserBackupFilesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListUserBackupFilesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListUserBackupFilesRequest::getBackupId() const {
  return backupId_;
}

void ListUserBackupFilesRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long ListUserBackupFilesRequest::getOwnerId() const {
  return ownerId_;
}

void ListUserBackupFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListUserBackupFilesRequest::getTag5value() const {
  return tag5value_;
}

void ListUserBackupFilesRequest::setTag5value(const std::string &tag5value) {
  tag5value_ = tag5value;
  setParameter(std::string("Tag.5.value"), tag5value);
}

std::string ListUserBackupFilesRequest::getTags() const {
  return tags_;
}

void ListUserBackupFilesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ListUserBackupFilesRequest::getTag1key() const {
  return tag1key_;
}

void ListUserBackupFilesRequest::setTag1key(const std::string &tag1key) {
  tag1key_ = tag1key;
  setParameter(std::string("Tag.1.key"), tag1key);
}

std::string ListUserBackupFilesRequest::getOpsServiceVersion() const {
  return opsServiceVersion_;
}

void ListUserBackupFilesRequest::setOpsServiceVersion(const std::string &opsServiceVersion) {
  opsServiceVersion_ = opsServiceVersion;
  setParameter(std::string("OpsServiceVersion"), opsServiceVersion);
}

std::string ListUserBackupFilesRequest::getOssUrl() const {
  return ossUrl_;
}

void ListUserBackupFilesRequest::setOssUrl(const std::string &ossUrl) {
  ossUrl_ = ossUrl;
  setParameter(std::string("OssUrl"), ossUrl);
}

std::string ListUserBackupFilesRequest::getTag2value() const {
  return tag2value_;
}

void ListUserBackupFilesRequest::setTag2value(const std::string &tag2value) {
  tag2value_ = tag2value;
  setParameter(std::string("Tag.2.value"), tag2value);
}

std::string ListUserBackupFilesRequest::getTag4key() const {
  return tag4key_;
}

void ListUserBackupFilesRequest::setTag4key(const std::string &tag4key) {
  tag4key_ = tag4key;
  setParameter(std::string("Tag.4.key"), tag4key);
}

std::string ListUserBackupFilesRequest::getComment() const {
  return comment_;
}

void ListUserBackupFilesRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

std::string ListUserBackupFilesRequest::getStatus() const {
  return status_;
}

void ListUserBackupFilesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

