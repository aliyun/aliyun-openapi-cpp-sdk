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

#include <alibabacloud/ecd/model/ModifyCloudDriveGroupsRequest.h>

using AlibabaCloud::Ecd::Model::ModifyCloudDriveGroupsRequest;

ModifyCloudDriveGroupsRequest::ModifyCloudDriveGroupsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyCloudDriveGroups") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCloudDriveGroupsRequest::~ModifyCloudDriveGroupsRequest() {}

long ModifyCloudDriveGroupsRequest::getTotalSize() const {
  return totalSize_;
}

void ModifyCloudDriveGroupsRequest::setTotalSize(long totalSize) {
  totalSize_ = totalSize;
  setParameter(std::string("TotalSize"), std::to_string(totalSize));
}

std::vector<std::string> ModifyCloudDriveGroupsRequest::getGroupId() const {
  return groupId_;
}

void ModifyCloudDriveGroupsRequest::setGroupId(const std::vector<std::string> &groupId) {
  groupId_ = groupId;
}

std::string ModifyCloudDriveGroupsRequest::getCdsId() const {
  return cdsId_;
}

void ModifyCloudDriveGroupsRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string ModifyCloudDriveGroupsRequest::getRegionId() const {
  return regionId_;
}

void ModifyCloudDriveGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCloudDriveGroupsRequest::getStatus() const {
  return status_;
}

void ModifyCloudDriveGroupsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

