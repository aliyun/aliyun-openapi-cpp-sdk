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

#include <alibabacloud/eflo/model/GetNodeInfoForPodRequest.h>

using AlibabaCloud::Eflo::Model::GetNodeInfoForPodRequest;

GetNodeInfoForPodRequest::GetNodeInfoForPodRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetNodeInfoForPod") {
  setMethod(HttpRequest::Method::Post);
}

GetNodeInfoForPodRequest::~GetNodeInfoForPodRequest() {}

std::string GetNodeInfoForPodRequest::getRegionId() const {
  return regionId_;
}

void GetNodeInfoForPodRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetNodeInfoForPodRequest::getNodeId() const {
  return nodeId_;
}

void GetNodeInfoForPodRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

