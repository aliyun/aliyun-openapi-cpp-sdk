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

#include <alibabacloud/nas/model/CreateLifecycleRetrieveJobRequest.h>

using AlibabaCloud::NAS::Model::CreateLifecycleRetrieveJobRequest;

CreateLifecycleRetrieveJobRequest::CreateLifecycleRetrieveJobRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateLifecycleRetrieveJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateLifecycleRetrieveJobRequest::~CreateLifecycleRetrieveJobRequest() {}

std::string CreateLifecycleRetrieveJobRequest::getStorageType() const {
  return storageType_;
}

void CreateLifecycleRetrieveJobRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateLifecycleRetrieveJobRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateLifecycleRetrieveJobRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::vector<std::string> CreateLifecycleRetrieveJobRequest::getPaths() const {
  return paths_;
}

void CreateLifecycleRetrieveJobRequest::setPaths(const std::vector<std::string> &paths) {
  paths_ = paths;
}

