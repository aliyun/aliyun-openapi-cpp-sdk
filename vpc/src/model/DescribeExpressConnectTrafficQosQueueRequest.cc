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

#include <alibabacloud/vpc/model/DescribeExpressConnectTrafficQosQueueRequest.h>

using AlibabaCloud::Vpc::Model::DescribeExpressConnectTrafficQosQueueRequest;

DescribeExpressConnectTrafficQosQueueRequest::DescribeExpressConnectTrafficQosQueueRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeExpressConnectTrafficQosQueue") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExpressConnectTrafficQosQueueRequest::~DescribeExpressConnectTrafficQosQueueRequest() {}

std::string DescribeExpressConnectTrafficQosQueueRequest::getClientToken() const {
  return clientToken_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeExpressConnectTrafficQosQueueRequest::getRegionId() const {
  return regionId_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeExpressConnectTrafficQosQueueRequest::getQosId() const {
  return qosId_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DescribeExpressConnectTrafficQosQueueRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeExpressConnectTrafficQosQueueRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> DescribeExpressConnectTrafficQosQueueRequest::getQueueIdList() const {
  return queueIdList_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setQueueIdList(const std::vector<std::string> &queueIdList) {
  queueIdList_ = queueIdList;
}

std::vector<std::string> DescribeExpressConnectTrafficQosQueueRequest::getQueueNameList() const {
  return queueNameList_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setQueueNameList(const std::vector<std::string> &queueNameList) {
  queueNameList_ = queueNameList;
}

long DescribeExpressConnectTrafficQosQueueRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeExpressConnectTrafficQosQueueRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

