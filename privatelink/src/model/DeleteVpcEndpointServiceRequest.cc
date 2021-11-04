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

#include <alibabacloud/privatelink/model/DeleteVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::DeleteVpcEndpointServiceRequest;

DeleteVpcEndpointServiceRequest::DeleteVpcEndpointServiceRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "DeleteVpcEndpointService") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVpcEndpointServiceRequest::~DeleteVpcEndpointServiceRequest() {}

std::string DeleteVpcEndpointServiceRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVpcEndpointServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVpcEndpointServiceRequest::getRegionId() const {
  return regionId_;
}

void DeleteVpcEndpointServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteVpcEndpointServiceRequest::getDryRun() const {
  return dryRun_;
}

void DeleteVpcEndpointServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteVpcEndpointServiceRequest::getServiceId() const {
  return serviceId_;
}

void DeleteVpcEndpointServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

