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

#include <alibabacloud/eflo/model/ListNodeInfosForPodRequest.h>

using AlibabaCloud::Eflo::Model::ListNodeInfosForPodRequest;

ListNodeInfosForPodRequest::ListNodeInfosForPodRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListNodeInfosForPod") {
  setMethod(HttpRequest::Method::Post);
}

ListNodeInfosForPodRequest::~ListNodeInfosForPodRequest() {}

std::string ListNodeInfosForPodRequest::getClusterId() const {
  return clusterId_;
}

void ListNodeInfosForPodRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string ListNodeInfosForPodRequest::getRegionId() const {
  return regionId_;
}

void ListNodeInfosForPodRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListNodeInfosForPodRequest::getZoneId() const {
  return zoneId_;
}

void ListNodeInfosForPodRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

std::string ListNodeInfosForPodRequest::getNodeId() const {
  return nodeId_;
}

void ListNodeInfosForPodRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

