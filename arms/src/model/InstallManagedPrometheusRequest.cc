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

#include <alibabacloud/arms/model/InstallManagedPrometheusRequest.h>

using AlibabaCloud::ARMS::Model::InstallManagedPrometheusRequest;

InstallManagedPrometheusRequest::InstallManagedPrometheusRequest()
    : RpcServiceRequest("arms", "2019-08-08", "InstallManagedPrometheus") {
  setMethod(HttpRequest::Method::Post);
}

InstallManagedPrometheusRequest::~InstallManagedPrometheusRequest() {}

std::string InstallManagedPrometheusRequest::getGrafanaInstanceId() const {
  return grafanaInstanceId_;
}

void InstallManagedPrometheusRequest::setGrafanaInstanceId(const std::string &grafanaInstanceId) {
  grafanaInstanceId_ = grafanaInstanceId;
  setParameter(std::string("GrafanaInstanceId"), grafanaInstanceId);
}

std::string InstallManagedPrometheusRequest::getClusterName() const {
  return clusterName_;
}

void InstallManagedPrometheusRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string InstallManagedPrometheusRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void InstallManagedPrometheusRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string InstallManagedPrometheusRequest::getClusterId() const {
  return clusterId_;
}

void InstallManagedPrometheusRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string InstallManagedPrometheusRequest::getKubeConfig() const {
  return kubeConfig_;
}

void InstallManagedPrometheusRequest::setKubeConfig(const std::string &kubeConfig) {
  kubeConfig_ = kubeConfig;
  setParameter(std::string("KubeConfig"), kubeConfig);
}

std::string InstallManagedPrometheusRequest::getClusterType() const {
  return clusterType_;
}

void InstallManagedPrometheusRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string InstallManagedPrometheusRequest::getVSwitchId() const {
  return vSwitchId_;
}

void InstallManagedPrometheusRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string InstallManagedPrometheusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void InstallManagedPrometheusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string InstallManagedPrometheusRequest::getRegionId() const {
  return regionId_;
}

void InstallManagedPrometheusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InstallManagedPrometheusRequest::getVpcId() const {
  return vpcId_;
}

void InstallManagedPrometheusRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

