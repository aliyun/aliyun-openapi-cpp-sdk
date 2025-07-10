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

#include <alibabacloud/vpc/model/ListFullNatEntriesRequest.h>

using AlibabaCloud::Vpc::Model::ListFullNatEntriesRequest;

ListFullNatEntriesRequest::ListFullNatEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListFullNatEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListFullNatEntriesRequest::~ListFullNatEntriesRequest() {}

long ListFullNatEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListFullNatEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListFullNatEntriesRequest::getClientToken() const {
  return clientToken_;
}

void ListFullNatEntriesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> ListFullNatEntriesRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void ListFullNatEntriesRequest::setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
}

std::string ListFullNatEntriesRequest::getFullNatEntryStatus() const {
  return fullNatEntryStatus_;
}

void ListFullNatEntriesRequest::setFullNatEntryStatus(const std::string &fullNatEntryStatus) {
  fullNatEntryStatus_ = fullNatEntryStatus;
  setParameter(std::string("FullNatEntryStatus"), fullNatEntryStatus);
}

std::string ListFullNatEntriesRequest::getFullNatEntryId() const {
  return fullNatEntryId_;
}

void ListFullNatEntriesRequest::setFullNatEntryId(const std::string &fullNatEntryId) {
  fullNatEntryId_ = fullNatEntryId;
  setParameter(std::string("FullNatEntryId"), fullNatEntryId);
}

std::string ListFullNatEntriesRequest::getNatIpPort() const {
  return natIpPort_;
}

void ListFullNatEntriesRequest::setNatIpPort(const std::string &natIpPort) {
  natIpPort_ = natIpPort;
  setParameter(std::string("NatIpPort"), natIpPort);
}

std::string ListFullNatEntriesRequest::getFullNatTableId() const {
  return fullNatTableId_;
}

void ListFullNatEntriesRequest::setFullNatTableId(const std::string &fullNatTableId) {
  fullNatTableId_ = fullNatTableId;
  setParameter(std::string("FullNatTableId"), fullNatTableId);
}

std::string ListFullNatEntriesRequest::getNextToken() const {
  return nextToken_;
}

void ListFullNatEntriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListFullNatEntriesRequest::getRegionId() const {
  return regionId_;
}

void ListFullNatEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ListFullNatEntriesRequest::getFullNatEntryNames() const {
  return fullNatEntryNames_;
}

void ListFullNatEntriesRequest::setFullNatEntryNames(const std::vector<std::string> &fullNatEntryNames) {
  fullNatEntryNames_ = fullNatEntryNames;
}

std::string ListFullNatEntriesRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void ListFullNatEntriesRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string ListFullNatEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListFullNatEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListFullNatEntriesRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ListFullNatEntriesRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ListFullNatEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListFullNatEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListFullNatEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void ListFullNatEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListFullNatEntriesRequest::getNatIp() const {
  return natIp_;
}

void ListFullNatEntriesRequest::setNatIp(const std::string &natIp) {
  natIp_ = natIp;
  setParameter(std::string("NatIp"), natIp);
}

long ListFullNatEntriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListFullNatEntriesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

