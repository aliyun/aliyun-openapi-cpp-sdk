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

#include <alibabacloud/dcdn/model/DescribeUserDcdnIpaStatusRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeUserDcdnIpaStatusRequest;

DescribeUserDcdnIpaStatusRequest::DescribeUserDcdnIpaStatusRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeUserDcdnIpaStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserDcdnIpaStatusRequest::~DescribeUserDcdnIpaStatusRequest() {}

long DescribeUserDcdnIpaStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUserDcdnIpaStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeUserDcdnIpaStatusRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeUserDcdnIpaStatusRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

