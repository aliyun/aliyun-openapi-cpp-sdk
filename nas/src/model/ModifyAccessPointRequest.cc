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

#include <alibabacloud/nas/model/ModifyAccessPointRequest.h>

using AlibabaCloud::NAS::Model::ModifyAccessPointRequest;

ModifyAccessPointRequest::ModifyAccessPointRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccessPointRequest::~ModifyAccessPointRequest() {}

std::string ModifyAccessPointRequest::getAccessPointId() const {
  return accessPointId_;
}

void ModifyAccessPointRequest::setAccessPointId(const std::string &accessPointId) {
  accessPointId_ = accessPointId;
  setParameter(std::string("AccessPointId"), accessPointId);
}

std::string ModifyAccessPointRequest::getAccessPointName() const {
  return accessPointName_;
}

void ModifyAccessPointRequest::setAccessPointName(const std::string &accessPointName) {
  accessPointName_ = accessPointName;
  setParameter(std::string("AccessPointName"), accessPointName);
}

std::string ModifyAccessPointRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyAccessPointRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ModifyAccessPointRequest::getEnabledRam() const {
  return enabledRam_;
}

void ModifyAccessPointRequest::setEnabledRam(bool enabledRam) {
  enabledRam_ = enabledRam;
  setParameter(std::string("EnabledRam"), enabledRam ? "true" : "false");
}

std::string ModifyAccessPointRequest::getAccessGroup() const {
  return accessGroup_;
}

void ModifyAccessPointRequest::setAccessGroup(const std::string &accessGroup) {
  accessGroup_ = accessGroup;
  setParameter(std::string("AccessGroup"), accessGroup);
}

