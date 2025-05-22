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

#include <alibabacloud/rds/model/StopRCInstancesRequest.h>

using AlibabaCloud::Rds::Model::StopRCInstancesRequest;

StopRCInstancesRequest::StopRCInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "StopRCInstances") {
  setMethod(HttpRequest::Method::Post);
}

StopRCInstancesRequest::~StopRCInstancesRequest() {}

bool StopRCInstancesRequest::getForceStop() const {
  return forceStop_;
}

void StopRCInstancesRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

std::string StopRCInstancesRequest::getRegionId() const {
  return regionId_;
}

void StopRCInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<StopRCInstancesRequest::std::string> StopRCInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void StopRCInstancesRequest::setInstanceIds(const std::vector<StopRCInstancesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string StopRCInstancesRequest::getBatchOptimization() const {
  return batchOptimization_;
}

void StopRCInstancesRequest::setBatchOptimization(const std::string &batchOptimization) {
  batchOptimization_ = batchOptimization;
  setParameter(std::string("BatchOptimization"), batchOptimization);
}

