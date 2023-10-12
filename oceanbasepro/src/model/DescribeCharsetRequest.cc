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

#include <alibabacloud/oceanbasepro/model/DescribeCharsetRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeCharsetRequest;

DescribeCharsetRequest::DescribeCharsetRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeCharset") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCharsetRequest::~DescribeCharsetRequest() {}

std::string DescribeCharsetRequest::getTenantMode() const {
  return tenantMode_;
}

void DescribeCharsetRequest::setTenantMode(const std::string &tenantMode) {
  tenantMode_ = tenantMode;
  setBodyParameter(std::string("TenantMode"), tenantMode);
}

std::string DescribeCharsetRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCharsetRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeCharsetRequest::getSeries() const {
  return series_;
}

void DescribeCharsetRequest::setSeries(const std::string &series) {
  series_ = series;
  setBodyParameter(std::string("Series"), series);
}

