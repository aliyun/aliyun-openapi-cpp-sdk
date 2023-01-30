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

#include <alibabacloud/cloudapi/model/DescribeImportOASTaskRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeImportOASTaskRequest;

DescribeImportOASTaskRequest::DescribeImportOASTaskRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeImportOASTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImportOASTaskRequest::~DescribeImportOASTaskRequest() {}

std::string DescribeImportOASTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeImportOASTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeImportOASTaskRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeImportOASTaskRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeImportOASTaskRequest::getOperationId() const {
  return operationId_;
}

void DescribeImportOASTaskRequest::setOperationId(const std::string &operationId) {
  operationId_ = operationId;
  setParameter(std::string("OperationId"), operationId);
}

