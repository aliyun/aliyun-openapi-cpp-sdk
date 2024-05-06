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

#include <alibabacloud/eflo/model/GetLeniPrivateIpAddressRequest.h>

using AlibabaCloud::Eflo::Model::GetLeniPrivateIpAddressRequest;

GetLeniPrivateIpAddressRequest::GetLeniPrivateIpAddressRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetLeniPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

GetLeniPrivateIpAddressRequest::~GetLeniPrivateIpAddressRequest() {}

std::string GetLeniPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void GetLeniPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetLeniPrivateIpAddressRequest::getIpName() const {
  return ipName_;
}

void GetLeniPrivateIpAddressRequest::setIpName(const std::string &ipName) {
  ipName_ = ipName;
  setBodyParameter(std::string("IpName"), ipName);
}

std::string GetLeniPrivateIpAddressRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void GetLeniPrivateIpAddressRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

