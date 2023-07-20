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

#include <alibabacloud/ens/model/AssociateEnsEipAddressRequest.h>

using AlibabaCloud::Ens::Model::AssociateEnsEipAddressRequest;

AssociateEnsEipAddressRequest::AssociateEnsEipAddressRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AssociateEnsEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AssociateEnsEipAddressRequest::~AssociateEnsEipAddressRequest() {}

bool AssociateEnsEipAddressRequest::getStandby() const {
  return standby_;
}

void AssociateEnsEipAddressRequest::setStandby(bool standby) {
  standby_ = standby;
  setParameter(std::string("Standby"), standby ? "true" : "false");
}

std::string AssociateEnsEipAddressRequest::getAllocationId() const {
  return allocationId_;
}

void AssociateEnsEipAddressRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string AssociateEnsEipAddressRequest::getInstanceType() const {
  return instanceType_;
}

void AssociateEnsEipAddressRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string AssociateEnsEipAddressRequest::getInstanceId() const {
  return instanceId_;
}

void AssociateEnsEipAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

