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

#include <alibabacloud/privatelink/model/AddZoneToVpcEndpointRequest.h>

using AlibabaCloud::Privatelink::Model::AddZoneToVpcEndpointRequest;

AddZoneToVpcEndpointRequest::AddZoneToVpcEndpointRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "AddZoneToVpcEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

AddZoneToVpcEndpointRequest::~AddZoneToVpcEndpointRequest() {}

std::string AddZoneToVpcEndpointRequest::getClientToken() const {
  return clientToken_;
}

void AddZoneToVpcEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddZoneToVpcEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void AddZoneToVpcEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string AddZoneToVpcEndpointRequest::getRegionId() const {
  return regionId_;
}

void AddZoneToVpcEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AddZoneToVpcEndpointRequest::getDryRun() const {
  return dryRun_;
}

void AddZoneToVpcEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AddZoneToVpcEndpointRequest::getIp() const {
  return ip_;
}

void AddZoneToVpcEndpointRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("ip"), ip);
}

std::string AddZoneToVpcEndpointRequest::getVSwitchId() const {
  return vSwitchId_;
}

void AddZoneToVpcEndpointRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string AddZoneToVpcEndpointRequest::getZoneId() const {
  return zoneId_;
}

void AddZoneToVpcEndpointRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

