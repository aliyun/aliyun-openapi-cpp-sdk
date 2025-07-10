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

#include <alibabacloud/vpc/model/DiagnoseVpnConnectionsRequest.h>

using AlibabaCloud::Vpc::Model::DiagnoseVpnConnectionsRequest;

DiagnoseVpnConnectionsRequest::DiagnoseVpnConnectionsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DiagnoseVpnConnections") {
  setMethod(HttpRequest::Method::Post);
}

DiagnoseVpnConnectionsRequest::~DiagnoseVpnConnectionsRequest() {}

std::vector<std::string> DiagnoseVpnConnectionsRequest::getTunnelIds() const {
  return tunnelIds_;
}

void DiagnoseVpnConnectionsRequest::setTunnelIds(const std::vector<std::string> &tunnelIds) {
  tunnelIds_ = tunnelIds;
}

long DiagnoseVpnConnectionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DiagnoseVpnConnectionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DiagnoseVpnConnectionsRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DiagnoseVpnConnectionsRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

int DiagnoseVpnConnectionsRequest::getPageNumber() const {
  return pageNumber_;
}

void DiagnoseVpnConnectionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DiagnoseVpnConnectionsRequest::getRegionId() const {
  return regionId_;
}

void DiagnoseVpnConnectionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> DiagnoseVpnConnectionsRequest::getVpnConnectionIds() const {
  return vpnConnectionIds_;
}

void DiagnoseVpnConnectionsRequest::setVpnConnectionIds(const std::vector<std::string> &vpnConnectionIds) {
  vpnConnectionIds_ = vpnConnectionIds;
}

int DiagnoseVpnConnectionsRequest::getPageSize() const {
  return pageSize_;
}

void DiagnoseVpnConnectionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

