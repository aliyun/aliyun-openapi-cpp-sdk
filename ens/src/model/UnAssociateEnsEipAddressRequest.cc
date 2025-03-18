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

#include <alibabacloud/ens/model/UnAssociateEnsEipAddressRequest.h>

using AlibabaCloud::Ens::Model::UnAssociateEnsEipAddressRequest;

UnAssociateEnsEipAddressRequest::UnAssociateEnsEipAddressRequest()
    : RpcServiceRequest("ens", "2017-11-10", "UnAssociateEnsEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

UnAssociateEnsEipAddressRequest::~UnAssociateEnsEipAddressRequest() {}

std::string UnAssociateEnsEipAddressRequest::getAllocationId() const {
  return allocationId_;
}

void UnAssociateEnsEipAddressRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

bool UnAssociateEnsEipAddressRequest::getForce() const {
  return force_;
}

void UnAssociateEnsEipAddressRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

