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

#include <alibabacloud/privatelink/model/RemoveUserFromVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::RemoveUserFromVpcEndpointServiceRequest;

RemoveUserFromVpcEndpointServiceRequest::RemoveUserFromVpcEndpointServiceRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "RemoveUserFromVpcEndpointService") {
  setMethod(HttpRequest::Method::Post);
}

RemoveUserFromVpcEndpointServiceRequest::~RemoveUserFromVpcEndpointServiceRequest() {}

std::string RemoveUserFromVpcEndpointServiceRequest::getClientToken() const {
  return clientToken_;
}

void RemoveUserFromVpcEndpointServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveUserFromVpcEndpointServiceRequest::getUserARN() const {
  return userARN_;
}

void RemoveUserFromVpcEndpointServiceRequest::setUserARN(const std::string &userARN) {
  userARN_ = userARN;
  setParameter(std::string("UserARN"), userARN);
}

long RemoveUserFromVpcEndpointServiceRequest::getUserId() const {
  return userId_;
}

void RemoveUserFromVpcEndpointServiceRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

std::string RemoveUserFromVpcEndpointServiceRequest::getRegionId() const {
  return regionId_;
}

void RemoveUserFromVpcEndpointServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool RemoveUserFromVpcEndpointServiceRequest::getDryRun() const {
  return dryRun_;
}

void RemoveUserFromVpcEndpointServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RemoveUserFromVpcEndpointServiceRequest::getServiceId() const {
  return serviceId_;
}

void RemoveUserFromVpcEndpointServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

