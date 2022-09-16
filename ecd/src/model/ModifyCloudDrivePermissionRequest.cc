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

#include <alibabacloud/ecd/model/ModifyCloudDrivePermissionRequest.h>

using AlibabaCloud::Ecd::Model::ModifyCloudDrivePermissionRequest;

ModifyCloudDrivePermissionRequest::ModifyCloudDrivePermissionRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyCloudDrivePermission") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCloudDrivePermissionRequest::~ModifyCloudDrivePermissionRequest() {}

std::vector<std::string> ModifyCloudDrivePermissionRequest::getDownloadEndUserIds() const {
  return downloadEndUserIds_;
}

void ModifyCloudDrivePermissionRequest::setDownloadEndUserIds(const std::vector<std::string> &downloadEndUserIds) {
  downloadEndUserIds_ = downloadEndUserIds;
}

std::string ModifyCloudDrivePermissionRequest::getCdsId() const {
  return cdsId_;
}

void ModifyCloudDrivePermissionRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::vector<std::string> ModifyCloudDrivePermissionRequest::getDownloadUploadEndUserIds() const {
  return downloadUploadEndUserIds_;
}

void ModifyCloudDrivePermissionRequest::setDownloadUploadEndUserIds(const std::vector<std::string> &downloadUploadEndUserIds) {
  downloadUploadEndUserIds_ = downloadUploadEndUserIds;
}

std::string ModifyCloudDrivePermissionRequest::getRegionId() const {
  return regionId_;
}

void ModifyCloudDrivePermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

