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

#include <alibabacloud/oceanbasepro/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest() {}

bool ModifyInstanceSpecRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void ModifyInstanceSpecRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setBodyParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getInstanceClass() const {
  return instanceClass_;
}

void ModifyInstanceSpecRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setBodyParameter(std::string("InstanceClass"), instanceClass);
}

bool ModifyInstanceSpecRequest::getDryRun() const {
  return dryRun_;
}

void ModifyInstanceSpecRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long ModifyInstanceSpecRequest::getDiskSize() const {
  return diskSize_;
}

void ModifyInstanceSpecRequest::setDiskSize(long diskSize) {
  diskSize_ = diskSize;
  setBodyParameter(std::string("DiskSize"), std::to_string(diskSize));
}

std::string ModifyInstanceSpecRequest::getDiskType() const {
  return diskType_;
}

void ModifyInstanceSpecRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setBodyParameter(std::string("DiskType"), diskType);
}

std::string ModifyInstanceSpecRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

long ModifyInstanceSpecRequest::getLogDiskSize() const {
  return logDiskSize_;
}

void ModifyInstanceSpecRequest::setLogDiskSize(long logDiskSize) {
  logDiskSize_ = logDiskSize;
  setBodyParameter(std::string("LogDiskSize"), std::to_string(logDiskSize));
}

bool ModifyInstanceSpecRequest::getUpgradeSpecNative() const {
  return upgradeSpecNative_;
}

void ModifyInstanceSpecRequest::setUpgradeSpecNative(bool upgradeSpecNative) {
  upgradeSpecNative_ = upgradeSpecNative;
  setBodyParameter(std::string("UpgradeSpecNative"), upgradeSpecNative ? "true" : "false");
}

