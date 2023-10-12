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

#include <alibabacloud/oceanbasepro/model/DescribeTenantTagsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTenantTagsRequest;

DescribeTenantTagsRequest::DescribeTenantTagsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTenantTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTenantTagsRequest::~DescribeTenantTagsRequest() {}

std::string DescribeTenantTagsRequest::getTags() const {
  return tags_;
}

void DescribeTenantTagsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setBodyParameter(std::string("Tags"), tags);
}

std::string DescribeTenantTagsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTenantTagsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeTenantTagsRequest::getTenantIds() const {
  return tenantIds_;
}

void DescribeTenantTagsRequest::setTenantIds(const std::string &tenantIds) {
  tenantIds_ = tenantIds;
  setBodyParameter(std::string("TenantIds"), tenantIds);
}

