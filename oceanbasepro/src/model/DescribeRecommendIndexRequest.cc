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

#include <alibabacloud/oceanbasepro/model/DescribeRecommendIndexRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeRecommendIndexRequest;

DescribeRecommendIndexRequest::DescribeRecommendIndexRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeRecommendIndex") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecommendIndexRequest::~DescribeRecommendIndexRequest() {}

std::string DescribeRecommendIndexRequest::getSQLId() const {
  return sQLId_;
}

void DescribeRecommendIndexRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeRecommendIndexRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRecommendIndexRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRecommendIndexRequest::getTenantId() const {
  return tenantId_;
}

void DescribeRecommendIndexRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

