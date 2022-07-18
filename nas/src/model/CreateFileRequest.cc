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

#include <alibabacloud/nas/model/CreateFileRequest.h>

using AlibabaCloud::NAS::Model::CreateFileRequest;

CreateFileRequest::CreateFileRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileRequest::~CreateFileRequest() {}

bool CreateFileRequest::getOwnerAccessInheritable() const {
  return ownerAccessInheritable_;
}

void CreateFileRequest::setOwnerAccessInheritable(bool ownerAccessInheritable) {
  ownerAccessInheritable_ = ownerAccessInheritable;
  setParameter(std::string("OwnerAccessInheritable"), ownerAccessInheritable ? "true" : "false");
}

std::string CreateFileRequest::getType() const {
  return type_;
}

void CreateFileRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateFileRequest::getPath() const {
  return path_;
}

void CreateFileRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string CreateFileRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateFileRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string CreateFileRequest::getOwner() const {
  return owner_;
}

void CreateFileRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

