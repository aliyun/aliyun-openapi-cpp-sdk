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

#include <alibabacloud/alidns/model/DescribeGtmInstancesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmInstancesRequest;

DescribeGtmInstancesRequest::DescribeGtmInstancesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGtmInstancesRequest::~DescribeGtmInstancesRequest() {}

int DescribeGtmInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGtmInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGtmInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGtmInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGtmInstancesRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeGtmInstancesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeGtmInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGtmInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGtmInstancesRequest::getLang() const {
  return lang_;
}

void DescribeGtmInstancesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeGtmInstancesRequest::getKeyword() const {
  return keyword_;
}

void DescribeGtmInstancesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

bool DescribeGtmInstancesRequest::getNeedDetailAttributes() const {
  return needDetailAttributes_;
}

void DescribeGtmInstancesRequest::setNeedDetailAttributes(bool needDetailAttributes) {
  needDetailAttributes_ = needDetailAttributes;
  setParameter(std::string("NeedDetailAttributes"), needDetailAttributes ? "true" : "false");
}

