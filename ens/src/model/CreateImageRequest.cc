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

#include <alibabacloud/ens/model/CreateImageRequest.h>

using AlibabaCloud::Ens::Model::CreateImageRequest;

CreateImageRequest::CreateImageRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateImage") {
  setMethod(HttpRequest::Method::Post);
}

CreateImageRequest::~CreateImageRequest() {}

std::string CreateImageRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateImageRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateImageRequest::getDeleteAfterImageUpload() const {
  return deleteAfterImageUpload_;
}

void CreateImageRequest::setDeleteAfterImageUpload(const std::string &deleteAfterImageUpload) {
  deleteAfterImageUpload_ = deleteAfterImageUpload;
  setParameter(std::string("DeleteAfterImageUpload"), deleteAfterImageUpload);
}

std::string CreateImageRequest::getImageName() const {
  return imageName_;
}

void CreateImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string CreateImageRequest::getTargetOSSRegionId() const {
  return targetOSSRegionId_;
}

void CreateImageRequest::setTargetOSSRegionId(const std::string &targetOSSRegionId) {
  targetOSSRegionId_ = targetOSSRegionId;
  setParameter(std::string("TargetOSSRegionId"), targetOSSRegionId);
}

std::string CreateImageRequest::getInstanceId() const {
  return instanceId_;
}

void CreateImageRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

