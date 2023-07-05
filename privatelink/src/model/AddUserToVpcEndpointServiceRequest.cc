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

#include <alibabacloud/privatelink/model/AddUserToVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::AddUserToVpcEndpointServiceRequest;

AddUserToVpcEndpointServiceRequest::AddUserToVpcEndpointServiceRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "AddUserToVpcEndpointService") {
  setMethod(HttpRequest::Method::Post);
}

AddUserToVpcEndpointServiceRequest::~AddUserToVpcEndpointServiceRequest() {}

std::string AddUserToVpcEndpointServiceRequest::getClientToken() const {
  return clientToken_;
}

void AddUserToVpcEndpointServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddUserToVpcEndpointServiceRequest::getUserARN() const {
  return userARN_;
}

void AddUserToVpcEndpointServiceRequest::setUserARN(const std::string &userARN) {
  userARN_ = userARN;
  setParameter(std::string("UserARN"), userARN);
}

long AddUserToVpcEndpointServiceRequest::getUserId() const {
  return userId_;
}

void AddUserToVpcEndpointServiceRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

std::string AddUserToVpcEndpointServiceRequest::getRegionId() const {
  return regionId_;
}

void AddUserToVpcEndpointServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AddUserToVpcEndpointServiceRequest::getDryRun() const {
  return dryRun_;
}

void AddUserToVpcEndpointServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AddUserToVpcEndpointServiceRequest::getServiceId() const {
  return serviceId_;
}

void AddUserToVpcEndpointServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

