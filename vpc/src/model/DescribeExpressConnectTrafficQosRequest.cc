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

#include <alibabacloud/vpc/model/DescribeExpressConnectTrafficQosRequest.h>

using AlibabaCloud::Vpc::Model::DescribeExpressConnectTrafficQosRequest;

DescribeExpressConnectTrafficQosRequest::DescribeExpressConnectTrafficQosRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeExpressConnectTrafficQos") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExpressConnectTrafficQosRequest::~DescribeExpressConnectTrafficQosRequest() {}

std::string DescribeExpressConnectTrafficQosRequest::getClientToken() const {
  return clientToken_;
}

void DescribeExpressConnectTrafficQosRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeExpressConnectTrafficQosRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeExpressConnectTrafficQosRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeExpressConnectTrafficQosRequest::getNextToken() const {
  return nextToken_;
}

void DescribeExpressConnectTrafficQosRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeExpressConnectTrafficQosRequest::getRegionId() const {
  return regionId_;
}

void DescribeExpressConnectTrafficQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeExpressConnectTrafficQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeExpressConnectTrafficQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeExpressConnectTrafficQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeExpressConnectTrafficQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> DescribeExpressConnectTrafficQosRequest::getQosIdList() const {
  return qosIdList_;
}

void DescribeExpressConnectTrafficQosRequest::setQosIdList(const std::vector<std::string> &qosIdList) {
  qosIdList_ = qosIdList;
}

long DescribeExpressConnectTrafficQosRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeExpressConnectTrafficQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeExpressConnectTrafficQosRequest::Tags> DescribeExpressConnectTrafficQosRequest::getTags() const {
  return tags_;
}

void DescribeExpressConnectTrafficQosRequest::setTags(const std::vector<DescribeExpressConnectTrafficQosRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::vector<std::string> DescribeExpressConnectTrafficQosRequest::getQosNameList() const {
  return qosNameList_;
}

void DescribeExpressConnectTrafficQosRequest::setQosNameList(const std::vector<std::string> &qosNameList) {
  qosNameList_ = qosNameList;
}

int DescribeExpressConnectTrafficQosRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeExpressConnectTrafficQosRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

