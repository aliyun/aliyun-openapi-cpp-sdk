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

#include <alibabacloud/privatelink/model/DetachSecurityGroupFromVpcEndpointRequest.h>

using AlibabaCloud::Privatelink::Model::DetachSecurityGroupFromVpcEndpointRequest;

DetachSecurityGroupFromVpcEndpointRequest::DetachSecurityGroupFromVpcEndpointRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "DetachSecurityGroupFromVpcEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DetachSecurityGroupFromVpcEndpointRequest::~DetachSecurityGroupFromVpcEndpointRequest() {}

std::string DetachSecurityGroupFromVpcEndpointRequest::getClientToken() const {
  return clientToken_;
}

void DetachSecurityGroupFromVpcEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachSecurityGroupFromVpcEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void DetachSecurityGroupFromVpcEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DetachSecurityGroupFromVpcEndpointRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DetachSecurityGroupFromVpcEndpointRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DetachSecurityGroupFromVpcEndpointRequest::getRegionId() const {
  return regionId_;
}

void DetachSecurityGroupFromVpcEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DetachSecurityGroupFromVpcEndpointRequest::getDryRun() const {
  return dryRun_;
}

void DetachSecurityGroupFromVpcEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

