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

#include <alibabacloud/vpc/model/DiagnoseVpnGatewayRequest.h>

using AlibabaCloud::Vpc::Model::DiagnoseVpnGatewayRequest;

DiagnoseVpnGatewayRequest::DiagnoseVpnGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DiagnoseVpnGateway") {
  setMethod(HttpRequest::Method::Post);
}

DiagnoseVpnGatewayRequest::~DiagnoseVpnGatewayRequest() {}

std::string DiagnoseVpnGatewayRequest::getClientToken() const {
  return clientToken_;
}

void DiagnoseVpnGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DiagnoseVpnGatewayRequest::getRegionId() const {
  return regionId_;
}

void DiagnoseVpnGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DiagnoseVpnGatewayRequest::getResourceId() const {
  return resourceId_;
}

void DiagnoseVpnGatewayRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DiagnoseVpnGatewayRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DiagnoseVpnGatewayRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

std::string DiagnoseVpnGatewayRequest::getResourceType() const {
  return resourceType_;
}

void DiagnoseVpnGatewayRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DiagnoseVpnGatewayRequest::getIPsecExtendInfo() const {
  return iPsecExtendInfo_;
}

void DiagnoseVpnGatewayRequest::setIPsecExtendInfo(const std::string &iPsecExtendInfo) {
  iPsecExtendInfo_ = iPsecExtendInfo;
  setParameter(std::string("IPsecExtendInfo"), iPsecExtendInfo);
}

