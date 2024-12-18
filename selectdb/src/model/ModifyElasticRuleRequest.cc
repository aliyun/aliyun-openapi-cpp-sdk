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

#include <alibabacloud/selectdb/model/ModifyElasticRuleRequest.h>

using AlibabaCloud::Selectdb::Model::ModifyElasticRuleRequest;

ModifyElasticRuleRequest::ModifyElasticRuleRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ModifyElasticRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyElasticRuleRequest::~ModifyElasticRuleRequest() {}

long ModifyElasticRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyElasticRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyElasticRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifyElasticRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyElasticRuleRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void ModifyElasticRuleRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string ModifyElasticRuleRequest::getProduct() const {
  return product_;
}

void ModifyElasticRuleRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string ModifyElasticRuleRequest::getExecutionPeriod() const {
  return executionPeriod_;
}

void ModifyElasticRuleRequest::setExecutionPeriod(const std::string &executionPeriod) {
  executionPeriod_ = executionPeriod;
  setParameter(std::string("ExecutionPeriod"), executionPeriod);
}

std::string ModifyElasticRuleRequest::getClusterId() const {
  return clusterId_;
}

void ModifyElasticRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ModifyElasticRuleRequest::getElasticRuleStartTime() const {
  return elasticRuleStartTime_;
}

void ModifyElasticRuleRequest::setElasticRuleStartTime(const std::string &elasticRuleStartTime) {
  elasticRuleStartTime_ = elasticRuleStartTime;
  setParameter(std::string("ElasticRuleStartTime"), elasticRuleStartTime);
}

std::string ModifyElasticRuleRequest::getClusterClass() const {
  return clusterClass_;
}

void ModifyElasticRuleRequest::setClusterClass(const std::string &clusterClass) {
  clusterClass_ = clusterClass;
  setParameter(std::string("ClusterClass"), clusterClass);
}

long ModifyElasticRuleRequest::getRuleId() const {
  return ruleId_;
}

void ModifyElasticRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

