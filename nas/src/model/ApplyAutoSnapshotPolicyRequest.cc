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

#include <alibabacloud/nas/model/ApplyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::NAS::Model::ApplyAutoSnapshotPolicyRequest;

ApplyAutoSnapshotPolicyRequest::ApplyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ApplyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ApplyAutoSnapshotPolicyRequest::~ApplyAutoSnapshotPolicyRequest() {}

std::string ApplyAutoSnapshotPolicyRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void ApplyAutoSnapshotPolicyRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("AutoSnapshotPolicyId"), autoSnapshotPolicyId);
}

std::string ApplyAutoSnapshotPolicyRequest::getFileSystemIds() const {
  return fileSystemIds_;
}

void ApplyAutoSnapshotPolicyRequest::setFileSystemIds(const std::string &fileSystemIds) {
  fileSystemIds_ = fileSystemIds;
  setParameter(std::string("FileSystemIds"), fileSystemIds);
}

