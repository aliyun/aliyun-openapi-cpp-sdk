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

#include <alibabacloud/rds/model/DeleteRCInstancesRequest.h>

using AlibabaCloud::Rds::Model::DeleteRCInstancesRequest;

DeleteRCInstancesRequest::DeleteRCInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteRCInstances") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRCInstancesRequest::~DeleteRCInstancesRequest() {}

bool DeleteRCInstancesRequest::getDryRun() const {
  return dryRun_;
}

void DeleteRCInstancesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<DeleteRCInstancesRequest::std::string> DeleteRCInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteRCInstancesRequest::setInstanceId(const std::vector<DeleteRCInstancesRequest::std::string> &instanceId) {
  instanceId_ = instanceId;
  for(int dep1 = 0; dep1 != instanceId.size(); dep1++) {
    setParameter(std::string("InstanceId") + "." + std::to_string(dep1 + 1), instanceId[dep1]);
  }
}

std::string DeleteRCInstancesRequest::getRegionId() const {
  return regionId_;
}

void DeleteRCInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteRCInstancesRequest::getTerminateSubscription() const {
  return terminateSubscription_;
}

void DeleteRCInstancesRequest::setTerminateSubscription(bool terminateSubscription) {
  terminateSubscription_ = terminateSubscription;
  setParameter(std::string("TerminateSubscription"), terminateSubscription ? "true" : "false");
}

bool DeleteRCInstancesRequest::getForce() const {
  return force_;
}

void DeleteRCInstancesRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

