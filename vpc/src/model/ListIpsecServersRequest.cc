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

#include <alibabacloud/vpc/model/ListIpsecServersRequest.h>

using AlibabaCloud::Vpc::Model::ListIpsecServersRequest;

ListIpsecServersRequest::ListIpsecServersRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListIpsecServers") {
  setMethod(HttpRequest::Method::Post);
}

ListIpsecServersRequest::~ListIpsecServersRequest() {}

long ListIpsecServersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListIpsecServersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListIpsecServersRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void ListIpsecServersRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

std::string ListIpsecServersRequest::getCallerBid() const {
  return callerBid_;
}

void ListIpsecServersRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

std::string ListIpsecServersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListIpsecServersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListIpsecServersRequest::getRegionId() const {
  return regionId_;
}

void ListIpsecServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListIpsecServersRequest::getNextToken() const {
  return nextToken_;
}

void ListIpsecServersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListIpsecServersRequest::getIpsecServerName() const {
  return ipsecServerName_;
}

void ListIpsecServersRequest::setIpsecServerName(const std::string &ipsecServerName) {
  ipsecServerName_ = ipsecServerName;
  setParameter(std::string("IpsecServerName"), ipsecServerName);
}

int ListIpsecServersRequest::getMaxResults() const {
  return maxResults_;
}

void ListIpsecServersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> ListIpsecServersRequest::getIpsecServerId() const {
  return ipsecServerId_;
}

void ListIpsecServersRequest::setIpsecServerId(const std::vector<std::string> &ipsecServerId) {
  ipsecServerId_ = ipsecServerId;
}

