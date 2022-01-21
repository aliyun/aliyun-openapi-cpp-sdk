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

#include <alibabacloud/cms/model/ModifyMonitorGroupInstancesRequest.h>

using AlibabaCloud::Cms::Model::ModifyMonitorGroupInstancesRequest;

ModifyMonitorGroupInstancesRequest::ModifyMonitorGroupInstancesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "ModifyMonitorGroupInstances") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMonitorGroupInstancesRequest::~ModifyMonitorGroupInstancesRequest() {}

std::vector<ModifyMonitorGroupInstancesRequest::Instances> ModifyMonitorGroupInstancesRequest::getInstances() const {
  return instances_;
}

void ModifyMonitorGroupInstancesRequest::setInstances(const std::vector<ModifyMonitorGroupInstancesRequest::Instances> &instances) {
  instances_ = instances;
  for(int dep1 = 0; dep1 != instances.size(); dep1++) {
  auto instancesObj = instances.at(dep1);
  std::string instancesObjStr = std::string("Instances") + "." + std::to_string(dep1 + 1);
    setParameter(instancesObjStr + ".InstanceName", instancesObj.instanceName);
    setParameter(instancesObjStr + ".InstanceId", instancesObj.instanceId);
    setParameter(instancesObjStr + ".RegionId", instancesObj.regionId);
    setParameter(instancesObjStr + ".Category", instancesObj.category);
  }
}

long ModifyMonitorGroupInstancesRequest::getGroupId() const {
  return groupId_;
}

void ModifyMonitorGroupInstancesRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

