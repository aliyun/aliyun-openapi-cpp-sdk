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

#include <alibabacloud/selectdb/model/EnDisableScalingRulesRequest.h>

using AlibabaCloud::Selectdb::Model::EnDisableScalingRulesRequest;

EnDisableScalingRulesRequest::EnDisableScalingRulesRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "EnDisableScalingRules") {
  setMethod(HttpRequest::Method::Post);
}

EnDisableScalingRulesRequest::~EnDisableScalingRulesRequest() {}

long EnDisableScalingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnDisableScalingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnDisableScalingRulesRequest::getProduct() const {
  return product_;
}

void EnDisableScalingRulesRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string EnDisableScalingRulesRequest::getClusterId() const {
  return clusterId_;
}

void EnDisableScalingRulesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string EnDisableScalingRulesRequest::getRegionId() const {
  return regionId_;
}

void EnDisableScalingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnDisableScalingRulesRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void EnDisableScalingRulesRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

bool EnDisableScalingRulesRequest::getScalingRulesEnable() const {
  return scalingRulesEnable_;
}

void EnDisableScalingRulesRequest::setScalingRulesEnable(bool scalingRulesEnable) {
  scalingRulesEnable_ = scalingRulesEnable;
  setParameter(std::string("ScalingRulesEnable"), scalingRulesEnable ? "true" : "false");
}

