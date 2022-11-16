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

#include <alibabacloud/cloudapi/model/DryRunSwaggerRequest.h>

using AlibabaCloud::CloudAPI::Model::DryRunSwaggerRequest;

DryRunSwaggerRequest::DryRunSwaggerRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DryRunSwagger") {
  setMethod(HttpRequest::Method::Post);
}

DryRunSwaggerRequest::~DryRunSwaggerRequest() {}

std::string DryRunSwaggerRequest::getDataFormat() const {
  return dataFormat_;
}

void DryRunSwaggerRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setParameter(std::string("DataFormat"), dataFormat);
}

std::string DryRunSwaggerRequest::getData() const {
  return data_;
}

void DryRunSwaggerRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

std::string DryRunSwaggerRequest::getGroupId() const {
  return groupId_;
}

void DryRunSwaggerRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DryRunSwaggerRequest::getGlobalCondition() const {
  return globalCondition_;
}

void DryRunSwaggerRequest::setGlobalCondition(const std::string &globalCondition) {
  globalCondition_ = globalCondition;
  setParameter(std::string("GlobalCondition"), globalCondition);
}

std::string DryRunSwaggerRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DryRunSwaggerRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DryRunSwaggerRequest::getSecurityToken() const {
  return securityToken_;
}

void DryRunSwaggerRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool DryRunSwaggerRequest::getOverwrite() const {
  return overwrite_;
}

void DryRunSwaggerRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

