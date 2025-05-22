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

#include <alibabacloud/rds/model/StartRCInstancesRequest.h>

using AlibabaCloud::Rds::Model::StartRCInstancesRequest;

StartRCInstancesRequest::StartRCInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "StartRCInstances") {
  setMethod(HttpRequest::Method::Post);
}

StartRCInstancesRequest::~StartRCInstancesRequest() {}

std::string StartRCInstancesRequest::getRegionId() const {
  return regionId_;
}

void StartRCInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<StartRCInstancesRequest::std::string> StartRCInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void StartRCInstancesRequest::setInstanceIds(const std::vector<StartRCInstancesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string StartRCInstancesRequest::getBatchOptimization() const {
  return batchOptimization_;
}

void StartRCInstancesRequest::setBatchOptimization(const std::string &batchOptimization) {
  batchOptimization_ = batchOptimization;
  setParameter(std::string("BatchOptimization"), batchOptimization);
}

