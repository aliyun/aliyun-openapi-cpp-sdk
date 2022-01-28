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

#include <alibabacloud/ens/model/DetachDiskRequest.h>

using AlibabaCloud::Ens::Model::DetachDiskRequest;

DetachDiskRequest::DetachDiskRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DetachDisk") {
  setMethod(HttpRequest::Method::Post);
}

DetachDiskRequest::~DetachDiskRequest() {}

std::string DetachDiskRequest::getDiskId() const {
  return diskId_;
}

void DetachDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::string DetachDiskRequest::getInstanceId() const {
  return instanceId_;
}

void DetachDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

