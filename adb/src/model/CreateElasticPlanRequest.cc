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

#include <alibabacloud/adb/model/CreateElasticPlanRequest.h>

using AlibabaCloud::Adb::Model::CreateElasticPlanRequest;

CreateElasticPlanRequest::CreateElasticPlanRequest()
    : RpcServiceRequest("adb", "2019-03-15", "CreateElasticPlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateElasticPlanRequest::~CreateElasticPlanRequest() {}

long CreateElasticPlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateElasticPlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateElasticPlanRequest::getElasticPlanType() const {
  return elasticPlanType_;
}

void CreateElasticPlanRequest::setElasticPlanType(const std::string &elasticPlanType) {
  elasticPlanType_ = elasticPlanType;
  setParameter(std::string("ElasticPlanType"), elasticPlanType);
}

std::string CreateElasticPlanRequest::getElasticPlanTimeStart() const {
  return elasticPlanTimeStart_;
}

void CreateElasticPlanRequest::setElasticPlanTimeStart(const std::string &elasticPlanTimeStart) {
  elasticPlanTimeStart_ = elasticPlanTimeStart;
  setParameter(std::string("ElasticPlanTimeStart"), elasticPlanTimeStart);
}

std::string CreateElasticPlanRequest::getElasticPlanEndDay() const {
  return elasticPlanEndDay_;
}

void CreateElasticPlanRequest::setElasticPlanEndDay(const std::string &elasticPlanEndDay) {
  elasticPlanEndDay_ = elasticPlanEndDay;
  setParameter(std::string("ElasticPlanEndDay"), elasticPlanEndDay);
}

std::string CreateElasticPlanRequest::getElasticPlanWeeklyRepeat() const {
  return elasticPlanWeeklyRepeat_;
}

void CreateElasticPlanRequest::setElasticPlanWeeklyRepeat(const std::string &elasticPlanWeeklyRepeat) {
  elasticPlanWeeklyRepeat_ = elasticPlanWeeklyRepeat;
  setParameter(std::string("ElasticPlanWeeklyRepeat"), elasticPlanWeeklyRepeat);
}

std::string CreateElasticPlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateElasticPlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateElasticPlanRequest::getElasticPlanWorkerSpec() const {
  return elasticPlanWorkerSpec_;
}

void CreateElasticPlanRequest::setElasticPlanWorkerSpec(const std::string &elasticPlanWorkerSpec) {
  elasticPlanWorkerSpec_ = elasticPlanWorkerSpec;
  setParameter(std::string("ElasticPlanWorkerSpec"), elasticPlanWorkerSpec);
}

bool CreateElasticPlanRequest::getElasticPlanEnable() const {
  return elasticPlanEnable_;
}

void CreateElasticPlanRequest::setElasticPlanEnable(bool elasticPlanEnable) {
  elasticPlanEnable_ = elasticPlanEnable;
  setParameter(std::string("ElasticPlanEnable"), elasticPlanEnable ? "true" : "false");
}

std::string CreateElasticPlanRequest::getElasticPlanTimeEnd() const {
  return elasticPlanTimeEnd_;
}

void CreateElasticPlanRequest::setElasticPlanTimeEnd(const std::string &elasticPlanTimeEnd) {
  elasticPlanTimeEnd_ = elasticPlanTimeEnd;
  setParameter(std::string("ElasticPlanTimeEnd"), elasticPlanTimeEnd);
}

std::string CreateElasticPlanRequest::getElasticPlanStartDay() const {
  return elasticPlanStartDay_;
}

void CreateElasticPlanRequest::setElasticPlanStartDay(const std::string &elasticPlanStartDay) {
  elasticPlanStartDay_ = elasticPlanStartDay;
  setParameter(std::string("ElasticPlanStartDay"), elasticPlanStartDay);
}

std::string CreateElasticPlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateElasticPlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateElasticPlanRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateElasticPlanRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateElasticPlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateElasticPlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateElasticPlanRequest::getOwnerId() const {
  return ownerId_;
}

void CreateElasticPlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateElasticPlanRequest::getElasticPlanName() const {
  return elasticPlanName_;
}

void CreateElasticPlanRequest::setElasticPlanName(const std::string &elasticPlanName) {
  elasticPlanName_ = elasticPlanName;
  setParameter(std::string("ElasticPlanName"), elasticPlanName);
}

std::string CreateElasticPlanRequest::getResourcePoolName() const {
  return resourcePoolName_;
}

void CreateElasticPlanRequest::setResourcePoolName(const std::string &resourcePoolName) {
  resourcePoolName_ = resourcePoolName;
  setParameter(std::string("ResourcePoolName"), resourcePoolName);
}

int CreateElasticPlanRequest::getElasticPlanNodeNum() const {
  return elasticPlanNodeNum_;
}

void CreateElasticPlanRequest::setElasticPlanNodeNum(int elasticPlanNodeNum) {
  elasticPlanNodeNum_ = elasticPlanNodeNum;
  setParameter(std::string("ElasticPlanNodeNum"), std::to_string(elasticPlanNodeNum));
}

