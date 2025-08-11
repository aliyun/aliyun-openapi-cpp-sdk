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

#include <alibabacloud/rds/model/ModifyRCVClusterRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCVClusterRequest;

ModifyRCVClusterRequest::ModifyRCVClusterRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCVCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCVClusterRequest::~ModifyRCVClusterRequest() {}

std::string ModifyRCVClusterRequest::getClusterId() const {
  return clusterId_;
}

void ModifyRCVClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ModifyRCVClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCVClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ModifyRCVClusterRequest::std::string> ModifyRCVClusterRequest::getSupportDiskPerformanceLevel() const {
  return supportDiskPerformanceLevel_;
}

void ModifyRCVClusterRequest::setSupportDiskPerformanceLevel(const std::vector<ModifyRCVClusterRequest::std::string> &supportDiskPerformanceLevel) {
  supportDiskPerformanceLevel_ = supportDiskPerformanceLevel;
  for(int dep1 = 0; dep1 != supportDiskPerformanceLevel.size(); dep1++) {
    setParameter(std::string("SupportDiskPerformanceLevel") + "." + std::to_string(dep1 + 1), supportDiskPerformanceLevel[dep1]);
  }
}

