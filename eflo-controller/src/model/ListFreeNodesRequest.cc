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

#include <alibabacloud/eflo-controller/model/ListFreeNodesRequest.h>

using AlibabaCloud::Eflo_controller::Model::ListFreeNodesRequest;

ListFreeNodesRequest::ListFreeNodesRequest()
    : RpcServiceRequest("eflo-controller", "2022-12-15", "ListFreeNodes") {
  setMethod(HttpRequest::Method::Post);
}

ListFreeNodesRequest::~ListFreeNodesRequest() {}

std::string ListFreeNodesRequest::getMachineType() const {
  return machineType_;
}

void ListFreeNodesRequest::setMachineType(const std::string &machineType) {
  machineType_ = machineType;
  setBodyParameter(std::string("MachineType"), machineType);
}

std::string ListFreeNodesRequest::getNextToken() const {
  return nextToken_;
}

void ListFreeNodesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

long ListFreeNodesRequest::getMaxResults() const {
  return maxResults_;
}

void ListFreeNodesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

