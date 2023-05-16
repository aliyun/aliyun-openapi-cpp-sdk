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

#include <alibabacloud/computenestsupplier/model/UpdateServiceRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::UpdateServiceRequest;

UpdateServiceRequest::UpdateServiceRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "UpdateService") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServiceRequest::~UpdateServiceRequest() {}

std::string UpdateServiceRequest::getAlarmMetadata() const {
  return alarmMetadata_;
}

void UpdateServiceRequest::setAlarmMetadata(const std::string &alarmMetadata) {
  alarmMetadata_ = alarmMetadata;
  setParameter(std::string("AlarmMetadata"), alarmMetadata);
}

std::string UpdateServiceRequest::getClientToken() const {
  return clientToken_;
}

void UpdateServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateServiceRequest::getPolicyNames() const {
  return policyNames_;
}

void UpdateServiceRequest::setPolicyNames(const std::string &policyNames) {
  policyNames_ = policyNames;
  setParameter(std::string("PolicyNames"), policyNames);
}

std::string UpdateServiceRequest::getLicenseMetadata() const {
  return licenseMetadata_;
}

void UpdateServiceRequest::setLicenseMetadata(const std::string &licenseMetadata) {
  licenseMetadata_ = licenseMetadata;
  setParameter(std::string("LicenseMetadata"), licenseMetadata);
}

long UpdateServiceRequest::getDuration() const {
  return duration_;
}

void UpdateServiceRequest::setDuration(long duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

int UpdateServiceRequest::getTrialDuration() const {
  return trialDuration_;
}

void UpdateServiceRequest::setTrialDuration(int trialDuration) {
  trialDuration_ = trialDuration;
  setParameter(std::string("TrialDuration"), std::to_string(trialDuration));
}

std::string UpdateServiceRequest::getRegionId() const {
  return regionId_;
}

void UpdateServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateServiceRequest::getUpgradeMetadata() const {
  return upgradeMetadata_;
}

void UpdateServiceRequest::setUpgradeMetadata(const std::string &upgradeMetadata) {
  upgradeMetadata_ = upgradeMetadata;
  setParameter(std::string("UpgradeMetadata"), upgradeMetadata);
}

std::string UpdateServiceRequest::getDeployMetadata() const {
  return deployMetadata_;
}

void UpdateServiceRequest::setDeployMetadata(const std::string &deployMetadata) {
  deployMetadata_ = deployMetadata;
  setParameter(std::string("DeployMetadata"), deployMetadata);
}

std::string UpdateServiceRequest::getServiceType() const {
  return serviceType_;
}

void UpdateServiceRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

bool UpdateServiceRequest::getIsSupportOperated() const {
  return isSupportOperated_;
}

void UpdateServiceRequest::setIsSupportOperated(bool isSupportOperated) {
  isSupportOperated_ = isSupportOperated;
  setParameter(std::string("IsSupportOperated"), isSupportOperated ? "true" : "false");
}

std::string UpdateServiceRequest::getTenantType() const {
  return tenantType_;
}

void UpdateServiceRequest::setTenantType(const std::string &tenantType) {
  tenantType_ = tenantType;
  setParameter(std::string("TenantType"), tenantType);
}

std::string UpdateServiceRequest::getServiceVersion() const {
  return serviceVersion_;
}

void UpdateServiceRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::vector<UpdateServiceRequest::ServiceInfo> UpdateServiceRequest::getServiceInfo() const {
  return serviceInfo_;
}

void UpdateServiceRequest::setServiceInfo(const std::vector<UpdateServiceRequest::ServiceInfo> &serviceInfo) {
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

std::string UpdateServiceRequest::getServiceId() const {
  return serviceId_;
}

void UpdateServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

std::string UpdateServiceRequest::getVersionName() const {
  return versionName_;
}

void UpdateServiceRequest::setVersionName(const std::string &versionName) {
  versionName_ = versionName;
  setParameter(std::string("VersionName"), versionName);
}

std::string UpdateServiceRequest::getOperationMetadata() const {
  return operationMetadata_;
}

void UpdateServiceRequest::setOperationMetadata(const std::string &operationMetadata) {
  operationMetadata_ = operationMetadata;
  setParameter(std::string("OperationMetadata"), operationMetadata);
}

std::string UpdateServiceRequest::getDeployType() const {
  return deployType_;
}

void UpdateServiceRequest::setDeployType(const std::string &deployType) {
  deployType_ = deployType;
  setParameter(std::string("DeployType"), deployType);
}

