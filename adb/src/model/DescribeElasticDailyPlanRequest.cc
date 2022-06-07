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

#include <alibabacloud/adb/model/DescribeElasticDailyPlanRequest.h>

using AlibabaCloud::Adb::Model::DescribeElasticDailyPlanRequest;

DescribeElasticDailyPlanRequest::DescribeElasticDailyPlanRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeElasticDailyPlan") {
  setMethod(HttpRequest::Method::Post);
}

DescribeElasticDailyPlanRequest::~DescribeElasticDailyPlanRequest() {}

long DescribeElasticDailyPlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeElasticDailyPlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeElasticDailyPlanRequest::getElasticDailyPlanStatusList() const {
  return elasticDailyPlanStatusList_;
}

void DescribeElasticDailyPlanRequest::setElasticDailyPlanStatusList(const std::string &elasticDailyPlanStatusList) {
  elasticDailyPlanStatusList_ = elasticDailyPlanStatusList;
  setParameter(std::string("ElasticDailyPlanStatusList"), elasticDailyPlanStatusList);
}

std::string DescribeElasticDailyPlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeElasticDailyPlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeElasticDailyPlanRequest::getElasticDailyPlanDay() const {
  return elasticDailyPlanDay_;
}

void DescribeElasticDailyPlanRequest::setElasticDailyPlanDay(const std::string &elasticDailyPlanDay) {
  elasticDailyPlanDay_ = elasticDailyPlanDay;
  setParameter(std::string("ElasticDailyPlanDay"), elasticDailyPlanDay);
}

std::string DescribeElasticDailyPlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeElasticDailyPlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeElasticDailyPlanRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeElasticDailyPlanRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeElasticDailyPlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeElasticDailyPlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeElasticDailyPlanRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeElasticDailyPlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeElasticDailyPlanRequest::getElasticPlanName() const {
  return elasticPlanName_;
}

void DescribeElasticDailyPlanRequest::setElasticPlanName(const std::string &elasticPlanName) {
  elasticPlanName_ = elasticPlanName;
  setParameter(std::string("ElasticPlanName"), elasticPlanName);
}

std::string DescribeElasticDailyPlanRequest::getResourcePoolName() const {
  return resourcePoolName_;
}

void DescribeElasticDailyPlanRequest::setResourcePoolName(const std::string &resourcePoolName) {
  resourcePoolName_ = resourcePoolName;
  setParameter(std::string("ResourcePoolName"), resourcePoolName);
}

