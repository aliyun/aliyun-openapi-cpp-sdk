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

#include <alibabacloud/dts/model/StopDedicatedClusterRequest.h>

using AlibabaCloud::Dts::Model::StopDedicatedClusterRequest;

StopDedicatedClusterRequest::StopDedicatedClusterRequest()
    : RpcServiceRequest("dts", "2020-01-01", "StopDedicatedCluster") {
  setMethod(HttpRequest::Method::Post);
}

StopDedicatedClusterRequest::~StopDedicatedClusterRequest() {}

std::string StopDedicatedClusterRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void StopDedicatedClusterRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string StopDedicatedClusterRequest::getOwnerId() const {
  return ownerId_;
}

void StopDedicatedClusterRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string StopDedicatedClusterRequest::getDedicatedClusterName() const {
  return dedicatedClusterName_;
}

void StopDedicatedClusterRequest::setDedicatedClusterName(const std::string &dedicatedClusterName) {
  dedicatedClusterName_ = dedicatedClusterName;
  setParameter(std::string("DedicatedClusterName"), dedicatedClusterName);
}

std::string StopDedicatedClusterRequest::getInstanceId() const {
  return instanceId_;
}

void StopDedicatedClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string StopDedicatedClusterRequest::getRegionId() const {
  return regionId_;
}

void StopDedicatedClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

