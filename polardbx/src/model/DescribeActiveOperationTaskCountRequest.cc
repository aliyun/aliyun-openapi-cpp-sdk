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

#include <alibabacloud/polardbx/model/DescribeActiveOperationTaskCountRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeActiveOperationTaskCountRequest;

DescribeActiveOperationTaskCountRequest::DescribeActiveOperationTaskCountRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeActiveOperationTaskCount") {
  setMethod(HttpRequest::Method::Get);
}

DescribeActiveOperationTaskCountRequest::~DescribeActiveOperationTaskCountRequest() {}

std::string DescribeActiveOperationTaskCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeActiveOperationTaskCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeActiveOperationTaskCountRequest::getProduct() const {
  return product_;
}

void DescribeActiveOperationTaskCountRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeActiveOperationTaskCountRequest::getCategory() const {
  return category_;
}

void DescribeActiveOperationTaskCountRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

