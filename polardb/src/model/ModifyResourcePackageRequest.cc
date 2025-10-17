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

#include <alibabacloud/polardb/model/ModifyResourcePackageRequest.h>

using AlibabaCloud::Polardb::Model::ModifyResourcePackageRequest;

ModifyResourcePackageRequest::ModifyResourcePackageRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyResourcePackage") {
  setMethod(HttpRequest::Method::Post);
}

ModifyResourcePackageRequest::~ModifyResourcePackageRequest() {}

std::string ModifyResourcePackageRequest::getCapacityConfig() const {
  return capacityConfig_;
}

void ModifyResourcePackageRequest::setCapacityConfig(const std::string &capacityConfig) {
  capacityConfig_ = capacityConfig;
  setParameter(std::string("CapacityConfig"), capacityConfig);
}

bool ModifyResourcePackageRequest::getAutoQuota() const {
  return autoQuota_;
}

void ModifyResourcePackageRequest::setAutoQuota(bool autoQuota) {
  autoQuota_ = autoQuota;
  setParameter(std::string("AutoQuota"), autoQuota ? "true" : "false");
}

std::string ModifyResourcePackageRequest::getResourcePackageId() const {
  return resourcePackageId_;
}

void ModifyResourcePackageRequest::setResourcePackageId(const std::string &resourcePackageId) {
  resourcePackageId_ = resourcePackageId;
  setParameter(std::string("ResourcePackageId"), resourcePackageId);
}

