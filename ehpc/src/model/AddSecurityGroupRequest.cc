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

#include <alibabacloud/ehpc/model/AddSecurityGroupRequest.h>

using AlibabaCloud::EHPC::Model::AddSecurityGroupRequest;

AddSecurityGroupRequest::AddSecurityGroupRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "AddSecurityGroup") {
  setMethod(HttpRequest::Method::Get);
}

AddSecurityGroupRequest::~AddSecurityGroupRequest() {}

std::string AddSecurityGroupRequest::getClientToken() const {
  return clientToken_;
}

void AddSecurityGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void AddSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string AddSecurityGroupRequest::getClusterId() const {
  return clusterId_;
}

void AddSecurityGroupRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string AddSecurityGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddSecurityGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

