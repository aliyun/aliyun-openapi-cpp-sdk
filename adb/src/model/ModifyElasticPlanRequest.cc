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

#include <alibabacloud/adb/model/ModifyElasticPlanRequest.h>

using AlibabaCloud::Adb::Model::ModifyElasticPlanRequest;

ModifyElasticPlanRequest::ModifyElasticPlanRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyElasticPlan") {
  setMethod(HttpRequest::Method::Post);
}

ModifyElasticPlanRequest::~ModifyElasticPlanRequest() {}

long ModifyElasticPlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyElasticPlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyElasticPlanRequest::getElasticPlanType() const {
  return elasticPlanType_;
}

void ModifyElasticPlanRequest::setElasticPlanType(const std::string &elasticPlanType) {
  elasticPlanType_ = elasticPlanType;
  setParameter(std::string("ElasticPlanType"), elasticPlanType);
}

std::string ModifyElasticPlanRequest::getElasticPlanTimeStart() const {
  return elasticPlanTimeStart_;
}

void ModifyElasticPlanRequest::setElasticPlanTimeStart(const std::string &elasticPlanTimeStart) {
  elasticPlanTimeStart_ = elasticPlanTimeStart;
  setParameter(std::string("ElasticPlanTimeStart"), elasticPlanTimeStart);
}

std::string ModifyElasticPlanRequest::getElasticPlanEndDay() const {
  return elasticPlanEndDay_;
}

void ModifyElasticPlanRequest::setElasticPlanEndDay(const std::string &elasticPlanEndDay) {
  elasticPlanEndDay_ = elasticPlanEndDay;
  setParameter(std::string("ElasticPlanEndDay"), elasticPlanEndDay);
}

std::string ModifyElasticPlanRequest::getElasticPlanWeeklyRepeat() const {
  return elasticPlanWeeklyRepeat_;
}

void ModifyElasticPlanRequest::setElasticPlanWeeklyRepeat(const std::string &elasticPlanWeeklyRepeat) {
  elasticPlanWeeklyRepeat_ = elasticPlanWeeklyRepeat;
  setParameter(std::string("ElasticPlanWeeklyRepeat"), elasticPlanWeeklyRepeat);
}

std::string ModifyElasticPlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyElasticPlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyElasticPlanRequest::getElasticPlanWorkerSpec() const {
  return elasticPlanWorkerSpec_;
}

void ModifyElasticPlanRequest::setElasticPlanWorkerSpec(const std::string &elasticPlanWorkerSpec) {
  elasticPlanWorkerSpec_ = elasticPlanWorkerSpec;
  setParameter(std::string("ElasticPlanWorkerSpec"), elasticPlanWorkerSpec);
}

bool ModifyElasticPlanRequest::getElasticPlanEnable() const {
  return elasticPlanEnable_;
}

void ModifyElasticPlanRequest::setElasticPlanEnable(bool elasticPlanEnable) {
  elasticPlanEnable_ = elasticPlanEnable;
  setParameter(std::string("ElasticPlanEnable"), elasticPlanEnable ? "true" : "false");
}

std::string ModifyElasticPlanRequest::getElasticPlanTimeEnd() const {
  return elasticPlanTimeEnd_;
}

void ModifyElasticPlanRequest::setElasticPlanTimeEnd(const std::string &elasticPlanTimeEnd) {
  elasticPlanTimeEnd_ = elasticPlanTimeEnd;
  setParameter(std::string("ElasticPlanTimeEnd"), elasticPlanTimeEnd);
}

std::string ModifyElasticPlanRequest::getElasticPlanStartDay() const {
  return elasticPlanStartDay_;
}

void ModifyElasticPlanRequest::setElasticPlanStartDay(const std::string &elasticPlanStartDay) {
  elasticPlanStartDay_ = elasticPlanStartDay;
  setParameter(std::string("ElasticPlanStartDay"), elasticPlanStartDay);
}

std::string ModifyElasticPlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyElasticPlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyElasticPlanRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyElasticPlanRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyElasticPlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyElasticPlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyElasticPlanRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyElasticPlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyElasticPlanRequest::getElasticPlanName() const {
  return elasticPlanName_;
}

void ModifyElasticPlanRequest::setElasticPlanName(const std::string &elasticPlanName) {
  elasticPlanName_ = elasticPlanName;
  setParameter(std::string("ElasticPlanName"), elasticPlanName);
}

std::string ModifyElasticPlanRequest::getResourcePoolName() const {
  return resourcePoolName_;
}

void ModifyElasticPlanRequest::setResourcePoolName(const std::string &resourcePoolName) {
  resourcePoolName_ = resourcePoolName;
  setParameter(std::string("ResourcePoolName"), resourcePoolName);
}

int ModifyElasticPlanRequest::getElasticPlanNodeNum() const {
  return elasticPlanNodeNum_;
}

void ModifyElasticPlanRequest::setElasticPlanNodeNum(int elasticPlanNodeNum) {
  elasticPlanNodeNum_ = elasticPlanNodeNum;
  setParameter(std::string("ElasticPlanNodeNum"), std::to_string(elasticPlanNodeNum));
}

