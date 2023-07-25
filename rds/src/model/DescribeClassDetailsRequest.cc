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

#include <alibabacloud/rds/model/DescribeClassDetailsRequest.h>

using AlibabaCloud::Rds::Model::DescribeClassDetailsRequest;

DescribeClassDetailsRequest::DescribeClassDetailsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeClassDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClassDetailsRequest::~DescribeClassDetailsRequest() {}

long DescribeClassDetailsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeClassDetailsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeClassDetailsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeClassDetailsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeClassDetailsRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeClassDetailsRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeClassDetailsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClassDetailsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeClassDetailsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeClassDetailsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeClassDetailsRequest::getRegionId() const {
  return regionId_;
}

void DescribeClassDetailsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeClassDetailsRequest::getEngine() const {
  return engine_;
}

void DescribeClassDetailsRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeClassDetailsRequest::getClassCode() const {
  return classCode_;
}

void DescribeClassDetailsRequest::setClassCode(const std::string &classCode) {
  classCode_ = classCode;
  setParameter(std::string("ClassCode"), classCode);
}

std::string DescribeClassDetailsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeClassDetailsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeClassDetailsRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeClassDetailsRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long DescribeClassDetailsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeClassDetailsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

