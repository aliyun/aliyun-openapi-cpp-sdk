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

#include <alibabacloud/sas/model/AddClientUserDefineRuleRequest.h>

using AlibabaCloud::Sas::Model::AddClientUserDefineRuleRequest;

AddClientUserDefineRuleRequest::AddClientUserDefineRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddClientUserDefineRule") {
  setMethod(HttpRequest::Method::Post);
}

AddClientUserDefineRuleRequest::~AddClientUserDefineRuleRequest() {}

int AddClientUserDefineRuleRequest::getActionType() const {
  return actionType_;
}

void AddClientUserDefineRuleRequest::setActionType(int actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), std::to_string(actionType));
}

std::string AddClientUserDefineRuleRequest::getNewFilePath() const {
  return newFilePath_;
}

void AddClientUserDefineRuleRequest::setNewFilePath(const std::string &newFilePath) {
  newFilePath_ = newFilePath;
  setParameter(std::string("NewFilePath"), newFilePath);
}

int AddClientUserDefineRuleRequest::getType() const {
  return type_;
}

void AddClientUserDefineRuleRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string AddClientUserDefineRuleRequest::getPlatform() const {
  return platform_;
}

void AddClientUserDefineRuleRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string AddClientUserDefineRuleRequest::getRegistryKey() const {
  return registryKey_;
}

void AddClientUserDefineRuleRequest::setRegistryKey(const std::string &registryKey) {
  registryKey_ = registryKey;
  setParameter(std::string("RegistryKey"), registryKey);
}

std::string AddClientUserDefineRuleRequest::getCmdline() const {
  return cmdline_;
}

void AddClientUserDefineRuleRequest::setCmdline(const std::string &cmdline) {
  cmdline_ = cmdline;
  setParameter(std::string("Cmdline"), cmdline);
}

std::string AddClientUserDefineRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void AddClientUserDefineRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AddClientUserDefineRuleRequest::getFilePath() const {
  return filePath_;
}

void AddClientUserDefineRuleRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("FilePath"), filePath);
}

std::string AddClientUserDefineRuleRequest::getMd5List() const {
  return md5List_;
}

void AddClientUserDefineRuleRequest::setMd5List(const std::string &md5List) {
  md5List_ = md5List;
  setParameter(std::string("Md5List"), md5List);
}

std::string AddClientUserDefineRuleRequest::getParentProcPath() const {
  return parentProcPath_;
}

void AddClientUserDefineRuleRequest::setParentProcPath(const std::string &parentProcPath) {
  parentProcPath_ = parentProcPath;
  setParameter(std::string("ParentProcPath"), parentProcPath);
}

std::string AddClientUserDefineRuleRequest::getProcPath() const {
  return procPath_;
}

void AddClientUserDefineRuleRequest::setProcPath(const std::string &procPath) {
  procPath_ = procPath;
  setParameter(std::string("ProcPath"), procPath);
}

std::string AddClientUserDefineRuleRequest::getParentCmdline() const {
  return parentCmdline_;
}

void AddClientUserDefineRuleRequest::setParentCmdline(const std::string &parentCmdline) {
  parentCmdline_ = parentCmdline;
  setParameter(std::string("ParentCmdline"), parentCmdline);
}

std::string AddClientUserDefineRuleRequest::getIP() const {
  return iP_;
}

void AddClientUserDefineRuleRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

std::string AddClientUserDefineRuleRequest::getRegistryContent() const {
  return registryContent_;
}

void AddClientUserDefineRuleRequest::setRegistryContent(const std::string &registryContent) {
  registryContent_ = registryContent;
  setParameter(std::string("RegistryContent"), registryContent);
}

std::string AddClientUserDefineRuleRequest::getPortStr() const {
  return portStr_;
}

void AddClientUserDefineRuleRequest::setPortStr(const std::string &portStr) {
  portStr_ = portStr;
  setParameter(std::string("PortStr"), portStr);
}

int AddClientUserDefineRuleRequest::getPort() const {
  return port_;
}

void AddClientUserDefineRuleRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string AddClientUserDefineRuleRequest::getName() const {
  return name_;
}

void AddClientUserDefineRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

