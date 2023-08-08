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

#include <alibabacloud/cbn/model/ListGrantVSwitchEnisRequest.h>

using AlibabaCloud::Cbn::Model::ListGrantVSwitchEnisRequest;

ListGrantVSwitchEnisRequest::ListGrantVSwitchEnisRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListGrantVSwitchEnis") {
  setMethod(HttpRequest::Method::Post);
}

ListGrantVSwitchEnisRequest::~ListGrantVSwitchEnisRequest() {}

long ListGrantVSwitchEnisRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListGrantVSwitchEnisRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListGrantVSwitchEnisRequest::getCenId() const {
  return cenId_;
}

void ListGrantVSwitchEnisRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int ListGrantVSwitchEnisRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGrantVSwitchEnisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListGrantVSwitchEnisRequest::getNextToken() const {
  return nextToken_;
}

void ListGrantVSwitchEnisRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListGrantVSwitchEnisRequest::getPageSize() const {
  return pageSize_;
}

void ListGrantVSwitchEnisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGrantVSwitchEnisRequest::getNetworkInterfaceName() const {
  return networkInterfaceName_;
}

void ListGrantVSwitchEnisRequest::setNetworkInterfaceName(const std::string &networkInterfaceName) {
  networkInterfaceName_ = networkInterfaceName;
  setParameter(std::string("NetworkInterfaceName"), networkInterfaceName);
}

std::string ListGrantVSwitchEnisRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListGrantVSwitchEnisRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListGrantVSwitchEnisRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListGrantVSwitchEnisRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListGrantVSwitchEnisRequest::getOwnerId() const {
  return ownerId_;
}

void ListGrantVSwitchEnisRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListGrantVSwitchEnisRequest::getVersion() const {
  return version_;
}

void ListGrantVSwitchEnisRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListGrantVSwitchEnisRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ListGrantVSwitchEnisRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ListGrantVSwitchEnisRequest::getVpcId() const {
  return vpcId_;
}

void ListGrantVSwitchEnisRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

long ListGrantVSwitchEnisRequest::getMaxResults() const {
  return maxResults_;
}

void ListGrantVSwitchEnisRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListGrantVSwitchEnisRequest::getPrimaryIpAddress() const {
  return primaryIpAddress_;
}

void ListGrantVSwitchEnisRequest::setPrimaryIpAddress(const std::string &primaryIpAddress) {
  primaryIpAddress_ = primaryIpAddress;
  setParameter(std::string("PrimaryIpAddress"), primaryIpAddress);
}

std::vector<ListGrantVSwitchEnisRequest::std::string> ListGrantVSwitchEnisRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void ListGrantVSwitchEnisRequest::setNetworkInterfaceId(const std::vector<ListGrantVSwitchEnisRequest::std::string> &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  for(int dep1 = 0; dep1 != networkInterfaceId.size(); dep1++) {
    setParameter(std::string("NetworkInterfaceId") + "." + std::to_string(dep1 + 1), networkInterfaceId[dep1]);
  }
}

