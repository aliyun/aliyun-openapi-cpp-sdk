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

#include <alibabacloud/cloudapi/model/ModifyIntranetDomainPolicyRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyIntranetDomainPolicyRequest;

ModifyIntranetDomainPolicyRequest::ModifyIntranetDomainPolicyRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyIntranetDomainPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyIntranetDomainPolicyRequest::~ModifyIntranetDomainPolicyRequest() {}

std::string ModifyIntranetDomainPolicyRequest::getGroupId() const {
  return groupId_;
}

void ModifyIntranetDomainPolicyRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

bool ModifyIntranetDomainPolicyRequest::getVpcIntranetEnable() const {
  return vpcIntranetEnable_;
}

void ModifyIntranetDomainPolicyRequest::setVpcIntranetEnable(bool vpcIntranetEnable) {
  vpcIntranetEnable_ = vpcIntranetEnable;
  setParameter(std::string("VpcIntranetEnable"), vpcIntranetEnable ? "true" : "false");
}

std::string ModifyIntranetDomainPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyIntranetDomainPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyIntranetDomainPolicyRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyIntranetDomainPolicyRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

