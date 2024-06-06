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

#include <alibabacloud/csas/model/ListUserDevicesRequest.h>

using AlibabaCloud::Csas::Model::ListUserDevicesRequest;

ListUserDevicesRequest::ListUserDevicesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListUserDevices") {
  setMethod(HttpRequest::Method::Get);
}

ListUserDevicesRequest::~ListUserDevicesRequest() {}

std::string ListUserDevicesRequest::getMac() const {
  return mac_;
}

void ListUserDevicesRequest::setMac(const std::string &mac) {
  mac_ = mac;
  setParameter(std::string("Mac"), mac);
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getDeviceTypes() const {
  return deviceTypes_;
}

void ListUserDevicesRequest::setDeviceTypes(const std::vector<ListUserDevicesRequest::std::string> &deviceTypes) {
  deviceTypes_ = deviceTypes;
  for(int dep1 = 0; dep1 != deviceTypes.size(); dep1++) {
    setParameter(std::string("DeviceTypes") + "." + std::to_string(dep1 + 1), deviceTypes[dep1]);
  }
}

std::string ListUserDevicesRequest::getHostname() const {
  return hostname_;
}

void ListUserDevicesRequest::setHostname(const std::string &hostname) {
  hostname_ = hostname;
  setParameter(std::string("Hostname"), hostname);
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getAppStatuses() const {
  return appStatuses_;
}

void ListUserDevicesRequest::setAppStatuses(const std::vector<ListUserDevicesRequest::std::string> &appStatuses) {
  appStatuses_ = appStatuses;
  for(int dep1 = 0; dep1 != appStatuses.size(); dep1++) {
    setParameter(std::string("AppStatuses") + "." + std::to_string(dep1 + 1), appStatuses[dep1]);
  }
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getDlpStatuses() const {
  return dlpStatuses_;
}

void ListUserDevicesRequest::setDlpStatuses(const std::vector<ListUserDevicesRequest::std::string> &dlpStatuses) {
  dlpStatuses_ = dlpStatuses;
  for(int dep1 = 0; dep1 != dlpStatuses.size(); dep1++) {
    setParameter(std::string("DlpStatuses") + "." + std::to_string(dep1 + 1), dlpStatuses[dep1]);
  }
}

std::string ListUserDevicesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUserDevicesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListUserDevicesRequest::getSaseUserId() const {
  return saseUserId_;
}

void ListUserDevicesRequest::setSaseUserId(const std::string &saseUserId) {
  saseUserId_ = saseUserId;
  setParameter(std::string("SaseUserId"), saseUserId);
}

long ListUserDevicesRequest::getPageSize() const {
  return pageSize_;
}

void ListUserDevicesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getNacStatuses() const {
  return nacStatuses_;
}

void ListUserDevicesRequest::setNacStatuses(const std::vector<ListUserDevicesRequest::std::string> &nacStatuses) {
  nacStatuses_ = nacStatuses;
  for(int dep1 = 0; dep1 != nacStatuses.size(); dep1++) {
    setParameter(std::string("NacStatuses") + "." + std::to_string(dep1 + 1), nacStatuses[dep1]);
  }
}

std::string ListUserDevicesRequest::getDepartment() const {
  return department_;
}

void ListUserDevicesRequest::setDepartment(const std::string &department) {
  department_ = department;
  setParameter(std::string("Department"), department);
}

std::string ListUserDevicesRequest::getInnerIp() const {
  return innerIp_;
}

void ListUserDevicesRequest::setInnerIp(const std::string &innerIp) {
  innerIp_ = innerIp;
  setParameter(std::string("InnerIp"), innerIp);
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getIaStatuses() const {
  return iaStatuses_;
}

void ListUserDevicesRequest::setIaStatuses(const std::vector<ListUserDevicesRequest::std::string> &iaStatuses) {
  iaStatuses_ = iaStatuses;
  for(int dep1 = 0; dep1 != iaStatuses.size(); dep1++) {
    setParameter(std::string("IaStatuses") + "." + std::to_string(dep1 + 1), iaStatuses[dep1]);
  }
}

std::string ListUserDevicesRequest::getDeviceBelong() const {
  return deviceBelong_;
}

void ListUserDevicesRequest::setDeviceBelong(const std::string &deviceBelong) {
  deviceBelong_ = deviceBelong;
  setParameter(std::string("DeviceBelong"), deviceBelong);
}

long ListUserDevicesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUserDevicesRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

bool ListUserDevicesRequest::getSharingStatus() const {
  return sharingStatus_;
}

void ListUserDevicesRequest::setSharingStatus(bool sharingStatus) {
  sharingStatus_ = sharingStatus;
  setParameter(std::string("SharingStatus"), sharingStatus ? "true" : "false");
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getDeviceTags() const {
  return deviceTags_;
}

void ListUserDevicesRequest::setDeviceTags(const std::vector<ListUserDevicesRequest::std::string> &deviceTags) {
  deviceTags_ = deviceTags;
  for(int dep1 = 0; dep1 != deviceTags.size(); dep1++) {
    setParameter(std::string("DeviceTags") + "." + std::to_string(dep1 + 1), deviceTags[dep1]);
  }
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getDeviceStatuses() const {
  return deviceStatuses_;
}

void ListUserDevicesRequest::setDeviceStatuses(const std::vector<ListUserDevicesRequest::std::string> &deviceStatuses) {
  deviceStatuses_ = deviceStatuses;
  for(int dep1 = 0; dep1 != deviceStatuses.size(); dep1++) {
    setParameter(std::string("DeviceStatuses") + "." + std::to_string(dep1 + 1), deviceStatuses[dep1]);
  }
}

std::vector<ListUserDevicesRequest::std::string> ListUserDevicesRequest::getPaStatuses() const {
  return paStatuses_;
}

void ListUserDevicesRequest::setPaStatuses(const std::vector<ListUserDevicesRequest::std::string> &paStatuses) {
  paStatuses_ = paStatuses;
  for(int dep1 = 0; dep1 != paStatuses.size(); dep1++) {
    setParameter(std::string("PaStatuses") + "." + std::to_string(dep1 + 1), paStatuses[dep1]);
  }
}

std::string ListUserDevicesRequest::getSortBy() const {
  return sortBy_;
}

void ListUserDevicesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListUserDevicesRequest::getUsername() const {
  return username_;
}

void ListUserDevicesRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

