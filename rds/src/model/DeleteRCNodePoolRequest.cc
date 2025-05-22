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

#include <alibabacloud/rds/model/DeleteRCNodePoolRequest.h>

using AlibabaCloud::Rds::Model::DeleteRCNodePoolRequest;

DeleteRCNodePoolRequest::DeleteRCNodePoolRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteRCNodePool") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRCNodePoolRequest::~DeleteRCNodePoolRequest() {}

std::string DeleteRCNodePoolRequest::getClusterId() const {
  return clusterId_;
}

void DeleteRCNodePoolRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DeleteRCNodePoolRequest::getNodePoolId() const {
  return nodePoolId_;
}

void DeleteRCNodePoolRequest::setNodePoolId(const std::string &nodePoolId) {
  nodePoolId_ = nodePoolId;
  setParameter(std::string("NodePoolId"), nodePoolId);
}

std::string DeleteRCNodePoolRequest::getRegionId() const {
  return regionId_;
}

void DeleteRCNodePoolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

