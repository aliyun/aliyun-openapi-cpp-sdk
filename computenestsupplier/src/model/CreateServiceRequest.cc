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

#include <alibabacloud/computenestsupplier/model/CreateServiceRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::CreateServiceRequest;

CreateServiceRequest::CreateServiceRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "CreateService") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceRequest::~CreateServiceRequest() {}

std::string CreateServiceRequest::getAlarmMetadata() const {
  return alarmMetadata_;
}

void CreateServiceRequest::setAlarmMetadata(const std::string &alarmMetadata) {
  alarmMetadata_ = alarmMetadata;
  setParameter(std::string("AlarmMetadata"), alarmMetadata);
}

std::string CreateServiceRequest::getClientToken() const {
  return clientToken_;
}

void CreateServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateServiceRequest::getPolicyNames() const {
  return policyNames_;
}

void CreateServiceRequest::setPolicyNames(const std::string &policyNames) {
  policyNames_ = policyNames;
  setParameter(std::string("PolicyNames"), policyNames);
}

std::string CreateServiceRequest::getLicenseMetadata() const {
  return licenseMetadata_;
}

void CreateServiceRequest::setLicenseMetadata(const std::string &licenseMetadata) {
  licenseMetadata_ = licenseMetadata;
  setParameter(std::string("LicenseMetadata"), licenseMetadata);
}

long CreateServiceRequest::getDuration() const {
  return duration_;
}

void CreateServiceRequest::setDuration(long duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateServiceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateServiceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateServiceRequest::getApprovalType() const {
  return approvalType_;
}

void CreateServiceRequest::setApprovalType(const std::string &approvalType) {
  approvalType_ = approvalType;
  setParameter(std::string("ApprovalType"), approvalType);
}

long CreateServiceRequest::getTrialDuration() const {
  return trialDuration_;
}

void CreateServiceRequest::setTrialDuration(long trialDuration) {
  trialDuration_ = trialDuration;
  setParameter(std::string("TrialDuration"), std::to_string(trialDuration));
}

std::string CreateServiceRequest::getRegionId() const {
  return regionId_;
}

void CreateServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateServiceRequest::getShareType() const {
  return shareType_;
}

void CreateServiceRequest::setShareType(const std::string &shareType) {
  shareType_ = shareType;
  setParameter(std::string("ShareType"), shareType);
}

std::vector<CreateServiceRequest::Tag> CreateServiceRequest::getTag() const {
  return tag_;
}

void CreateServiceRequest::setTag(const std::vector<CreateServiceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateServiceRequest::getUpgradeMetadata() const {
  return upgradeMetadata_;
}

void CreateServiceRequest::setUpgradeMetadata(const std::string &upgradeMetadata) {
  upgradeMetadata_ = upgradeMetadata;
  setParameter(std::string("UpgradeMetadata"), upgradeMetadata);
}

std::string CreateServiceRequest::getDeployMetadata() const {
  return deployMetadata_;
}

void CreateServiceRequest::setDeployMetadata(const std::string &deployMetadata) {
  deployMetadata_ = deployMetadata;
  setParameter(std::string("DeployMetadata"), deployMetadata);
}

std::string CreateServiceRequest::getServiceType() const {
  return serviceType_;
}

void CreateServiceRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

bool CreateServiceRequest::getIsSupportOperated() const {
  return isSupportOperated_;
}

void CreateServiceRequest::setIsSupportOperated(bool isSupportOperated) {
  isSupportOperated_ = isSupportOperated;
  setParameter(std::string("IsSupportOperated"), isSupportOperated ? "true" : "false");
}

std::string CreateServiceRequest::getTenantType() const {
  return tenantType_;
}

void CreateServiceRequest::setTenantType(const std::string &tenantType) {
  tenantType_ = tenantType;
  setParameter(std::string("TenantType"), tenantType);
}

std::vector<CreateServiceRequest::ServiceInfo> CreateServiceRequest::getServiceInfo() const {
  return serviceInfo_;
}

void CreateServiceRequest::setServiceInfo(const std::vector<CreateServiceRequest::ServiceInfo> &serviceInfo) {
  serviceInfo_ = serviceInfo;
  for(int dep1 = 0; dep1 != serviceInfo.size(); dep1++) {
  auto serviceInfoObj = serviceInfo.at(dep1);
  std::string serviceInfoObjStr = std::string("ServiceInfo") + "." + std::to_string(dep1 + 1);
    setParameter(serviceInfoObjStr + ".ShortDescription", serviceInfoObj.shortDescription);
    setParameter(serviceInfoObjStr + ".Image", serviceInfoObj.image);
    setParameter(serviceInfoObjStr + ".Name", serviceInfoObj.name);
    setParameter(serviceInfoObjStr + ".Locale", serviceInfoObj.locale);
  }
}

std::string CreateServiceRequest::getServiceId() const {
  return serviceId_;
}

void CreateServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

std::string CreateServiceRequest::getVersionName() const {
  return versionName_;
}

void CreateServiceRequest::setVersionName(const std::string &versionName) {
  versionName_ = versionName;
  setParameter(std::string("VersionName"), versionName);
}

std::string CreateServiceRequest::getOperationMetadata() const {
  return operationMetadata_;
}

void CreateServiceRequest::setOperationMetadata(const std::string &operationMetadata) {
  operationMetadata_ = operationMetadata;
  setParameter(std::string("OperationMetadata"), operationMetadata);
}

std::string CreateServiceRequest::getDeployType() const {
  return deployType_;
}

void CreateServiceRequest::setDeployType(const std::string &deployType) {
  deployType_ = deployType;
  setParameter(std::string("DeployType"), deployType);
}

