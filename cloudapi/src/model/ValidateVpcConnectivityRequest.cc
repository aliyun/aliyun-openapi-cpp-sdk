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

#include <alibabacloud/cloudapi/model/ValidateVpcConnectivityRequest.h>

using AlibabaCloud::CloudAPI::Model::ValidateVpcConnectivityRequest;

ValidateVpcConnectivityRequest::ValidateVpcConnectivityRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ValidateVpcConnectivity") {
  setMethod(HttpRequest::Method::Post);
}

ValidateVpcConnectivityRequest::~ValidateVpcConnectivityRequest() {}

std::string ValidateVpcConnectivityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ValidateVpcConnectivityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ValidateVpcConnectivityRequest::getInstanceId() const {
  return instanceId_;
}

void ValidateVpcConnectivityRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ValidateVpcConnectivityRequest::getSecurityToken() const {
  return securityToken_;
}

void ValidateVpcConnectivityRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ValidateVpcConnectivityRequest::getVpcAccessId() const {
  return vpcAccessId_;
}

void ValidateVpcConnectivityRequest::setVpcAccessId(const std::string &vpcAccessId) {
  vpcAccessId_ = vpcAccessId;
  setParameter(std::string("VpcAccessId"), vpcAccessId);
}

