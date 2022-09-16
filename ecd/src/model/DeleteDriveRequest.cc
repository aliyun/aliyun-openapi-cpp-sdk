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

#include <alibabacloud/ecd/model/DeleteDriveRequest.h>

using AlibabaCloud::Ecd::Model::DeleteDriveRequest;

DeleteDriveRequest::DeleteDriveRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DeleteDrive") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDriveRequest::~DeleteDriveRequest() {}

std::string DeleteDriveRequest::getDriveId() const {
  return driveId_;
}

void DeleteDriveRequest::setDriveId(const std::string &driveId) {
  driveId_ = driveId;
  setParameter(std::string("DriveId"), driveId);
}

std::string DeleteDriveRequest::getRegionId() const {
  return regionId_;
}

void DeleteDriveRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

