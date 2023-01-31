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

#include <alibabacloud/vpc/model/ListNatIpCidrsRequest.h>

using AlibabaCloud::Vpc::Model::ListNatIpCidrsRequest;

ListNatIpCidrsRequest::ListNatIpCidrsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListNatIpCidrs") {
  setMethod(HttpRequest::Method::Post);
}

ListNatIpCidrsRequest::~ListNatIpCidrsRequest() {}

std::string ListNatIpCidrsRequest::getNatIpCidrId() const {
  return natIpCidrId_;
}

void ListNatIpCidrsRequest::setNatIpCidrId(const std::string &natIpCidrId) {
  natIpCidrId_ = natIpCidrId;
  setParameter(std::string("NatIpCidrId"), natIpCidrId);
}

std::vector<std::string> ListNatIpCidrsRequest::getNatIpCidrs() const {
  return natIpCidrs_;
}

void ListNatIpCidrsRequest::setNatIpCidrs(const std::vector<std::string> &natIpCidrs) {
  natIpCidrs_ = natIpCidrs;
}

long ListNatIpCidrsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListNatIpCidrsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListNatIpCidrsRequest::getClientToken() const {
  return clientToken_;
}

void ListNatIpCidrsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListNatIpCidrsRequest::getRegionId() const {
  return regionId_;
}

void ListNatIpCidrsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListNatIpCidrsRequest::getNextToken() const {
  return nextToken_;
}

void ListNatIpCidrsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListNatIpCidrsRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void ListNatIpCidrsRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

bool ListNatIpCidrsRequest::getDryRun() const {
  return dryRun_;
}

void ListNatIpCidrsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ListNatIpCidrsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListNatIpCidrsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListNatIpCidrsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListNatIpCidrsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> ListNatIpCidrsRequest::getNatIpCidrName() const {
  return natIpCidrName_;
}

void ListNatIpCidrsRequest::setNatIpCidrName(const std::vector<std::string> &natIpCidrName) {
  natIpCidrName_ = natIpCidrName;
}

long ListNatIpCidrsRequest::getOwnerId() const {
  return ownerId_;
}

void ListNatIpCidrsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListNatIpCidrsRequest::getNatIpCidr() const {
  return natIpCidr_;
}

void ListNatIpCidrsRequest::setNatIpCidr(const std::string &natIpCidr) {
  natIpCidr_ = natIpCidr;
  setParameter(std::string("NatIpCidr"), natIpCidr);
}

std::string ListNatIpCidrsRequest::getNatIpCidrStatus() const {
  return natIpCidrStatus_;
}

void ListNatIpCidrsRequest::setNatIpCidrStatus(const std::string &natIpCidrStatus) {
  natIpCidrStatus_ = natIpCidrStatus;
  setParameter(std::string("NatIpCidrStatus"), natIpCidrStatus);
}

std::string ListNatIpCidrsRequest::getMaxResults() const {
  return maxResults_;
}

void ListNatIpCidrsRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

