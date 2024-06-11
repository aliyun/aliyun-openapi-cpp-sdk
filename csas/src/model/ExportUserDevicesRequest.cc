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

#include <alibabacloud/csas/model/ExportUserDevicesRequest.h>

using AlibabaCloud::Csas::Model::ExportUserDevicesRequest;

ExportUserDevicesRequest::ExportUserDevicesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ExportUserDevices") {
  setMethod(HttpRequest::Method::Post);
}

ExportUserDevicesRequest::~ExportUserDevicesRequest() {}

std::string ExportUserDevicesRequest::getMac() const {
  return mac_;
}

void ExportUserDevicesRequest::setMac(const std::string &mac) {
  mac_ = mac;
  setBodyParameter(std::string("Mac"), mac);
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getDeviceTypes() const {
  return deviceTypes_;
}

void ExportUserDevicesRequest::setDeviceTypes(const std::vector<ExportUserDevicesRequest::std::string> &deviceTypes) {
  deviceTypes_ = deviceTypes;
  for(int dep1 = 0; dep1 != deviceTypes.size(); dep1++) {
    setBodyParameter(std::string("DeviceTypes") + "." + std::to_string(dep1 + 1), deviceTypes[dep1]);
  }
}

std::string ExportUserDevicesRequest::getHostname() const {
  return hostname_;
}

void ExportUserDevicesRequest::setHostname(const std::string &hostname) {
  hostname_ = hostname;
  setBodyParameter(std::string("Hostname"), hostname);
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getAppStatuses() const {
  return appStatuses_;
}

void ExportUserDevicesRequest::setAppStatuses(const std::vector<ExportUserDevicesRequest::std::string> &appStatuses) {
  appStatuses_ = appStatuses;
  for(int dep1 = 0; dep1 != appStatuses.size(); dep1++) {
    setBodyParameter(std::string("AppStatuses") + "." + std::to_string(dep1 + 1), appStatuses[dep1]);
  }
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getDlpStatuses() const {
  return dlpStatuses_;
}

void ExportUserDevicesRequest::setDlpStatuses(const std::vector<ExportUserDevicesRequest::std::string> &dlpStatuses) {
  dlpStatuses_ = dlpStatuses;
  for(int dep1 = 0; dep1 != dlpStatuses.size(); dep1++) {
    setBodyParameter(std::string("DlpStatuses") + "." + std::to_string(dep1 + 1), dlpStatuses[dep1]);
  }
}

std::string ExportUserDevicesRequest::getSourceIp() const {
  return sourceIp_;
}

void ExportUserDevicesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ExportUserDevicesRequest::getSaseUserId() const {
  return saseUserId_;
}

void ExportUserDevicesRequest::setSaseUserId(const std::string &saseUserId) {
  saseUserId_ = saseUserId;
  setBodyParameter(std::string("SaseUserId"), saseUserId);
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getNacStatuses() const {
  return nacStatuses_;
}

void ExportUserDevicesRequest::setNacStatuses(const std::vector<ExportUserDevicesRequest::std::string> &nacStatuses) {
  nacStatuses_ = nacStatuses;
  for(int dep1 = 0; dep1 != nacStatuses.size(); dep1++) {
    setBodyParameter(std::string("NacStatuses") + "." + std::to_string(dep1 + 1), nacStatuses[dep1]);
  }
}

std::string ExportUserDevicesRequest::getDepartment() const {
  return department_;
}

void ExportUserDevicesRequest::setDepartment(const std::string &department) {
  department_ = department;
  setBodyParameter(std::string("Department"), department);
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getIaStatuses() const {
  return iaStatuses_;
}

void ExportUserDevicesRequest::setIaStatuses(const std::vector<ExportUserDevicesRequest::std::string> &iaStatuses) {
  iaStatuses_ = iaStatuses;
  for(int dep1 = 0; dep1 != iaStatuses.size(); dep1++) {
    setBodyParameter(std::string("IaStatuses") + "." + std::to_string(dep1 + 1), iaStatuses[dep1]);
  }
}

std::string ExportUserDevicesRequest::getDeviceBelong() const {
  return deviceBelong_;
}

void ExportUserDevicesRequest::setDeviceBelong(const std::string &deviceBelong) {
  deviceBelong_ = deviceBelong;
  setBodyParameter(std::string("DeviceBelong"), deviceBelong);
}

bool ExportUserDevicesRequest::getSharingStatus() const {
  return sharingStatus_;
}

void ExportUserDevicesRequest::setSharingStatus(bool sharingStatus) {
  sharingStatus_ = sharingStatus;
  setBodyParameter(std::string("SharingStatus"), sharingStatus ? "true" : "false");
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getDeviceTags() const {
  return deviceTags_;
}

void ExportUserDevicesRequest::setDeviceTags(const std::vector<ExportUserDevicesRequest::std::string> &deviceTags) {
  deviceTags_ = deviceTags;
  for(int dep1 = 0; dep1 != deviceTags.size(); dep1++) {
    setBodyParameter(std::string("DeviceTags") + "." + std::to_string(dep1 + 1), deviceTags[dep1]);
  }
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getDeviceStatuses() const {
  return deviceStatuses_;
}

void ExportUserDevicesRequest::setDeviceStatuses(const std::vector<ExportUserDevicesRequest::std::string> &deviceStatuses) {
  deviceStatuses_ = deviceStatuses;
  for(int dep1 = 0; dep1 != deviceStatuses.size(); dep1++) {
    setBodyParameter(std::string("DeviceStatuses") + "." + std::to_string(dep1 + 1), deviceStatuses[dep1]);
  }
}

std::vector<ExportUserDevicesRequest::std::string> ExportUserDevicesRequest::getPaStatuses() const {
  return paStatuses_;
}

void ExportUserDevicesRequest::setPaStatuses(const std::vector<ExportUserDevicesRequest::std::string> &paStatuses) {
  paStatuses_ = paStatuses;
  for(int dep1 = 0; dep1 != paStatuses.size(); dep1++) {
    setBodyParameter(std::string("PaStatuses") + "." + std::to_string(dep1 + 1), paStatuses[dep1]);
  }
}

std::string ExportUserDevicesRequest::getUsername() const {
  return username_;
}

void ExportUserDevicesRequest::setUsername(const std::string &username) {
  username_ = username;
  setBodyParameter(std::string("Username"), username);
}

