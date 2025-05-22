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

#include <alibabacloud/rds/model/UnassociateEipAddressWithRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::UnassociateEipAddressWithRCInstanceRequest;

UnassociateEipAddressWithRCInstanceRequest::UnassociateEipAddressWithRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UnassociateEipAddressWithRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

UnassociateEipAddressWithRCInstanceRequest::~UnassociateEipAddressWithRCInstanceRequest() {}

std::string UnassociateEipAddressWithRCInstanceRequest::getAllocationId() const {
  return allocationId_;
}

void UnassociateEipAddressWithRCInstanceRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string UnassociateEipAddressWithRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UnassociateEipAddressWithRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UnassociateEipAddressWithRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void UnassociateEipAddressWithRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

