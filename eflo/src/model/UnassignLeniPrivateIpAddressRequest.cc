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

#include <alibabacloud/eflo/model/UnassignLeniPrivateIpAddressRequest.h>

using AlibabaCloud::Eflo::Model::UnassignLeniPrivateIpAddressRequest;

UnassignLeniPrivateIpAddressRequest::UnassignLeniPrivateIpAddressRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UnassignLeniPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

UnassignLeniPrivateIpAddressRequest::~UnassignLeniPrivateIpAddressRequest() {}

std::string UnassignLeniPrivateIpAddressRequest::getClientToken() const {
  return clientToken_;
}

void UnassignLeniPrivateIpAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UnassignLeniPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void UnassignLeniPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UnassignLeniPrivateIpAddressRequest::getIpName() const {
  return ipName_;
}

void UnassignLeniPrivateIpAddressRequest::setIpName(const std::string &ipName) {
  ipName_ = ipName;
  setBodyParameter(std::string("IpName"), ipName);
}

std::string UnassignLeniPrivateIpAddressRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void UnassignLeniPrivateIpAddressRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

