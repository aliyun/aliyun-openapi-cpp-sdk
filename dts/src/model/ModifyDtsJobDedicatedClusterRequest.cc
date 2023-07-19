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

#include <alibabacloud/dts/model/ModifyDtsJobDedicatedClusterRequest.h>

using AlibabaCloud::Dts::Model::ModifyDtsJobDedicatedClusterRequest;

ModifyDtsJobDedicatedClusterRequest::ModifyDtsJobDedicatedClusterRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ModifyDtsJobDedicatedCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDtsJobDedicatedClusterRequest::~ModifyDtsJobDedicatedClusterRequest() {}

std::string ModifyDtsJobDedicatedClusterRequest::getDtsJobIds() const {
  return dtsJobIds_;
}

void ModifyDtsJobDedicatedClusterRequest::setDtsJobIds(const std::string &dtsJobIds) {
  dtsJobIds_ = dtsJobIds;
  setParameter(std::string("DtsJobIds"), dtsJobIds);
}

std::string ModifyDtsJobDedicatedClusterRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void ModifyDtsJobDedicatedClusterRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string ModifyDtsJobDedicatedClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDtsJobDedicatedClusterRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyDtsJobDedicatedClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDtsJobDedicatedClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

