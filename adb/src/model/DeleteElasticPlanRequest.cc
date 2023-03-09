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

#include <alibabacloud/adb/model/DeleteElasticPlanRequest.h>

using AlibabaCloud::Adb::Model::DeleteElasticPlanRequest;

DeleteElasticPlanRequest::DeleteElasticPlanRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DeleteElasticPlan") {
  setMethod(HttpRequest::Method::Post);
}

DeleteElasticPlanRequest::~DeleteElasticPlanRequest() {}

long DeleteElasticPlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteElasticPlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteElasticPlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteElasticPlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteElasticPlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteElasticPlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteElasticPlanRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteElasticPlanRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteElasticPlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteElasticPlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteElasticPlanRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteElasticPlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteElasticPlanRequest::getElasticPlanName() const {
  return elasticPlanName_;
}

void DeleteElasticPlanRequest::setElasticPlanName(const std::string &elasticPlanName) {
  elasticPlanName_ = elasticPlanName;
  setParameter(std::string("ElasticPlanName"), elasticPlanName);
}

