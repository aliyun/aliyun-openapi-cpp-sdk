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

#include <alibabacloud/ens/model/CreateVmAndSaveStockRequest.h>

using AlibabaCloud::Ens::Model::CreateVmAndSaveStockRequest;

CreateVmAndSaveStockRequest::CreateVmAndSaveStockRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateVmAndSaveStock") {
  setMethod(HttpRequest::Method::Post);
}

CreateVmAndSaveStockRequest::~CreateVmAndSaveStockRequest() {}

std::string CreateVmAndSaveStockRequest::getGroupUuid() const {
  return groupUuid_;
}

void CreateVmAndSaveStockRequest::setGroupUuid(const std::string &groupUuid) {
  groupUuid_ = groupUuid;
  setParameter(std::string("GroupUuid"), groupUuid);
}

std::string CreateVmAndSaveStockRequest::getResourceAttribute() const {
  return resourceAttribute_;
}

void CreateVmAndSaveStockRequest::setResourceAttribute(const std::string &resourceAttribute) {
  resourceAttribute_ = resourceAttribute;
  setBodyParameter(std::string("ResourceAttribute"), resourceAttribute);
}

long CreateVmAndSaveStockRequest::getAliUid() const {
  return aliUid_;
}

void CreateVmAndSaveStockRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

std::string CreateVmAndSaveStockRequest::getTenant() const {
  return tenant_;
}

void CreateVmAndSaveStockRequest::setTenant(const std::string &tenant) {
  tenant_ = tenant;
  setParameter(std::string("Tenant"), tenant);
}

std::string CreateVmAndSaveStockRequest::getWorkloadUuid() const {
  return workloadUuid_;
}

void CreateVmAndSaveStockRequest::setWorkloadUuid(const std::string &workloadUuid) {
  workloadUuid_ = workloadUuid;
  setParameter(std::string("WorkloadUuid"), workloadUuid);
}

