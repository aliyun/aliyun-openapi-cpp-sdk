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

#include <alibabacloud/ecd/model/ResetNASDefaultMountTargetRequest.h>

using AlibabaCloud::Ecd::Model::ResetNASDefaultMountTargetRequest;

ResetNASDefaultMountTargetRequest::ResetNASDefaultMountTargetRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ResetNASDefaultMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

ResetNASDefaultMountTargetRequest::~ResetNASDefaultMountTargetRequest() {}

std::string ResetNASDefaultMountTargetRequest::getRegionId() const {
  return regionId_;
}

void ResetNASDefaultMountTargetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResetNASDefaultMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ResetNASDefaultMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

