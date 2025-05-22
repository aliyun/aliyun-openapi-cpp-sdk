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

#include <alibabacloud/rds/model/AssociateEipAddressWithRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::AssociateEipAddressWithRCInstanceRequest;

AssociateEipAddressWithRCInstanceRequest::AssociateEipAddressWithRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "AssociateEipAddressWithRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

AssociateEipAddressWithRCInstanceRequest::~AssociateEipAddressWithRCInstanceRequest() {}

std::string AssociateEipAddressWithRCInstanceRequest::getAllocationId() const {
  return allocationId_;
}

void AssociateEipAddressWithRCInstanceRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string AssociateEipAddressWithRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void AssociateEipAddressWithRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AssociateEipAddressWithRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void AssociateEipAddressWithRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

