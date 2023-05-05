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

#include <alibabacloud/ecd/model/DeleteCloudDriveGroupsRequest.h>

using AlibabaCloud::Ecd::Model::DeleteCloudDriveGroupsRequest;

DeleteCloudDriveGroupsRequest::DeleteCloudDriveGroupsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DeleteCloudDriveGroups") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCloudDriveGroupsRequest::~DeleteCloudDriveGroupsRequest() {}

std::vector<std::string> DeleteCloudDriveGroupsRequest::getGroupId() const {
  return groupId_;
}

void DeleteCloudDriveGroupsRequest::setGroupId(const std::vector<std::string> &groupId) {
  groupId_ = groupId;
}

std::string DeleteCloudDriveGroupsRequest::getCdsId() const {
  return cdsId_;
}

void DeleteCloudDriveGroupsRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string DeleteCloudDriveGroupsRequest::getRegionId() const {
  return regionId_;
}

void DeleteCloudDriveGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

