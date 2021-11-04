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

#include <alibabacloud/privatelink/model/UpdateVpcEndpointAttributeRequest.h>

using AlibabaCloud::Privatelink::Model::UpdateVpcEndpointAttributeRequest;

UpdateVpcEndpointAttributeRequest::UpdateVpcEndpointAttributeRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "UpdateVpcEndpointAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpcEndpointAttributeRequest::~UpdateVpcEndpointAttributeRequest() {}

std::string UpdateVpcEndpointAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVpcEndpointAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateVpcEndpointAttributeRequest::getEndpointId() const {
  return endpointId_;
}

void UpdateVpcEndpointAttributeRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string UpdateVpcEndpointAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpcEndpointAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateVpcEndpointAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVpcEndpointAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateVpcEndpointAttributeRequest::getEndpointDescription() const {
  return endpointDescription_;
}

void UpdateVpcEndpointAttributeRequest::setEndpointDescription(const std::string &endpointDescription) {
  endpointDescription_ = endpointDescription;
  setParameter(std::string("EndpointDescription"), endpointDescription);
}

std::string UpdateVpcEndpointAttributeRequest::getEndpointName() const {
  return endpointName_;
}

void UpdateVpcEndpointAttributeRequest::setEndpointName(const std::string &endpointName) {
  endpointName_ = endpointName;
  setParameter(std::string("EndpointName"), endpointName);
}

