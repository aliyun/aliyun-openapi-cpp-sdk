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

#include <alibabacloud/cloudapi/model/DescribeApiMarketAttributesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiMarketAttributesRequest;

DescribeApiMarketAttributesRequest::DescribeApiMarketAttributesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiMarketAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApiMarketAttributesRequest::~DescribeApiMarketAttributesRequest() {}

std::string DescribeApiMarketAttributesRequest::getGroupId() const {
  return groupId_;
}

void DescribeApiMarketAttributesRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeApiMarketAttributesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApiMarketAttributesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApiMarketAttributesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApiMarketAttributesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeApiMarketAttributesRequest::getApiId() const {
  return apiId_;
}

void DescribeApiMarketAttributesRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

