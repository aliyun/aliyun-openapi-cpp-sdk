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

#include <alibabacloud/nas/model/DeleteAutoSnapshotPolicyRequest.h>

using AlibabaCloud::NAS::Model::DeleteAutoSnapshotPolicyRequest;

DeleteAutoSnapshotPolicyRequest::DeleteAutoSnapshotPolicyRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DeleteAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAutoSnapshotPolicyRequest::~DeleteAutoSnapshotPolicyRequest() {}

std::string DeleteAutoSnapshotPolicyRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void DeleteAutoSnapshotPolicyRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("AutoSnapshotPolicyId"), autoSnapshotPolicyId);
}

