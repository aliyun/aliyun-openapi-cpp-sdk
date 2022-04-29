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

#include <alibabacloud/nas/model/ModifyLifecyclePolicyRequest.h>

using AlibabaCloud::NAS::Model::ModifyLifecyclePolicyRequest;

ModifyLifecyclePolicyRequest::ModifyLifecyclePolicyRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyLifecyclePolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLifecyclePolicyRequest::~ModifyLifecyclePolicyRequest() {}

std::string ModifyLifecyclePolicyRequest::getStorageType() const {
  return storageType_;
}

void ModifyLifecyclePolicyRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string ModifyLifecyclePolicyRequest::getPath() const {
  return path_;
}

void ModifyLifecyclePolicyRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string ModifyLifecyclePolicyRequest::getLifecyclePolicyName() const {
  return lifecyclePolicyName_;
}

void ModifyLifecyclePolicyRequest::setLifecyclePolicyName(const std::string &lifecyclePolicyName) {
  lifecyclePolicyName_ = lifecyclePolicyName;
  setParameter(std::string("LifecyclePolicyName"), lifecyclePolicyName);
}

std::string ModifyLifecyclePolicyRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyLifecyclePolicyRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string ModifyLifecyclePolicyRequest::getLifecycleRuleName() const {
  return lifecycleRuleName_;
}

void ModifyLifecyclePolicyRequest::setLifecycleRuleName(const std::string &lifecycleRuleName) {
  lifecycleRuleName_ = lifecycleRuleName;
  setParameter(std::string("LifecycleRuleName"), lifecycleRuleName);
}

