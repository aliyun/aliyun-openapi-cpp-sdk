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

#include <alibabacloud/nas/model/CreateAccessGroupRequest.h>

using AlibabaCloud::NAS::Model::CreateAccessGroupRequest;

CreateAccessGroupRequest::CreateAccessGroupRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateAccessGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccessGroupRequest::~CreateAccessGroupRequest() {}

std::string CreateAccessGroupRequest::getDescription() const {
  return description_;
}

void CreateAccessGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAccessGroupRequest::getFileSystemType() const {
  return fileSystemType_;
}

void CreateAccessGroupRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string CreateAccessGroupRequest::getAccessGroupType() const {
  return accessGroupType_;
}

void CreateAccessGroupRequest::setAccessGroupType(const std::string &accessGroupType) {
  accessGroupType_ = accessGroupType;
  setParameter(std::string("AccessGroupType"), accessGroupType);
}

std::string CreateAccessGroupRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void CreateAccessGroupRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

