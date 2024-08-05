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

#include <alibabacloud/arms/model/UpdatePrometheusInstanceRequest.h>

using AlibabaCloud::ARMS::Model::UpdatePrometheusInstanceRequest;

UpdatePrometheusInstanceRequest::UpdatePrometheusInstanceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdatePrometheusInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrometheusInstanceRequest::~UpdatePrometheusInstanceRequest() {}

std::string UpdatePrometheusInstanceRequest::getClusterId() const {
  return clusterId_;
}

void UpdatePrometheusInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdatePrometheusInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdatePrometheusInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdatePrometheusInstanceRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrometheusInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdatePrometheusInstanceRequest::getStorageDuration() const {
  return storageDuration_;
}

void UpdatePrometheusInstanceRequest::setStorageDuration(int storageDuration) {
  storageDuration_ = storageDuration;
  setParameter(std::string("StorageDuration"), std::to_string(storageDuration));
}

int UpdatePrometheusInstanceRequest::getArchiveDuration() const {
  return archiveDuration_;
}

void UpdatePrometheusInstanceRequest::setArchiveDuration(int archiveDuration) {
  archiveDuration_ = archiveDuration;
  setParameter(std::string("ArchiveDuration"), std::to_string(archiveDuration));
}

