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

#include <alibabacloud/ecd/model/CreateAndBindNasFileSystemRequest.h>

using AlibabaCloud::Ecd::Model::CreateAndBindNasFileSystemRequest;

CreateAndBindNasFileSystemRequest::CreateAndBindNasFileSystemRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateAndBindNasFileSystem") {
  setMethod(HttpRequest::Method::Post);
}

CreateAndBindNasFileSystemRequest::~CreateAndBindNasFileSystemRequest() {}

std::string CreateAndBindNasFileSystemRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void CreateAndBindNasFileSystemRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::vector<std::string> CreateAndBindNasFileSystemRequest::getEndUserIds() const {
  return endUserIds_;
}

void CreateAndBindNasFileSystemRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::string CreateAndBindNasFileSystemRequest::getDescription() const {
  return description_;
}

void CreateAndBindNasFileSystemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAndBindNasFileSystemRequest::getStorageType() const {
  return storageType_;
}

void CreateAndBindNasFileSystemRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

int CreateAndBindNasFileSystemRequest::getEncryptType() const {
  return encryptType_;
}

void CreateAndBindNasFileSystemRequest::setEncryptType(int encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), std::to_string(encryptType));
}

std::string CreateAndBindNasFileSystemRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void CreateAndBindNasFileSystemRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string CreateAndBindNasFileSystemRequest::getFileSystemName() const {
  return fileSystemName_;
}

void CreateAndBindNasFileSystemRequest::setFileSystemName(const std::string &fileSystemName) {
  fileSystemName_ = fileSystemName;
  setParameter(std::string("FileSystemName"), fileSystemName);
}

std::string CreateAndBindNasFileSystemRequest::getRegionId() const {
  return regionId_;
}

void CreateAndBindNasFileSystemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

