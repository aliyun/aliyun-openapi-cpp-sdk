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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayAttributeRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSmartAccessGatewayAttributeRequest;

DescribeSmartAccessGatewayAttributeRequest::DescribeSmartAccessGatewayAttributeRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSmartAccessGatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSmartAccessGatewayAttributeRequest::~DescribeSmartAccessGatewayAttributeRequest() {}

long DescribeSmartAccessGatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSmartAccessGatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSmartAccessGatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeSmartAccessGatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSmartAccessGatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSmartAccessGatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSmartAccessGatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSmartAccessGatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSmartAccessGatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSmartAccessGatewayAttributeRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSmartAccessGatewayAttributeRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

