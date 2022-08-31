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

#include <alibabacloud/rds/model/DescribeGadInstancesRequest.h>

using AlibabaCloud::Rds::Model::DescribeGadInstancesRequest;

DescribeGadInstancesRequest::DescribeGadInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeGadInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGadInstancesRequest::~DescribeGadInstancesRequest() {}

std::string DescribeGadInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGadInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGadInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeGadInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeGadInstancesRequest::getGadInstanceName() const {
  return gadInstanceName_;
}

void DescribeGadInstancesRequest::setGadInstanceName(const std::string &gadInstanceName) {
  gadInstanceName_ = gadInstanceName;
  setParameter(std::string("GadInstanceName"), gadInstanceName);
}

