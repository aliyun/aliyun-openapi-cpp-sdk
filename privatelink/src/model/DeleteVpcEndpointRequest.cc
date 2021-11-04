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

#include <alibabacloud/privatelink/model/DeleteVpcEndpointRequest.h>

using AlibabaCloud::Privatelink::Model::DeleteVpcEndpointRequest;

DeleteVpcEndpointRequest::DeleteVpcEndpointRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "DeleteVpcEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVpcEndpointRequest::~DeleteVpcEndpointRequest() {}

std::string DeleteVpcEndpointRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVpcEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVpcEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void DeleteVpcEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DeleteVpcEndpointRequest::getRegionId() const {
  return regionId_;
}

void DeleteVpcEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteVpcEndpointRequest::getDryRun() const {
  return dryRun_;
}

void DeleteVpcEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool DeleteVpcEndpointRequest::getForce() const {
  return force_;
}

void DeleteVpcEndpointRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

