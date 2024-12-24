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

#include <alibabacloud/eflo/model/CreateElasticNetworkInterfaceRequest.h>

using AlibabaCloud::Eflo::Model::CreateElasticNetworkInterfaceRequest;

CreateElasticNetworkInterfaceRequest::CreateElasticNetworkInterfaceRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateElasticNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

CreateElasticNetworkInterfaceRequest::~CreateElasticNetworkInterfaceRequest() {}

std::string CreateElasticNetworkInterfaceRequest::getClientToken() const {
  return clientToken_;
}

void CreateElasticNetworkInterfaceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateElasticNetworkInterfaceRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateElasticNetworkInterfaceRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setBodyParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateElasticNetworkInterfaceRequest::getDescription() const {
  return description_;
}

void CreateElasticNetworkInterfaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateElasticNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void CreateElasticNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateElasticNetworkInterfaceRequest::getNodeId() const {
  return nodeId_;
}

void CreateElasticNetworkInterfaceRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

bool CreateElasticNetworkInterfaceRequest::getEnableJumboFrame() const {
  return enableJumboFrame_;
}

void CreateElasticNetworkInterfaceRequest::setEnableJumboFrame(bool enableJumboFrame) {
  enableJumboFrame_ = enableJumboFrame;
  setBodyParameter(std::string("EnableJumboFrame"), enableJumboFrame ? "true" : "false");
}

std::string CreateElasticNetworkInterfaceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateElasticNetworkInterfaceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setBodyParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateElasticNetworkInterfaceRequest::getVpcId() const {
  return vpcId_;
}

void CreateElasticNetworkInterfaceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string CreateElasticNetworkInterfaceRequest::getZoneId() const {
  return zoneId_;
}

void CreateElasticNetworkInterfaceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

