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

#include <alibabacloud/rds/model/ReplaceRCInstanceSystemDiskRequest.h>

using AlibabaCloud::Rds::Model::ReplaceRCInstanceSystemDiskRequest;

ReplaceRCInstanceSystemDiskRequest::ReplaceRCInstanceSystemDiskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ReplaceRCInstanceSystemDisk") {
  setMethod(HttpRequest::Method::Post);
}

ReplaceRCInstanceSystemDiskRequest::~ReplaceRCInstanceSystemDiskRequest() {}

bool ReplaceRCInstanceSystemDiskRequest::getIsLocalDisk() const {
  return isLocalDisk_;
}

void ReplaceRCInstanceSystemDiskRequest::setIsLocalDisk(bool isLocalDisk) {
  isLocalDisk_ = isLocalDisk;
  setParameter(std::string("IsLocalDisk"), isLocalDisk ? "true" : "false");
}

std::string ReplaceRCInstanceSystemDiskRequest::getImageId() const {
  return imageId_;
}

void ReplaceRCInstanceSystemDiskRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ReplaceRCInstanceSystemDiskRequest::getKeyPairName() const {
  return keyPairName_;
}

void ReplaceRCInstanceSystemDiskRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string ReplaceRCInstanceSystemDiskRequest::getPassword() const {
  return password_;
}

void ReplaceRCInstanceSystemDiskRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ReplaceRCInstanceSystemDiskRequest::getInstanceId() const {
  return instanceId_;
}

void ReplaceRCInstanceSystemDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ReplaceRCInstanceSystemDiskRequest::getRegionId() const {
  return regionId_;
}

void ReplaceRCInstanceSystemDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

