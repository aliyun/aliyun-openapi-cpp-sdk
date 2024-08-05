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

#include <alibabacloud/arms/model/AddTagToFlinkClusterRequest.h>

using AlibabaCloud::ARMS::Model::AddTagToFlinkClusterRequest;

AddTagToFlinkClusterRequest::AddTagToFlinkClusterRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AddTagToFlinkCluster") {
  setMethod(HttpRequest::Method::Post);
}

AddTagToFlinkClusterRequest::~AddTagToFlinkClusterRequest() {}

std::string AddTagToFlinkClusterRequest::getFlinkWorkSpaceName() const {
  return flinkWorkSpaceName_;
}

void AddTagToFlinkClusterRequest::setFlinkWorkSpaceName(const std::string &flinkWorkSpaceName) {
  flinkWorkSpaceName_ = flinkWorkSpaceName;
  setParameter(std::string("FlinkWorkSpaceName"), flinkWorkSpaceName);
}

std::string AddTagToFlinkClusterRequest::getClusterId() const {
  return clusterId_;
}

void AddTagToFlinkClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string AddTagToFlinkClusterRequest::getTargetUserId() const {
  return targetUserId_;
}

void AddTagToFlinkClusterRequest::setTargetUserId(const std::string &targetUserId) {
  targetUserId_ = targetUserId;
  setParameter(std::string("TargetUserId"), targetUserId);
}

std::string AddTagToFlinkClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddTagToFlinkClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddTagToFlinkClusterRequest::getFlinkWorkSpaceId() const {
  return flinkWorkSpaceId_;
}

void AddTagToFlinkClusterRequest::setFlinkWorkSpaceId(const std::string &flinkWorkSpaceId) {
  flinkWorkSpaceId_ = flinkWorkSpaceId;
  setParameter(std::string("FlinkWorkSpaceId"), flinkWorkSpaceId);
}

std::string AddTagToFlinkClusterRequest::getRegionId() const {
  return regionId_;
}

void AddTagToFlinkClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

