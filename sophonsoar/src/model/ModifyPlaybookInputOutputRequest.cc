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

#include <alibabacloud/sophonsoar/model/ModifyPlaybookInputOutputRequest.h>

using AlibabaCloud::Sophonsoar::Model::ModifyPlaybookInputOutputRequest;

ModifyPlaybookInputOutputRequest::ModifyPlaybookInputOutputRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "ModifyPlaybookInputOutput") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPlaybookInputOutputRequest::~ModifyPlaybookInputOutputRequest() {}

std::string ModifyPlaybookInputOutputRequest::getParamType() const {
  return paramType_;
}

void ModifyPlaybookInputOutputRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setBodyParameter(std::string("ParamType"), paramType);
}

std::string ModifyPlaybookInputOutputRequest::getRoleFor() const {
  return roleFor_;
}

void ModifyPlaybookInputOutputRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string ModifyPlaybookInputOutputRequest::getInputParams() const {
  return inputParams_;
}

void ModifyPlaybookInputOutputRequest::setInputParams(const std::string &inputParams) {
  inputParams_ = inputParams;
  setBodyParameter(std::string("InputParams"), inputParams);
}

std::string ModifyPlaybookInputOutputRequest::getOutputParams() const {
  return outputParams_;
}

void ModifyPlaybookInputOutputRequest::setOutputParams(const std::string &outputParams) {
  outputParams_ = outputParams;
  setBodyParameter(std::string("OutputParams"), outputParams);
}

std::string ModifyPlaybookInputOutputRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void ModifyPlaybookInputOutputRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string ModifyPlaybookInputOutputRequest::getExeConfig() const {
  return exeConfig_;
}

void ModifyPlaybookInputOutputRequest::setExeConfig(const std::string &exeConfig) {
  exeConfig_ = exeConfig;
  setBodyParameter(std::string("ExeConfig"), exeConfig);
}

std::string ModifyPlaybookInputOutputRequest::getRoleType() const {
  return roleType_;
}

void ModifyPlaybookInputOutputRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string ModifyPlaybookInputOutputRequest::getLang() const {
  return lang_;
}

void ModifyPlaybookInputOutputRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}

