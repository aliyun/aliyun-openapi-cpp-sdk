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

#include <alibabacloud/arms/model/CreatePrometheusInstanceRequest.h>

using AlibabaCloud::ARMS::Model::CreatePrometheusInstanceRequest;

CreatePrometheusInstanceRequest::CreatePrometheusInstanceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreatePrometheusInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreatePrometheusInstanceRequest::~CreatePrometheusInstanceRequest() {}

std::string CreatePrometheusInstanceRequest::getGrafanaInstanceId() const {
  return grafanaInstanceId_;
}

void CreatePrometheusInstanceRequest::setGrafanaInstanceId(const std::string &grafanaInstanceId) {
  grafanaInstanceId_ = grafanaInstanceId;
  setParameter(std::string("GrafanaInstanceId"), grafanaInstanceId);
}

std::string CreatePrometheusInstanceRequest::getClusterName() const {
  return clusterName_;
}

void CreatePrometheusInstanceRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string CreatePrometheusInstanceRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreatePrometheusInstanceRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreatePrometheusInstanceRequest::getStsToken() const {
  return stsToken_;
}

void CreatePrometheusInstanceRequest::setStsToken(const std::string &stsToken) {
  stsToken_ = stsToken;
  setParameter(std::string("StsToken"), stsToken);
}

int CreatePrometheusInstanceRequest::getDuration() const {
  return duration_;
}

void CreatePrometheusInstanceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreatePrometheusInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreatePrometheusInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreatePrometheusInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreatePrometheusInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePrometheusInstanceRequest::getSubClustersJson() const {
  return subClustersJson_;
}

void CreatePrometheusInstanceRequest::setSubClustersJson(const std::string &subClustersJson) {
  subClustersJson_ = subClustersJson;
  setParameter(std::string("SubClustersJson"), subClustersJson);
}

bool CreatePrometheusInstanceRequest::getAllSubClustersSuccess() const {
  return allSubClustersSuccess_;
}

void CreatePrometheusInstanceRequest::setAllSubClustersSuccess(bool allSubClustersSuccess) {
  allSubClustersSuccess_ = allSubClustersSuccess;
  setParameter(std::string("AllSubClustersSuccess"), allSubClustersSuccess ? "true" : "false");
}

std::string CreatePrometheusInstanceRequest::getClusterId() const {
  return clusterId_;
}

void CreatePrometheusInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<CreatePrometheusInstanceRequest::Tags> CreatePrometheusInstanceRequest::getTags() const {
  return tags_;
}

void CreatePrometheusInstanceRequest::setTags(const std::vector<CreatePrometheusInstanceRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreatePrometheusInstanceRequest::getClusterType() const {
  return clusterType_;
}

void CreatePrometheusInstanceRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string CreatePrometheusInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreatePrometheusInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreatePrometheusInstanceRequest::getParamJson() const {
  return paramJson_;
}

void CreatePrometheusInstanceRequest::setParamJson(const std::string &paramJson) {
  paramJson_ = paramJson;
  setParameter(std::string("ParamJson"), paramJson);
}

std::string CreatePrometheusInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreatePrometheusInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int CreatePrometheusInstanceRequest::getArchiveDuration() const {
  return archiveDuration_;
}

void CreatePrometheusInstanceRequest::setArchiveDuration(int archiveDuration) {
  archiveDuration_ = archiveDuration;
  setParameter(std::string("ArchiveDuration"), std::to_string(archiveDuration));
}

