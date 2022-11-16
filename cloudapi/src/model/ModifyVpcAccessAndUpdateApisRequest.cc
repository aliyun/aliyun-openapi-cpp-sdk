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

#include <alibabacloud/cloudapi/model/ModifyVpcAccessAndUpdateApisRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyVpcAccessAndUpdateApisRequest;

ModifyVpcAccessAndUpdateApisRequest::ModifyVpcAccessAndUpdateApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyVpcAccessAndUpdateApis") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpcAccessAndUpdateApisRequest::~ModifyVpcAccessAndUpdateApisRequest() {}

bool ModifyVpcAccessAndUpdateApisRequest::getRefresh() const {
  return refresh_;
}

void ModifyVpcAccessAndUpdateApisRequest::setRefresh(bool refresh) {
  refresh_ = refresh;
  setParameter(std::string("Refresh"), refresh ? "true" : "false");
}

std::string ModifyVpcAccessAndUpdateApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyVpcAccessAndUpdateApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyVpcAccessAndUpdateApisRequest::getToken() const {
  return token_;
}

void ModifyVpcAccessAndUpdateApisRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string ModifyVpcAccessAndUpdateApisRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyVpcAccessAndUpdateApisRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool ModifyVpcAccessAndUpdateApisRequest::getNeedBatchWork() const {
  return needBatchWork_;
}

void ModifyVpcAccessAndUpdateApisRequest::setNeedBatchWork(bool needBatchWork) {
  needBatchWork_ = needBatchWork;
  setParameter(std::string("NeedBatchWork"), needBatchWork ? "true" : "false");
}

std::string ModifyVpcAccessAndUpdateApisRequest::getVpcTargetHostName() const {
  return vpcTargetHostName_;
}

void ModifyVpcAccessAndUpdateApisRequest::setVpcTargetHostName(const std::string &vpcTargetHostName) {
  vpcTargetHostName_ = vpcTargetHostName;
  setParameter(std::string("VpcTargetHostName"), vpcTargetHostName);
}

std::string ModifyVpcAccessAndUpdateApisRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyVpcAccessAndUpdateApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int ModifyVpcAccessAndUpdateApisRequest::getPort() const {
  return port_;
}

void ModifyVpcAccessAndUpdateApisRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string ModifyVpcAccessAndUpdateApisRequest::getVpcId() const {
  return vpcId_;
}

void ModifyVpcAccessAndUpdateApisRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ModifyVpcAccessAndUpdateApisRequest::getName() const {
  return name_;
}

void ModifyVpcAccessAndUpdateApisRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

