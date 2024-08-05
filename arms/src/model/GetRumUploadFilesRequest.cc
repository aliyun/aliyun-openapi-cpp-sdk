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

#include <alibabacloud/arms/model/GetRumUploadFilesRequest.h>

using AlibabaCloud::ARMS::Model::GetRumUploadFilesRequest;

GetRumUploadFilesRequest::GetRumUploadFilesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRumUploadFiles") {
  setMethod(HttpRequest::Method::Post);
}

GetRumUploadFilesRequest::~GetRumUploadFilesRequest() {}

std::string GetRumUploadFilesRequest::getVersionId() const {
  return versionId_;
}

void GetRumUploadFilesRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string GetRumUploadFilesRequest::getRegionId() const {
  return regionId_;
}

void GetRumUploadFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetRumUploadFilesRequest::getAppType() const {
  return appType_;
}

void GetRumUploadFilesRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setParameter(std::string("AppType"), appType);
}

std::string GetRumUploadFilesRequest::getPid() const {
  return pid_;
}

void GetRumUploadFilesRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

