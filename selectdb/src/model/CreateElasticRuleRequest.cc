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

#include <alibabacloud/selectdb/model/CreateElasticRuleRequest.h>

using AlibabaCloud::Selectdb::Model::CreateElasticRuleRequest;

CreateElasticRuleRequest::CreateElasticRuleRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "CreateElasticRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateElasticRuleRequest::~CreateElasticRuleRequest() {}

long CreateElasticRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateElasticRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateElasticRuleRequest::getExecutionPeriod() const {
  return executionPeriod_;
}

void CreateElasticRuleRequest::setExecutionPeriod(const std::string &executionPeriod) {
  executionPeriod_ = executionPeriod;
  setParameter(std::string("ExecutionPeriod"), executionPeriod);
}

std::string CreateElasticRuleRequest::getClusterId() const {
  return clusterId_;
}

void CreateElasticRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateElasticRuleRequest::getElasticRuleStartTime() const {
  return elasticRuleStartTime_;
}

void CreateElasticRuleRequest::setElasticRuleStartTime(const std::string &elasticRuleStartTime) {
  elasticRuleStartTime_ = elasticRuleStartTime;
  setParameter(std::string("ElasticRuleStartTime"), elasticRuleStartTime);
}

std::string CreateElasticRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateElasticRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateElasticRuleRequest::getClusterClass() const {
  return clusterClass_;
}

void CreateElasticRuleRequest::setClusterClass(const std::string &clusterClass) {
  clusterClass_ = clusterClass;
  setParameter(std::string("ClusterClass"), clusterClass);
}

std::string CreateElasticRuleRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void CreateElasticRuleRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

