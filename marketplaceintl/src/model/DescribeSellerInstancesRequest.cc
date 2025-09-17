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

#include <alibabacloud/marketplaceintl/model/DescribeSellerInstancesRequest.h>

using AlibabaCloud::MarketplaceIntl::Model::DescribeSellerInstancesRequest;

DescribeSellerInstancesRequest::DescribeSellerInstancesRequest()
    : RpcServiceRequest("marketplaceintl", "2022-12-30", "DescribeSellerInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSellerInstancesRequest::~DescribeSellerInstancesRequest() {}

std::string DescribeSellerInstancesRequest::getInstanceStatus() const {
  return instanceStatus_;
}

void DescribeSellerInstancesRequest::setInstanceStatus(const std::string &instanceStatus) {
  instanceStatus_ = instanceStatus;
  setParameter(std::string("InstanceStatus"), instanceStatus);
}

long DescribeSellerInstancesRequest::getUserId() const {
  return userId_;
}

void DescribeSellerInstancesRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

long DescribeSellerInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSellerInstancesRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

long DescribeSellerInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSellerInstancesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeSellerInstancesRequest::getPageIndex() const {
  return pageIndex_;
}

void DescribeSellerInstancesRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

