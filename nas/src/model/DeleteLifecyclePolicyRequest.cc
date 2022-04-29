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

#include <alibabacloud/nas/model/DeleteLifecyclePolicyRequest.h>

using AlibabaCloud::NAS::Model::DeleteLifecyclePolicyRequest;

DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DeleteLifecyclePolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLifecyclePolicyRequest::~DeleteLifecyclePolicyRequest() {}

std::string DeleteLifecyclePolicyRequest::getLifecyclePolicyName() const {
  return lifecyclePolicyName_;
}

void DeleteLifecyclePolicyRequest::setLifecyclePolicyName(const std::string &lifecyclePolicyName) {
  lifecyclePolicyName_ = lifecyclePolicyName;
  setParameter(std::string("LifecyclePolicyName"), lifecyclePolicyName);
}

std::string DeleteLifecyclePolicyRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DeleteLifecyclePolicyRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

