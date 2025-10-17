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

#include <alibabacloud/polardb/model/CreateApplicationRequest.h>

using AlibabaCloud::Polardb::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest() {}

std::vector<CreateApplicationRequest::Components> CreateApplicationRequest::getComponents() const {
  return components_;
}

void CreateApplicationRequest::setComponents(const std::vector<CreateApplicationRequest::Components> &components) {
  components_ = components;
  for(int dep1 = 0; dep1 != components.size(); dep1++) {
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentReplica", std::to_string(components[dep1].componentReplica));
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".SecurityIPNetType", components[dep1].securityIPNetType);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentMaxReplica", std::to_string(components[dep1].componentMaxReplica));
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ScaleMax", components[dep1].scaleMax);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ParameterTemplateId", components[dep1].parameterTemplateId);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".SecurityIPList", components[dep1].securityIPList);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentType", components[dep1].componentType);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".SecurityIPType", components[dep1].securityIPType);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentClass", components[dep1].componentClass);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Parameters", components[dep1].parameters);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".SecurityGroups", components[dep1].securityGroups);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".SecurityIPArrayName", components[dep1].securityIPArrayName);
    setParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ScaleMin", components[dep1].scaleMin);
  }
}

std::string CreateApplicationRequest::getDescription() const {
  return description_;
}

void CreateApplicationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateApplicationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateApplicationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateApplicationRequest::getRegionId() const {
  return regionId_;
}

void CreateApplicationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateApplicationRequest::getArchitecture() const {
  return architecture_;
}

void CreateApplicationRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

std::string CreateApplicationRequest::getPeriod() const {
  return period_;
}

void CreateApplicationRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::vector<CreateApplicationRequest::Endpoints> CreateApplicationRequest::getEndpoints() const {
  return endpoints_;
}

void CreateApplicationRequest::setEndpoints(const std::vector<CreateApplicationRequest::Endpoints> &endpoints) {
  endpoints_ = endpoints;
  for(int dep1 = 0; dep1 != endpoints.size(); dep1++) {
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".EndpointType", endpoints[dep1].endpointType);
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".Description", endpoints[dep1].description);
  }
}

bool CreateApplicationRequest::getDryRun() const {
  return dryRun_;
}

void CreateApplicationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateApplicationRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateApplicationRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateApplicationRequest::getVersion() const {
  return version_;
}

void CreateApplicationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateApplicationRequest::getUsedTime() const {
  return usedTime_;
}

void CreateApplicationRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateApplicationRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateApplicationRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateApplicationRequest::getPolarFSInstanceId() const {
  return polarFSInstanceId_;
}

void CreateApplicationRequest::setPolarFSInstanceId(const std::string &polarFSInstanceId) {
  polarFSInstanceId_ = polarFSInstanceId;
  setParameter(std::string("PolarFSInstanceId"), polarFSInstanceId);
}

bool CreateApplicationRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateApplicationRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateApplicationRequest::getVpcId() const {
  return vpcId_;
}

void CreateApplicationRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateApplicationRequest::getZoneId() const {
  return zoneId_;
}

void CreateApplicationRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateApplicationRequest::getApplicationType() const {
  return applicationType_;
}

void CreateApplicationRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setParameter(std::string("ApplicationType"), applicationType);
}

std::string CreateApplicationRequest::getPayType() const {
  return payType_;
}

void CreateApplicationRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

