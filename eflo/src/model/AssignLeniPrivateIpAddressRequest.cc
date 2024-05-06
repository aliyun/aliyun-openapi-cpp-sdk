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

#include <alibabacloud/eflo/model/AssignLeniPrivateIpAddressRequest.h>

using AlibabaCloud::Eflo::Model::AssignLeniPrivateIpAddressRequest;

AssignLeniPrivateIpAddressRequest::AssignLeniPrivateIpAddressRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "AssignLeniPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

AssignLeniPrivateIpAddressRequest::~AssignLeniPrivateIpAddressRequest() {}

std::string AssignLeniPrivateIpAddressRequest::getClientToken() const {
  return clientToken_;
}

void AssignLeniPrivateIpAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string AssignLeniPrivateIpAddressRequest::getDescription() const {
  return description_;
}

void AssignLeniPrivateIpAddressRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string AssignLeniPrivateIpAddressRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void AssignLeniPrivateIpAddressRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setBodyParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string AssignLeniPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void AssignLeniPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string AssignLeniPrivateIpAddressRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void AssignLeniPrivateIpAddressRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

