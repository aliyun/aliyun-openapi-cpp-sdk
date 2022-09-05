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

#include <alibabacloud/arms/model/RemoveAliClusterIdsFromPrometheusGlobalViewRequest.h>

using AlibabaCloud::ARMS::Model::RemoveAliClusterIdsFromPrometheusGlobalViewRequest;

RemoveAliClusterIdsFromPrometheusGlobalViewRequest::RemoveAliClusterIdsFromPrometheusGlobalViewRequest()
    : RpcServiceRequest("arms", "2019-08-08", "RemoveAliClusterIdsFromPrometheusGlobalView") {
  setMethod(HttpRequest::Method::Post);
}

RemoveAliClusterIdsFromPrometheusGlobalViewRequest::~RemoveAliClusterIdsFromPrometheusGlobalViewRequest() {}

std::string RemoveAliClusterIdsFromPrometheusGlobalViewRequest::getGlobalViewClusterId() const {
  return globalViewClusterId_;
}

void RemoveAliClusterIdsFromPrometheusGlobalViewRequest::setGlobalViewClusterId(const std::string &globalViewClusterId) {
  globalViewClusterId_ = globalViewClusterId;
  setParameter(std::string("GlobalViewClusterId"), globalViewClusterId);
}

std::string RemoveAliClusterIdsFromPrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void RemoveAliClusterIdsFromPrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveAliClusterIdsFromPrometheusGlobalViewRequest::getClusterIds() const {
  return clusterIds_;
}

void RemoveAliClusterIdsFromPrometheusGlobalViewRequest::setClusterIds(const std::string &clusterIds) {
  clusterIds_ = clusterIds;
  setParameter(std::string("ClusterIds"), clusterIds);
}

std::string RemoveAliClusterIdsFromPrometheusGlobalViewRequest::getGroupName() const {
  return groupName_;
}

void RemoveAliClusterIdsFromPrometheusGlobalViewRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

