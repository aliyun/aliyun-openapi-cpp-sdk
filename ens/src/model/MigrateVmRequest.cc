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

#include <alibabacloud/ens/model/MigrateVmRequest.h>

using AlibabaCloud::Ens::Model::MigrateVmRequest;

MigrateVmRequest::MigrateVmRequest()
    : RpcServiceRequest("ens", "2017-11-10", "MigrateVm") {
  setMethod(HttpRequest::Method::Post);
}

MigrateVmRequest::~MigrateVmRequest() {}

std::string MigrateVmRequest::getInstances() const {
  return instances_;
}

void MigrateVmRequest::setInstances(const std::string &instances) {
  instances_ = instances;
  setBodyParameter(std::string("Instances"), instances);
}

std::string MigrateVmRequest::getGroupUuid() const {
  return groupUuid_;
}

void MigrateVmRequest::setGroupUuid(const std::string &groupUuid) {
  groupUuid_ = groupUuid;
  setParameter(std::string("GroupUuid"), groupUuid);
}

std::string MigrateVmRequest::getTenant() const {
  return tenant_;
}

void MigrateVmRequest::setTenant(const std::string &tenant) {
  tenant_ = tenant;
  setParameter(std::string("Tenant"), tenant);
}

std::string MigrateVmRequest::getInstanceIds() const {
  return instanceIds_;
}

void MigrateVmRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

