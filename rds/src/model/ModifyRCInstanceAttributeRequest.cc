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

#include <alibabacloud/rds/model/ModifyRCInstanceAttributeRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCInstanceAttributeRequest;

ModifyRCInstanceAttributeRequest::ModifyRCInstanceAttributeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCInstanceAttributeRequest::~ModifyRCInstanceAttributeRequest() {}

std::string ModifyRCInstanceAttributeRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifyRCInstanceAttributeRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

bool ModifyRCInstanceAttributeRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void ModifyRCInstanceAttributeRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string ModifyRCInstanceAttributeRequest::getPassword() const {
  return password_;
}

void ModifyRCInstanceAttributeRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifyRCInstanceAttributeRequest::getHostName() const {
  return hostName_;
}

void ModifyRCInstanceAttributeRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string ModifyRCInstanceAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCInstanceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyRCInstanceAttributeRequest::getReboot() const {
  return reboot_;
}

void ModifyRCInstanceAttributeRequest::setReboot(bool reboot) {
  reboot_ = reboot;
  setParameter(std::string("Reboot"), reboot ? "true" : "false");
}

std::vector<ModifyRCInstanceAttributeRequest::std::string> ModifyRCInstanceAttributeRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void ModifyRCInstanceAttributeRequest::setSecurityGroupIds(const std::vector<ModifyRCInstanceAttributeRequest::std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
  for(int dep1 = 0; dep1 != securityGroupIds.size(); dep1++) {
    setParameter(std::string("SecurityGroupIds") + "." + std::to_string(dep1 + 1), securityGroupIds[dep1]);
  }
}

std::string ModifyRCInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyRCInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<ModifyRCInstanceAttributeRequest::std::string> ModifyRCInstanceAttributeRequest::getInstanceIds() const {
  return instanceIds_;
}

void ModifyRCInstanceAttributeRequest::setInstanceIds(const std::vector<ModifyRCInstanceAttributeRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

