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

#include <alibabacloud/rds/model/ResizeRCInstanceDiskRequest.h>

using AlibabaCloud::Rds::Model::ResizeRCInstanceDiskRequest;

ResizeRCInstanceDiskRequest::ResizeRCInstanceDiskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ResizeRCInstanceDisk") {
  setMethod(HttpRequest::Method::Post);
}

ResizeRCInstanceDiskRequest::~ResizeRCInstanceDiskRequest() {}

std::string ResizeRCInstanceDiskRequest::getType() const {
  return type_;
}

void ResizeRCInstanceDiskRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ResizeRCInstanceDiskRequest::getRegionId() const {
  return regionId_;
}

void ResizeRCInstanceDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResizeRCInstanceDiskRequest::getDiskId() const {
  return diskId_;
}

void ResizeRCInstanceDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool ResizeRCInstanceDiskRequest::getAutoPay() const {
  return autoPay_;
}

void ResizeRCInstanceDiskRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ResizeRCInstanceDiskRequest::getDryRun() const {
  return dryRun_;
}

void ResizeRCInstanceDiskRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long ResizeRCInstanceDiskRequest::getNewSize() const {
  return newSize_;
}

void ResizeRCInstanceDiskRequest::setNewSize(long newSize) {
  newSize_ = newSize;
  setParameter(std::string("NewSize"), std::to_string(newSize));
}

std::string ResizeRCInstanceDiskRequest::getInstanceId() const {
  return instanceId_;
}

void ResizeRCInstanceDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

