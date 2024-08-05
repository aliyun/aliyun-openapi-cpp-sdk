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

#include <alibabacloud/arms/model/UpdatePrometheusGlobalViewRequest.h>

using AlibabaCloud::ARMS::Model::UpdatePrometheusGlobalViewRequest;

UpdatePrometheusGlobalViewRequest::UpdatePrometheusGlobalViewRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdatePrometheusGlobalView") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrometheusGlobalViewRequest::~UpdatePrometheusGlobalViewRequest() {}

bool UpdatePrometheusGlobalViewRequest::getAllSubClustersSuccess() const {
  return allSubClustersSuccess_;
}

void UpdatePrometheusGlobalViewRequest::setAllSubClustersSuccess(bool allSubClustersSuccess) {
  allSubClustersSuccess_ = allSubClustersSuccess;
  setParameter(std::string("AllSubClustersSuccess"), allSubClustersSuccess ? "true" : "false");
}

std::string UpdatePrometheusGlobalViewRequest::getStsToken() const {
  return stsToken_;
}

void UpdatePrometheusGlobalViewRequest::setStsToken(const std::string &stsToken) {
  stsToken_ = stsToken;
  setParameter(std::string("StsToken"), stsToken);
}

std::string UpdatePrometheusGlobalViewRequest::getClusterId() const {
  return clusterId_;
}

void UpdatePrometheusGlobalViewRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdatePrometheusGlobalViewRequest::getGroupName() const {
  return groupName_;
}

void UpdatePrometheusGlobalViewRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdatePrometheusGlobalViewRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdatePrometheusGlobalViewRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdatePrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePrometheusGlobalViewRequest::getMostRegionId() const {
  return mostRegionId_;
}

void UpdatePrometheusGlobalViewRequest::setMostRegionId(const std::string &mostRegionId) {
  mostRegionId_ = mostRegionId;
  setParameter(std::string("MostRegionId"), mostRegionId);
}

std::string UpdatePrometheusGlobalViewRequest::getParamJson() const {
  return paramJson_;
}

void UpdatePrometheusGlobalViewRequest::setParamJson(const std::string &paramJson) {
  paramJson_ = paramJson;
  setParameter(std::string("ParamJson"), paramJson);
}

std::string UpdatePrometheusGlobalViewRequest::getSubClustersJson() const {
  return subClustersJson_;
}

void UpdatePrometheusGlobalViewRequest::setSubClustersJson(const std::string &subClustersJson) {
  subClustersJson_ = subClustersJson;
  setParameter(std::string("SubClustersJson"), subClustersJson);
}

