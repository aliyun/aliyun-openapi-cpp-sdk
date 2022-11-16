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

#include <alibabacloud/cloudapi/model/DescribeUpdateVpcInfoTaskRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeUpdateVpcInfoTaskRequest;

DescribeUpdateVpcInfoTaskRequest::DescribeUpdateVpcInfoTaskRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeUpdateVpcInfoTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUpdateVpcInfoTaskRequest::~DescribeUpdateVpcInfoTaskRequest() {}

std::string DescribeUpdateVpcInfoTaskRequest::getOperationUid() const {
  return operationUid_;
}

void DescribeUpdateVpcInfoTaskRequest::setOperationUid(const std::string &operationUid) {
  operationUid_ = operationUid;
  setParameter(std::string("OperationUid"), operationUid);
}

std::string DescribeUpdateVpcInfoTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeUpdateVpcInfoTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeUpdateVpcInfoTaskRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeUpdateVpcInfoTaskRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

