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

#include <alibabacloud/swas-open/model/CreateCustomImageRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateCustomImageRequest;

CreateCustomImageRequest::CreateCustomImageRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateCustomImage") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomImageRequest::~CreateCustomImageRequest() {}

std::string CreateCustomImageRequest::getSystemSnapshotId() const {
  return systemSnapshotId_;
}

void CreateCustomImageRequest::setSystemSnapshotId(const std::string &systemSnapshotId) {
  systemSnapshotId_ = systemSnapshotId;
  setParameter(std::string("SystemSnapshotId"), systemSnapshotId);
}

std::string CreateCustomImageRequest::getDataSnapshotId() const {
  return dataSnapshotId_;
}

void CreateCustomImageRequest::setDataSnapshotId(const std::string &dataSnapshotId) {
  dataSnapshotId_ = dataSnapshotId;
  setParameter(std::string("DataSnapshotId"), dataSnapshotId);
}

std::string CreateCustomImageRequest::getClientToken() const {
  return clientToken_;
}

void CreateCustomImageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCustomImageRequest::getDescription() const {
  return description_;
}

void CreateCustomImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCustomImageRequest::getInstanceId() const {
  return instanceId_;
}

void CreateCustomImageRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateCustomImageRequest::getRegionId() const {
  return regionId_;
}

void CreateCustomImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCustomImageRequest::getImageName() const {
  return imageName_;
}

void CreateCustomImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

