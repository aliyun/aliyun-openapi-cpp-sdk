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

#include <alibabacloud/dts/model/ModifyDedicatedClusterRequest.h>

using AlibabaCloud::Dts::Model::ModifyDedicatedClusterRequest;

ModifyDedicatedClusterRequest::ModifyDedicatedClusterRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ModifyDedicatedCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedClusterRequest::~ModifyDedicatedClusterRequest() {}

std::string ModifyDedicatedClusterRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void ModifyDedicatedClusterRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string ModifyDedicatedClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDedicatedClusterRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyDedicatedClusterRequest::getDedicatedClusterName() const {
  return dedicatedClusterName_;
}

void ModifyDedicatedClusterRequest::setDedicatedClusterName(const std::string &dedicatedClusterName) {
  dedicatedClusterName_ = dedicatedClusterName;
  setParameter(std::string("DedicatedClusterName"), dedicatedClusterName);
}

std::string ModifyDedicatedClusterRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDedicatedClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDedicatedClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDedicatedClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifyDedicatedClusterRequest::getOversoldRatio() const {
  return oversoldRatio_;
}

void ModifyDedicatedClusterRequest::setOversoldRatio(int oversoldRatio) {
  oversoldRatio_ = oversoldRatio;
  setParameter(std::string("OversoldRatio"), std::to_string(oversoldRatio));
}

