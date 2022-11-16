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

#include <alibabacloud/cloudapi/model/DescribeBackendInfoRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeBackendInfoRequest;

DescribeBackendInfoRequest::DescribeBackendInfoRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeBackendInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackendInfoRequest::~DescribeBackendInfoRequest() {}

std::string DescribeBackendInfoRequest::getBackendId() const {
  return backendId_;
}

void DescribeBackendInfoRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

std::string DescribeBackendInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackendInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackendInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeBackendInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

