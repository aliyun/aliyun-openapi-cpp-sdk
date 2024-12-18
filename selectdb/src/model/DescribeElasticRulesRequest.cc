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

#include <alibabacloud/selectdb/model/DescribeElasticRulesRequest.h>

using AlibabaCloud::Selectdb::Model::DescribeElasticRulesRequest;

DescribeElasticRulesRequest::DescribeElasticRulesRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "DescribeElasticRules") {
  setMethod(HttpRequest::Method::Get);
}

DescribeElasticRulesRequest::~DescribeElasticRulesRequest() {}

long DescribeElasticRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeElasticRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeElasticRulesRequest::getProduct() const {
  return product_;
}

void DescribeElasticRulesRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeElasticRulesRequest::getClusterId() const {
  return clusterId_;
}

void DescribeElasticRulesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeElasticRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeElasticRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeElasticRulesRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void DescribeElasticRulesRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

