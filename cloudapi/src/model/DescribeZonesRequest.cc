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

#include <alibabacloud/cloudapi/model/DescribeZonesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeZones") {
  setMethod(HttpRequest::Method::Post);
}

DescribeZonesRequest::~DescribeZonesRequest() {}

std::string DescribeZonesRequest::getLanguage() const {
  return language_;
}

void DescribeZonesRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string DescribeZonesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeZonesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeZonesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeZonesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

