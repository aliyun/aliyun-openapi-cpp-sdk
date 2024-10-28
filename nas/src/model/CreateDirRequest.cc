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

#include <alibabacloud/nas/model/CreateDirRequest.h>

using AlibabaCloud::NAS::Model::CreateDirRequest;

CreateDirRequest::CreateDirRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateDir") {
  setMethod(HttpRequest::Method::Post);
}

CreateDirRequest::~CreateDirRequest() {}

bool CreateDirRequest::getRecursion() const {
  return recursion_;
}

void CreateDirRequest::setRecursion(bool recursion) {
  recursion_ = recursion;
  setParameter(std::string("Recursion"), recursion ? "true" : "false");
}

std::string CreateDirRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateDirRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

int CreateDirRequest::getOwnerGroupId() const {
  return ownerGroupId_;
}

void CreateDirRequest::setOwnerGroupId(int ownerGroupId) {
  ownerGroupId_ = ownerGroupId;
  setParameter(std::string("OwnerGroupId"), std::to_string(ownerGroupId));
}

int CreateDirRequest::getOwnerUserId() const {
  return ownerUserId_;
}

void CreateDirRequest::setOwnerUserId(int ownerUserId) {
  ownerUserId_ = ownerUserId;
  setParameter(std::string("OwnerUserId"), std::to_string(ownerUserId));
}

std::string CreateDirRequest::getPermission() const {
  return permission_;
}

void CreateDirRequest::setPermission(const std::string &permission) {
  permission_ = permission;
  setParameter(std::string("Permission"), permission);
}

std::string CreateDirRequest::getRootDirectory() const {
  return rootDirectory_;
}

void CreateDirRequest::setRootDirectory(const std::string &rootDirectory) {
  rootDirectory_ = rootDirectory;
  setParameter(std::string("RootDirectory"), rootDirectory);
}

