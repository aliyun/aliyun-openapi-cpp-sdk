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

#include <alibabacloud/eflo-controller/model/ListClusterNodesRequest.h>

using AlibabaCloud::Eflo_controller::Model::ListClusterNodesRequest;

ListClusterNodesRequest::ListClusterNodesRequest()
    : RpcServiceRequest("eflo-controller", "2022-12-15", "ListClusterNodes") {
  setMethod(HttpRequest::Method::Post);
}

ListClusterNodesRequest::~ListClusterNodesRequest() {}

std::string ListClusterNodesRequest::getClusterId() const {
  return clusterId_;
}

void ListClusterNodesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string ListClusterNodesRequest::getNodeGroupId() const {
  return nodeGroupId_;
}

void ListClusterNodesRequest::setNodeGroupId(const std::string &nodeGroupId) {
  nodeGroupId_ = nodeGroupId;
  setBodyParameter(std::string("NodeGroupId"), nodeGroupId);
}

std::string ListClusterNodesRequest::getNextToken() const {
  return nextToken_;
}

void ListClusterNodesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

long ListClusterNodesRequest::getMaxResults() const {
  return maxResults_;
}

void ListClusterNodesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

