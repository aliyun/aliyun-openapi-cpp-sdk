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

#include <alibabacloud/sophonsoar/model/RunPython3ScriptRequest.h>

using AlibabaCloud::Sophonsoar::Model::RunPython3ScriptRequest;

RunPython3ScriptRequest::RunPython3ScriptRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "RunPython3Script") {
  setMethod(HttpRequest::Method::Post);
}

RunPython3ScriptRequest::~RunPython3ScriptRequest() {}

std::string RunPython3ScriptRequest::getRoleFor() const {
  return roleFor_;
}

void RunPython3ScriptRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string RunPython3ScriptRequest::getParams() const {
  return params_;
}

void RunPython3ScriptRequest::setParams(const std::string &params) {
  params_ = params;
  setBodyParameter(std::string("Params"), params);
}

std::string RunPython3ScriptRequest::getNodeName() const {
  return nodeName_;
}

void RunPython3ScriptRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setBodyParameter(std::string("NodeName"), nodeName);
}

std::string RunPython3ScriptRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void RunPython3ScriptRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string RunPython3ScriptRequest::getRoleType() const {
  return roleType_;
}

void RunPython3ScriptRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string RunPython3ScriptRequest::getLang() const {
  return lang_;
}

void RunPython3ScriptRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string RunPython3ScriptRequest::getPythonScript() const {
  return pythonScript_;
}

void RunPython3ScriptRequest::setPythonScript(const std::string &pythonScript) {
  pythonScript_ = pythonScript;
  setBodyParameter(std::string("PythonScript"), pythonScript);
}

