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

#include <alibabacloud/adcp/model/CreateHubClusterRequest.h>

using AlibabaCloud::Adcp::Model::CreateHubClusterRequest;

CreateHubClusterRequest::CreateHubClusterRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "CreateHubCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateHubClusterRequest::~CreateHubClusterRequest() {}

std::string CreateHubClusterRequest::getAuditLogProject() const {
  return auditLogProject_;
}

void CreateHubClusterRequest::setAuditLogProject(const std::string &auditLogProject) {
  auditLogProject_ = auditLogProject;
  setBodyParameter(std::string("AuditLogProject"), auditLogProject);
}

std::string CreateHubClusterRequest::getLoadBalancerSpec() const {
  return loadBalancerSpec_;
}

void CreateHubClusterRequest::setLoadBalancerSpec(const std::string &loadBalancerSpec) {
  loadBalancerSpec_ = loadBalancerSpec;
  setBodyParameter(std::string("LoadBalancerSpec"), loadBalancerSpec);
}

std::string CreateHubClusterRequest::getKubernetesVersion() const {
  return kubernetesVersion_;
}

void CreateHubClusterRequest::setKubernetesVersion(const std::string &kubernetesVersion) {
  kubernetesVersion_ = kubernetesVersion;
  setBodyParameter(std::string("KubernetesVersion"), kubernetesVersion);
}

std::string CreateHubClusterRequest::getProfile() const {
  return profile_;
}

void CreateHubClusterRequest::setProfile(const std::string &profile) {
  profile_ = profile;
  setBodyParameter(std::string("Profile"), profile);
}

std::string CreateHubClusterRequest::getVSwitches() const {
  return vSwitches_;
}

void CreateHubClusterRequest::setVSwitches(const std::string &vSwitches) {
  vSwitches_ = vSwitches;
  setBodyParameter(std::string("VSwitches"), vSwitches);
}

std::string CreateHubClusterRequest::getControlPlaneLogProject() const {
  return controlPlaneLogProject_;
}

void CreateHubClusterRequest::setControlPlaneLogProject(const std::string &controlPlaneLogProject) {
  controlPlaneLogProject_ = controlPlaneLogProject;
  setBodyParameter(std::string("ControlPlaneLogProject"), controlPlaneLogProject);
}

std::string CreateHubClusterRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateHubClusterRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateHubClusterRequest::getClusterSpec() const {
  return clusterSpec_;
}

void CreateHubClusterRequest::setClusterSpec(const std::string &clusterSpec) {
  clusterSpec_ = clusterSpec;
  setBodyParameter(std::string("ClusterSpec"), clusterSpec);
}

std::string CreateHubClusterRequest::getName() const {
  return name_;
}

void CreateHubClusterRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateHubClusterRequest::getClusterDomain() const {
  return clusterDomain_;
}

void CreateHubClusterRequest::setClusterDomain(const std::string &clusterDomain) {
  clusterDomain_ = clusterDomain;
  setBodyParameter(std::string("ClusterDomain"), clusterDomain);
}

std::string CreateHubClusterRequest::getControlPlaneLogTTL() const {
  return controlPlaneLogTTL_;
}

void CreateHubClusterRequest::setControlPlaneLogTTL(const std::string &controlPlaneLogTTL) {
  controlPlaneLogTTL_ = controlPlaneLogTTL;
  setBodyParameter(std::string("ControlPlaneLogTTL"), controlPlaneLogTTL);
}

std::vector<CreateHubClusterRequest::WorkflowUnits> CreateHubClusterRequest::getWorkflowUnits() const {
  return workflowUnits_;
}

void CreateHubClusterRequest::setWorkflowUnits(const std::vector<CreateHubClusterRequest::WorkflowUnits> &workflowUnits) {
  workflowUnits_ = workflowUnits;
  for(int dep1 = 0; dep1 != workflowUnits.size(); dep1++) {
    setBodyParameter(std::string("WorkflowUnits") + "." + std::to_string(dep1 + 1) + ".RegionId", workflowUnits[dep1].regionId);
    setBodyParameter(std::string("WorkflowUnits") + "." + std::to_string(dep1 + 1) + ".VpcId", workflowUnits[dep1].vpcId);
    for(int dep2 = 0; dep2 != workflowUnits[dep1].vSwitches.size(); dep2++) {
      setBodyParameter(std::string("WorkflowUnits") + "." + std::to_string(dep1 + 1) + ".VSwitches." + std::to_string(dep2 + 1) + ".VswitchId", workflowUnits[dep1].vSwitches[dep2].vswitchId);
      setBodyParameter(std::string("WorkflowUnits") + "." + std::to_string(dep1 + 1) + ".VSwitches." + std::to_string(dep2 + 1) + ".ZoneId", workflowUnits[dep1].vSwitches[dep2].zoneId);
    }
  }
}

std::string CreateHubClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateHubClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateHubClusterRequest::getAuditLogStoreTTL() const {
  return auditLogStoreTTL_;
}

void CreateHubClusterRequest::setAuditLogStoreTTL(const std::string &auditLogStoreTTL) {
  auditLogStoreTTL_ = auditLogStoreTTL;
  setBodyParameter(std::string("AuditLogStoreTTL"), auditLogStoreTTL);
}

std::string CreateHubClusterRequest::getIPStack() const {
  return iPStack_;
}

void CreateHubClusterRequest::setIPStack(const std::string &iPStack) {
  iPStack_ = iPStack;
  setBodyParameter(std::string("IPStack"), iPStack);
}

bool CreateHubClusterRequest::getControlPlaneLogEnabled() const {
  return controlPlaneLogEnabled_;
}

void CreateHubClusterRequest::setControlPlaneLogEnabled(bool controlPlaneLogEnabled) {
  controlPlaneLogEnabled_ = controlPlaneLogEnabled;
  setBodyParameter(std::string("ControlPlaneLogEnabled"), controlPlaneLogEnabled ? "true" : "false");
}

bool CreateHubClusterRequest::getArgoServerEnabled() const {
  return argoServerEnabled_;
}

void CreateHubClusterRequest::setArgoServerEnabled(bool argoServerEnabled) {
  argoServerEnabled_ = argoServerEnabled;
  setBodyParameter(std::string("ArgoServerEnabled"), argoServerEnabled ? "true" : "false");
}

std::string CreateHubClusterRequest::getWorkflowScheduleMode() const {
  return workflowScheduleMode_;
}

void CreateHubClusterRequest::setWorkflowScheduleMode(const std::string &workflowScheduleMode) {
  workflowScheduleMode_ = workflowScheduleMode;
  setBodyParameter(std::string("WorkflowScheduleMode"), workflowScheduleMode);
}

bool CreateHubClusterRequest::getApiServerPublicEip() const {
  return apiServerPublicEip_;
}

void CreateHubClusterRequest::setApiServerPublicEip(bool apiServerPublicEip) {
  apiServerPublicEip_ = apiServerPublicEip;
  setBodyParameter(std::string("ApiServerPublicEip"), apiServerPublicEip ? "true" : "false");
}

bool CreateHubClusterRequest::getAuditLogEnabled() const {
  return auditLogEnabled_;
}

void CreateHubClusterRequest::setAuditLogEnabled(bool auditLogEnabled) {
  auditLogEnabled_ = auditLogEnabled;
  setBodyParameter(std::string("AuditLogEnabled"), auditLogEnabled ? "true" : "false");
}

std::string CreateHubClusterRequest::getSecurityGroupIDs() const {
  return securityGroupIDs_;
}

void CreateHubClusterRequest::setSecurityGroupIDs(const std::string &securityGroupIDs) {
  securityGroupIDs_ = securityGroupIDs;
  setBodyParameter(std::string("SecurityGroupIDs"), securityGroupIDs);
}

std::string CreateHubClusterRequest::getPriceLimit() const {
  return priceLimit_;
}

void CreateHubClusterRequest::setPriceLimit(const std::string &priceLimit) {
  priceLimit_ = priceLimit;
  setBodyParameter(std::string("PriceLimit"), priceLimit);
}

bool CreateHubClusterRequest::getIsEnterpriseSecurityGroup() const {
  return isEnterpriseSecurityGroup_;
}

void CreateHubClusterRequest::setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup) {
  isEnterpriseSecurityGroup_ = isEnterpriseSecurityGroup;
  setBodyParameter(std::string("IsEnterpriseSecurityGroup"), isEnterpriseSecurityGroup ? "true" : "false");
}

std::string CreateHubClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateHubClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

