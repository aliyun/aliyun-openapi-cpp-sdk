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

#include <alibabacloud/ecd/model/CreateNASFileSystemRequest.h>

using AlibabaCloud::Ecd::Model::CreateNASFileSystemRequest;

CreateNASFileSystemRequest::CreateNASFileSystemRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateNASFileSystem") {
  setMethod(HttpRequest::Method::Post);
}

CreateNASFileSystemRequest::~CreateNASFileSystemRequest() {}

std::string CreateNASFileSystemRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void CreateNASFileSystemRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string CreateNASFileSystemRequest::getDescription() const {
  return description_;
}

void CreateNASFileSystemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNASFileSystemRequest::getStorageType() const {
  return storageType_;
}

void CreateNASFileSystemRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateNASFileSystemRequest::getEncryptType() const {
  return encryptType_;
}

void CreateNASFileSystemRequest::setEncryptType(const std::string &encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), encryptType);
}

std::string CreateNASFileSystemRequest::getRegionId() const {
  return regionId_;
}

void CreateNASFileSystemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNASFileSystemRequest::getName() const {
  return name_;
}

void CreateNASFileSystemRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

