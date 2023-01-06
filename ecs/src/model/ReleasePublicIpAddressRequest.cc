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

#include <alibabacloud/ecs/model/ReleasePublicIpAddressRequest.h>

using AlibabaCloud::Ecs::Model::ReleasePublicIpAddressRequest;

ReleasePublicIpAddressRequest::ReleasePublicIpAddressRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ReleasePublicIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

ReleasePublicIpAddressRequest::~ReleasePublicIpAddressRequest() {}

std::string ReleasePublicIpAddressRequest::getRegionId() const {
  return regionId_;
}

void ReleasePublicIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ReleasePublicIpAddressRequest::getDryRun() const {
  return dryRun_;
}

void ReleasePublicIpAddressRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ReleasePublicIpAddressRequest::getPublicIpAddress() const {
  return publicIpAddress_;
}

void ReleasePublicIpAddressRequest::setPublicIpAddress(const std::string &publicIpAddress) {
  publicIpAddress_ = publicIpAddress;
  setParameter(std::string("PublicIpAddress"), publicIpAddress);
}

std::string ReleasePublicIpAddressRequest::getInstanceId() const {
  return instanceId_;
}

void ReleasePublicIpAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

