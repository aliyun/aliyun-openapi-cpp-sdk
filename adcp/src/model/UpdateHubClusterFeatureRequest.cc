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

#include <alibabacloud/adcp/model/UpdateHubClusterFeatureRequest.h>

using AlibabaCloud::Adcp::Model::UpdateHubClusterFeatureRequest;

UpdateHubClusterFeatureRequest::UpdateHubClusterFeatureRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "UpdateHubClusterFeature") {
  setMethod(HttpRequest::Method::Post);
}

UpdateHubClusterFeatureRequest::~UpdateHubClusterFeatureRequest() {}

std::vector<UpdateHubClusterFeatureRequest::std::string> UpdateHubClusterFeatureRequest::getAccessControlList() const {
  return accessControlList_;
}

void UpdateHubClusterFeatureRequest::setAccessControlList(const std::vector<UpdateHubClusterFeatureRequest::std::string> &accessControlList) {
  accessControlList_ = accessControlList;
  for(int dep1 = 0; dep1 != accessControlList.size(); dep1++) {
    setParameter(std::string("AccessControlList") + "." + std::to_string(dep1 + 1), accessControlList[dep1]);
  }
}

bool UpdateHubClusterFeatureRequest::getMonitorEnabled() const {
  return monitorEnabled_;
}

void UpdateHubClusterFeatureRequest::setMonitorEnabled(bool monitorEnabled) {
  monitorEnabled_ = monitorEnabled;
  setParameter(std::string("MonitorEnabled"), monitorEnabled ? "true" : "false");
}

bool UpdateHubClusterFeatureRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void UpdateHubClusterFeatureRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

bool UpdateHubClusterFeatureRequest::getEnableMesh() const {
  return enableMesh_;
}

void UpdateHubClusterFeatureRequest::setEnableMesh(bool enableMesh) {
  enableMesh_ = enableMesh;
  setParameter(std::string("EnableMesh"), enableMesh ? "true" : "false");
}

bool UpdateHubClusterFeatureRequest::getArgoCDHAEnabled() const {
  return argoCDHAEnabled_;
}

void UpdateHubClusterFeatureRequest::setArgoCDHAEnabled(bool argoCDHAEnabled) {
  argoCDHAEnabled_ = argoCDHAEnabled;
  setParameter(std::string("ArgoCDHAEnabled"), argoCDHAEnabled ? "true" : "false");
}

bool UpdateHubClusterFeatureRequest::getArgoCDEnabled() const {
  return argoCDEnabled_;
}

void UpdateHubClusterFeatureRequest::setArgoCDEnabled(bool argoCDEnabled) {
  argoCDEnabled_ = argoCDEnabled;
  setParameter(std::string("ArgoCDEnabled"), argoCDEnabled ? "true" : "false");
}

std::vector<UpdateHubClusterFeatureRequest::std::string> UpdateHubClusterFeatureRequest::getVSwitches() const {
  return vSwitches_;
}

void UpdateHubClusterFeatureRequest::setVSwitches(const std::vector<UpdateHubClusterFeatureRequest::std::string> &vSwitches) {
  vSwitches_ = vSwitches;
  for(int dep1 = 0; dep1 != vSwitches.size(); dep1++) {
    setParameter(std::string("VSwitches") + "." + std::to_string(dep1 + 1), vSwitches[dep1]);
  }
}

std::string UpdateHubClusterFeatureRequest::getName() const {
  return name_;
}

void UpdateHubClusterFeatureRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool UpdateHubClusterFeatureRequest::getPublicAccessEnabled() const {
  return publicAccessEnabled_;
}

void UpdateHubClusterFeatureRequest::setPublicAccessEnabled(bool publicAccessEnabled) {
  publicAccessEnabled_ = publicAccessEnabled;
  setParameter(std::string("PublicAccessEnabled"), publicAccessEnabled ? "true" : "false");
}

bool UpdateHubClusterFeatureRequest::getPublicApiServerEnabled() const {
  return publicApiServerEnabled_;
}

void UpdateHubClusterFeatureRequest::setPublicApiServerEnabled(bool publicApiServerEnabled) {
  publicApiServerEnabled_ = publicApiServerEnabled;
  setParameter(std::string("PublicApiServerEnabled"), publicApiServerEnabled ? "true" : "false");
}

bool UpdateHubClusterFeatureRequest::getArgoServerEnabled() const {
  return argoServerEnabled_;
}

void UpdateHubClusterFeatureRequest::setArgoServerEnabled(bool argoServerEnabled) {
  argoServerEnabled_ = argoServerEnabled;
  setParameter(std::string("ArgoServerEnabled"), argoServerEnabled ? "true" : "false");
}

std::string UpdateHubClusterFeatureRequest::getWorkflowScheduleMode() const {
  return workflowScheduleMode_;
}

void UpdateHubClusterFeatureRequest::setWorkflowScheduleMode(const std::string &workflowScheduleMode) {
  workflowScheduleMode_ = workflowScheduleMode;
  setParameter(std::string("WorkflowScheduleMode"), workflowScheduleMode);
}

bool UpdateHubClusterFeatureRequest::getAuditLogEnabled() const {
  return auditLogEnabled_;
}

void UpdateHubClusterFeatureRequest::setAuditLogEnabled(bool auditLogEnabled) {
  auditLogEnabled_ = auditLogEnabled;
  setParameter(std::string("AuditLogEnabled"), auditLogEnabled ? "true" : "false");
}

std::string UpdateHubClusterFeatureRequest::getClusterId() const {
  return clusterId_;
}

void UpdateHubClusterFeatureRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateHubClusterFeatureRequest::getPriceLimit() const {
  return priceLimit_;
}

void UpdateHubClusterFeatureRequest::setPriceLimit(const std::string &priceLimit) {
  priceLimit_ = priceLimit;
  setParameter(std::string("PriceLimit"), priceLimit);
}

std::string UpdateHubClusterFeatureRequest::getApiServerEipId() const {
  return apiServerEipId_;
}

void UpdateHubClusterFeatureRequest::setApiServerEipId(const std::string &apiServerEipId) {
  apiServerEipId_ = apiServerEipId;
  setParameter(std::string("ApiServerEipId"), apiServerEipId);
}

