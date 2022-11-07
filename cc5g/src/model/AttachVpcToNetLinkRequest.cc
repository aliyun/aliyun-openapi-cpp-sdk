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

#include <alibabacloud/cc5g/model/AttachVpcToNetLinkRequest.h>

using AlibabaCloud::CC5G::Model::AttachVpcToNetLinkRequest;

AttachVpcToNetLinkRequest::AttachVpcToNetLinkRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "AttachVpcToNetLink") {
  setMethod(HttpRequest::Method::Post);
}

AttachVpcToNetLinkRequest::~AttachVpcToNetLinkRequest() {}

std::string AttachVpcToNetLinkRequest::getClientToken() const {
  return clientToken_;
}

void AttachVpcToNetLinkRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachVpcToNetLinkRequest::getRegionId() const {
  return regionId_;
}

void AttachVpcToNetLinkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AttachVpcToNetLinkRequest::getDryRun() const {
  return dryRun_;
}

void AttachVpcToNetLinkRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AttachVpcToNetLinkRequest::getNetLinkId() const {
  return netLinkId_;
}

void AttachVpcToNetLinkRequest::setNetLinkId(const std::string &netLinkId) {
  netLinkId_ = netLinkId;
  setParameter(std::string("NetLinkId"), netLinkId);
}

std::vector<AttachVpcToNetLinkRequest::std::string> AttachVpcToNetLinkRequest::getVSwitches() const {
  return vSwitches_;
}

void AttachVpcToNetLinkRequest::setVSwitches(const std::vector<AttachVpcToNetLinkRequest::std::string> &vSwitches) {
  vSwitches_ = vSwitches;
  for(int dep1 = 0; dep1 != vSwitches.size(); dep1++) {
    setParameter(std::string("VSwitches") + "." + std::to_string(dep1 + 1), vSwitches[dep1]);
  }
}

std::string AttachVpcToNetLinkRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void AttachVpcToNetLinkRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

std::string AttachVpcToNetLinkRequest::getVpcId() const {
  return vpcId_;
}

void AttachVpcToNetLinkRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

