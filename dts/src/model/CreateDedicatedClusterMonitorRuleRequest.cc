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

#include <alibabacloud/dts/model/CreateDedicatedClusterMonitorRuleRequest.h>

using AlibabaCloud::Dts::Model::CreateDedicatedClusterMonitorRuleRequest;

CreateDedicatedClusterMonitorRuleRequest::CreateDedicatedClusterMonitorRuleRequest()
    : RpcServiceRequest("dts", "2020-01-01", "CreateDedicatedClusterMonitorRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateDedicatedClusterMonitorRuleRequest::~CreateDedicatedClusterMonitorRuleRequest() {}

long CreateDedicatedClusterMonitorRuleRequest::getCpuAlarmThreshold() const {
  return cpuAlarmThreshold_;
}

void CreateDedicatedClusterMonitorRuleRequest::setCpuAlarmThreshold(long cpuAlarmThreshold) {
  cpuAlarmThreshold_ = cpuAlarmThreshold;
  setParameter(std::string("CpuAlarmThreshold"), std::to_string(cpuAlarmThreshold));
}

std::string CreateDedicatedClusterMonitorRuleRequest::getPhones() const {
  return phones_;
}

void CreateDedicatedClusterMonitorRuleRequest::setPhones(const std::string &phones) {
  phones_ = phones;
  setParameter(std::string("Phones"), phones);
}

std::string CreateDedicatedClusterMonitorRuleRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void CreateDedicatedClusterMonitorRuleRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

long CreateDedicatedClusterMonitorRuleRequest::getDiskAlarmThreshold() const {
  return diskAlarmThreshold_;
}

void CreateDedicatedClusterMonitorRuleRequest::setDiskAlarmThreshold(long diskAlarmThreshold) {
  diskAlarmThreshold_ = diskAlarmThreshold;
  setParameter(std::string("DiskAlarmThreshold"), std::to_string(diskAlarmThreshold));
}

std::string CreateDedicatedClusterMonitorRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateDedicatedClusterMonitorRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long CreateDedicatedClusterMonitorRuleRequest::getMemAlarmThreshold() const {
  return memAlarmThreshold_;
}

void CreateDedicatedClusterMonitorRuleRequest::setMemAlarmThreshold(long memAlarmThreshold) {
  memAlarmThreshold_ = memAlarmThreshold;
  setParameter(std::string("MemAlarmThreshold"), std::to_string(memAlarmThreshold));
}

long CreateDedicatedClusterMonitorRuleRequest::getDuAlarmThreshold() const {
  return duAlarmThreshold_;
}

void CreateDedicatedClusterMonitorRuleRequest::setDuAlarmThreshold(long duAlarmThreshold) {
  duAlarmThreshold_ = duAlarmThreshold;
  setParameter(std::string("DuAlarmThreshold"), std::to_string(duAlarmThreshold));
}

std::string CreateDedicatedClusterMonitorRuleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDedicatedClusterMonitorRuleRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

long CreateDedicatedClusterMonitorRuleRequest::getNoticeSwitch() const {
  return noticeSwitch_;
}

void CreateDedicatedClusterMonitorRuleRequest::setNoticeSwitch(long noticeSwitch) {
  noticeSwitch_ = noticeSwitch;
  setParameter(std::string("NoticeSwitch"), std::to_string(noticeSwitch));
}

std::string CreateDedicatedClusterMonitorRuleRequest::getInstanceId() const {
  return instanceId_;
}

void CreateDedicatedClusterMonitorRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

