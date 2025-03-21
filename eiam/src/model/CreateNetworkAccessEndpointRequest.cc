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

#include <alibabacloud/eiam/model/CreateNetworkAccessEndpointRequest.h>

using AlibabaCloud::Eiam::Model::CreateNetworkAccessEndpointRequest;

CreateNetworkAccessEndpointRequest::CreateNetworkAccessEndpointRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateNetworkAccessEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkAccessEndpointRequest::~CreateNetworkAccessEndpointRequest() {}

std::string CreateNetworkAccessEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkAccessEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateNetworkAccessEndpointRequest::std::string> CreateNetworkAccessEndpointRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void CreateNetworkAccessEndpointRequest::setVSwitchIds(const std::vector<CreateNetworkAccessEndpointRequest::std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
  for(int dep1 = 0; dep1 != vSwitchIds.size(); dep1++) {
    setParameter(std::string("VSwitchIds") + "." + std::to_string(dep1 + 1), vSwitchIds[dep1]);
  }
}

std::string CreateNetworkAccessEndpointRequest::getNetworkAccessEndpointName() const {
  return networkAccessEndpointName_;
}

void CreateNetworkAccessEndpointRequest::setNetworkAccessEndpointName(const std::string &networkAccessEndpointName) {
  networkAccessEndpointName_ = networkAccessEndpointName;
  setParameter(std::string("NetworkAccessEndpointName"), networkAccessEndpointName);
}

std::string CreateNetworkAccessEndpointRequest::getVpcRegionId() const {
  return vpcRegionId_;
}

void CreateNetworkAccessEndpointRequest::setVpcRegionId(const std::string &vpcRegionId) {
  vpcRegionId_ = vpcRegionId;
  setParameter(std::string("VpcRegionId"), vpcRegionId);
}

std::string CreateNetworkAccessEndpointRequest::getInstanceId() const {
  return instanceId_;
}

void CreateNetworkAccessEndpointRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateNetworkAccessEndpointRequest::getVpcId() const {
  return vpcId_;
}

void CreateNetworkAccessEndpointRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

