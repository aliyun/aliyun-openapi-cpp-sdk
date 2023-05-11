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

#include <alibabacloud/alidns/model/DescribeTagsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagsRequest::~DescribeTagsRequest() {}

std::string DescribeTagsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

long DescribeTagsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTagsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTagsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeTagsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeTagsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTagsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTagsRequest::getLang() const {
  return lang_;
}

void DescribeTagsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

