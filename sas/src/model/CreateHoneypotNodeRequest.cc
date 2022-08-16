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

#include <alibabacloud/sas/model/CreateHoneypotNodeRequest.h>

using AlibabaCloud::Sas::Model::CreateHoneypotNodeRequest;

CreateHoneypotNodeRequest::CreateHoneypotNodeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateHoneypotNode") {
  setMethod(HttpRequest::Method::Post);
}

CreateHoneypotNodeRequest::~CreateHoneypotNodeRequest() {}

int CreateHoneypotNodeRequest::getAvailableProbeNum() const {
  return availableProbeNum_;
}

void CreateHoneypotNodeRequest::setAvailableProbeNum(int availableProbeNum) {
  availableProbeNum_ = availableProbeNum;
  setParameter(std::string("AvailableProbeNum"), std::to_string(availableProbeNum));
}

bool CreateHoneypotNodeRequest::getAllowHoneypotAccessInternet() const {
  return allowHoneypotAccessInternet_;
}

void CreateHoneypotNodeRequest::setAllowHoneypotAccessInternet(bool allowHoneypotAccessInternet) {
  allowHoneypotAccessInternet_ = allowHoneypotAccessInternet;
  setParameter(std::string("AllowHoneypotAccessInternet"), allowHoneypotAccessInternet ? "true" : "false");
}

std::string CreateHoneypotNodeRequest::getNodeName() const {
  return nodeName_;
}

void CreateHoneypotNodeRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

std::vector<std::string> CreateHoneypotNodeRequest::getSecurityGroupProbeIpList() const {
  return securityGroupProbeIpList_;
}

void CreateHoneypotNodeRequest::setSecurityGroupProbeIpList(const std::vector<std::string> &securityGroupProbeIpList) {
  securityGroupProbeIpList_ = securityGroupProbeIpList;
}

std::string CreateHoneypotNodeRequest::getNodeVersion() const {
  return nodeVersion_;
}

void CreateHoneypotNodeRequest::setNodeVersion(const std::string &nodeVersion) {
  nodeVersion_ = nodeVersion;
  setParameter(std::string("NodeVersion"), nodeVersion);
}

