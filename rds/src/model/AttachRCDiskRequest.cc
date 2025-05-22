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

#include <alibabacloud/rds/model/AttachRCDiskRequest.h>

using AlibabaCloud::Rds::Model::AttachRCDiskRequest;

AttachRCDiskRequest::AttachRCDiskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "AttachRCDisk") {
  setMethod(HttpRequest::Method::Post);
}

AttachRCDiskRequest::~AttachRCDiskRequest() {}

std::string AttachRCDiskRequest::getInstanceId() const {
  return instanceId_;
}

void AttachRCDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AttachRCDiskRequest::getRegionId() const {
  return regionId_;
}

void AttachRCDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachRCDiskRequest::getDiskId() const {
  return diskId_;
}

void AttachRCDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool AttachRCDiskRequest::getDeleteWithInstance() const {
  return deleteWithInstance_;
}

void AttachRCDiskRequest::setDeleteWithInstance(bool deleteWithInstance) {
  deleteWithInstance_ = deleteWithInstance;
  setParameter(std::string("DeleteWithInstance"), deleteWithInstance ? "true" : "false");
}

