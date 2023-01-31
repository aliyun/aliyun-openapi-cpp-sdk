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

#include <alibabacloud/vpc/model/UpdateVirtualPhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::UpdateVirtualPhysicalConnectionRequest;

UpdateVirtualPhysicalConnectionRequest::UpdateVirtualPhysicalConnectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateVirtualPhysicalConnection") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVirtualPhysicalConnectionRequest::~UpdateVirtualPhysicalConnectionRequest() {}

bool UpdateVirtualPhysicalConnectionRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVirtualPhysicalConnectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long UpdateVirtualPhysicalConnectionRequest::getVlanId() const {
  return vlanId_;
}

void UpdateVirtualPhysicalConnectionRequest::setVlanId(long vlanId) {
  vlanId_ = vlanId;
  setParameter(std::string("VlanId"), std::to_string(vlanId));
}

std::string UpdateVirtualPhysicalConnectionRequest::getToken() const {
  return token_;
}

void UpdateVirtualPhysicalConnectionRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string UpdateVirtualPhysicalConnectionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateVirtualPhysicalConnectionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateVirtualPhysicalConnectionRequest::getRegionId() const {
  return regionId_;
}

void UpdateVirtualPhysicalConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateVirtualPhysicalConnectionRequest::getExpectSpec() const {
  return expectSpec_;
}

void UpdateVirtualPhysicalConnectionRequest::setExpectSpec(const std::string &expectSpec) {
  expectSpec_ = expectSpec;
  setParameter(std::string("ExpectSpec"), expectSpec);
}

