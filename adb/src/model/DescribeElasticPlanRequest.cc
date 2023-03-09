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

#include <alibabacloud/adb/model/DescribeElasticPlanRequest.h>

using AlibabaCloud::Adb::Model::DescribeElasticPlanRequest;

DescribeElasticPlanRequest::DescribeElasticPlanRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeElasticPlan") {
  setMethod(HttpRequest::Method::Post);
}

DescribeElasticPlanRequest::~DescribeElasticPlanRequest() {}

long DescribeElasticPlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeElasticPlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeElasticPlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeElasticPlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool DescribeElasticPlanRequest::getElasticPlanEnable() const {
  return elasticPlanEnable_;
}

void DescribeElasticPlanRequest::setElasticPlanEnable(bool elasticPlanEnable) {
  elasticPlanEnable_ = elasticPlanEnable;
  setParameter(std::string("ElasticPlanEnable"), elasticPlanEnable ? "true" : "false");
}

std::string DescribeElasticPlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeElasticPlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeElasticPlanRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeElasticPlanRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeElasticPlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeElasticPlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeElasticPlanRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeElasticPlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeElasticPlanRequest::getElasticPlanName() const {
  return elasticPlanName_;
}

void DescribeElasticPlanRequest::setElasticPlanName(const std::string &elasticPlanName) {
  elasticPlanName_ = elasticPlanName;
  setParameter(std::string("ElasticPlanName"), elasticPlanName);
}

std::string DescribeElasticPlanRequest::getResourcePoolName() const {
  return resourcePoolName_;
}

void DescribeElasticPlanRequest::setResourcePoolName(const std::string &resourcePoolName) {
  resourcePoolName_ = resourcePoolName;
  setParameter(std::string("ResourcePoolName"), resourcePoolName);
}

