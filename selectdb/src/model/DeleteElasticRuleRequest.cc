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

#include <alibabacloud/selectdb/model/DeleteElasticRuleRequest.h>

using AlibabaCloud::Selectdb::Model::DeleteElasticRuleRequest;

DeleteElasticRuleRequest::DeleteElasticRuleRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "DeleteElasticRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteElasticRuleRequest::~DeleteElasticRuleRequest() {}

long DeleteElasticRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteElasticRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteElasticRuleRequest::getProduct() const {
  return product_;
}

void DeleteElasticRuleRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DeleteElasticRuleRequest::getClusterId() const {
  return clusterId_;
}

void DeleteElasticRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DeleteElasticRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteElasticRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteElasticRuleRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void DeleteElasticRuleRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

long DeleteElasticRuleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteElasticRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

