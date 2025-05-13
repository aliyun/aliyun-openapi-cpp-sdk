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

#include <alibabacloud/schedulerx2/model/UpdateAppGroupRequest.h>

using AlibabaCloud::Schedulerx2::Model::UpdateAppGroupRequest;

UpdateAppGroupRequest::UpdateAppGroupRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "UpdateAppGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAppGroupRequest::~UpdateAppGroupRequest() {}

std::string UpdateAppGroupRequest::getDescription() const {
  return description_;
}

void UpdateAppGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateAppGroupRequest::getRegionId() const {
  return regionId_;
}

void UpdateAppGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAppGroupRequest::getAlarmJson() const {
  return alarmJson_;
}

void UpdateAppGroupRequest::setAlarmJson(const std::string &alarmJson) {
  alarmJson_ = alarmJson;
  setParameter(std::string("AlarmJson"), alarmJson);
}

std::string UpdateAppGroupRequest::getMonitorContactsJson() const {
  return monitorContactsJson_;
}

void UpdateAppGroupRequest::setMonitorContactsJson(const std::string &monitorContactsJson) {
  monitorContactsJson_ = monitorContactsJson;
  setParameter(std::string("MonitorContactsJson"), monitorContactsJson);
}

long UpdateAppGroupRequest::getAppGroupId() const {
  return appGroupId_;
}

void UpdateAppGroupRequest::setAppGroupId(long appGroupId) {
  appGroupId_ = appGroupId;
  setParameter(std::string("AppGroupId"), std::to_string(appGroupId));
}

int UpdateAppGroupRequest::getMaxJobs() const {
  return maxJobs_;
}

void UpdateAppGroupRequest::setMaxJobs(int maxJobs) {
  maxJobs_ = maxJobs;
  setParameter(std::string("MaxJobs"), std::to_string(maxJobs));
}

std::string UpdateAppGroupRequest::getMetricsThresholdJson() const {
  return metricsThresholdJson_;
}

void UpdateAppGroupRequest::setMetricsThresholdJson(const std::string &metricsThresholdJson) {
  metricsThresholdJson_ = metricsThresholdJson;
  setParameter(std::string("MetricsThresholdJson"), metricsThresholdJson);
}

std::string UpdateAppGroupRequest::getGroupId() const {
  return groupId_;
}

void UpdateAppGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

int UpdateAppGroupRequest::getAppVersion() const {
  return appVersion_;
}

void UpdateAppGroupRequest::setAppVersion(int appVersion) {
  appVersion_ = appVersion;
  setParameter(std::string("AppVersion"), std::to_string(appVersion));
}

std::string UpdateAppGroupRequest::getMonitorConfigJson() const {
  return monitorConfigJson_;
}

void UpdateAppGroupRequest::setMonitorConfigJson(const std::string &monitorConfigJson) {
  monitorConfigJson_ = monitorConfigJson;
  setParameter(std::string("MonitorConfigJson"), monitorConfigJson);
}

std::string UpdateAppGroupRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateAppGroupRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string UpdateAppGroupRequest::getXattrs() const {
  return xattrs_;
}

void UpdateAppGroupRequest::setXattrs(const std::string &xattrs) {
  xattrs_ = xattrs;
  setParameter(std::string("Xattrs"), xattrs);
}

int UpdateAppGroupRequest::getMaxConcurrency() const {
  return maxConcurrency_;
}

void UpdateAppGroupRequest::setMaxConcurrency(int maxConcurrency) {
  maxConcurrency_ = maxConcurrency;
  setParameter(std::string("MaxConcurrency"), std::to_string(maxConcurrency));
}

