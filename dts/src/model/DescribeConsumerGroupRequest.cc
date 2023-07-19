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

#include <alibabacloud/dts/model/DescribeConsumerGroupRequest.h>

using AlibabaCloud::Dts::Model::DescribeConsumerGroupRequest;

DescribeConsumerGroupRequest::DescribeConsumerGroupRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeConsumerGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeConsumerGroupRequest::~DescribeConsumerGroupRequest() {}

std::string DescribeConsumerGroupRequest::getSubscriptionInstanceId() const {
  return subscriptionInstanceId_;
}

void DescribeConsumerGroupRequest::setSubscriptionInstanceId(const std::string &subscriptionInstanceId) {
  subscriptionInstanceId_ = subscriptionInstanceId;
  setParameter(std::string("SubscriptionInstanceId"), subscriptionInstanceId);
}

int DescribeConsumerGroupRequest::getPageNum() const {
  return pageNum_;
}

void DescribeConsumerGroupRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeConsumerGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeConsumerGroupRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeConsumerGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeConsumerGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeConsumerGroupRequest::getAccountId() const {
  return accountId_;
}

void DescribeConsumerGroupRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DescribeConsumerGroupRequest::getRegionId() const {
  return regionId_;
}

void DescribeConsumerGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeConsumerGroupRequest::getPageSize() const {
  return pageSize_;
}

void DescribeConsumerGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

