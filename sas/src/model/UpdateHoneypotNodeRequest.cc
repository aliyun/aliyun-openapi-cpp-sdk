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

#include <alibabacloud/sas/model/UpdateHoneypotNodeRequest.h>

using AlibabaCloud::Sas::Model::UpdateHoneypotNodeRequest;

UpdateHoneypotNodeRequest::UpdateHoneypotNodeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "UpdateHoneypotNode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateHoneypotNodeRequest::~UpdateHoneypotNodeRequest() {}

int UpdateHoneypotNodeRequest::getAvailableProbeNum() const {
  return availableProbeNum_;
}

void UpdateHoneypotNodeRequest::setAvailableProbeNum(int availableProbeNum) {
  availableProbeNum_ = availableProbeNum;
  setParameter(std::string("AvailableProbeNum"), std::to_string(availableProbeNum));
}

std::string UpdateHoneypotNodeRequest::getNodeId() const {
  return nodeId_;
}

void UpdateHoneypotNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string UpdateHoneypotNodeRequest::getNodeName() const {
  return nodeName_;
}

void UpdateHoneypotNodeRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

std::vector<std::string> UpdateHoneypotNodeRequest::getSecurityGroupProbeIpList() const {
  return securityGroupProbeIpList_;
}

void UpdateHoneypotNodeRequest::setSecurityGroupProbeIpList(const std::vector<std::string> &securityGroupProbeIpList) {
  securityGroupProbeIpList_ = securityGroupProbeIpList;
}

