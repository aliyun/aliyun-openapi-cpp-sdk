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

#include <alibabacloud/vpc/model/GetVpnGatewayDiagnoseResultRequest.h>

using AlibabaCloud::Vpc::Model::GetVpnGatewayDiagnoseResultRequest;

GetVpnGatewayDiagnoseResultRequest::GetVpnGatewayDiagnoseResultRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetVpnGatewayDiagnoseResult") {
  setMethod(HttpRequest::Method::Post);
}

GetVpnGatewayDiagnoseResultRequest::~GetVpnGatewayDiagnoseResultRequest() {}

std::string GetVpnGatewayDiagnoseResultRequest::getClientToken() const {
  return clientToken_;
}

void GetVpnGatewayDiagnoseResultRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetVpnGatewayDiagnoseResultRequest::getRegionId() const {
  return regionId_;
}

void GetVpnGatewayDiagnoseResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetVpnGatewayDiagnoseResultRequest::getDiagnoseId() const {
  return diagnoseId_;
}

void GetVpnGatewayDiagnoseResultRequest::setDiagnoseId(const std::string &diagnoseId) {
  diagnoseId_ = diagnoseId;
  setParameter(std::string("DiagnoseId"), diagnoseId);
}

std::string GetVpnGatewayDiagnoseResultRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void GetVpnGatewayDiagnoseResultRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

