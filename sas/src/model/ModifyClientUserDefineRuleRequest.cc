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

#include <alibabacloud/sas/model/ModifyClientUserDefineRuleRequest.h>

using AlibabaCloud::Sas::Model::ModifyClientUserDefineRuleRequest;

ModifyClientUserDefineRuleRequest::ModifyClientUserDefineRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyClientUserDefineRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyClientUserDefineRuleRequest::~ModifyClientUserDefineRuleRequest() {}

int ModifyClientUserDefineRuleRequest::getActionType() const {
  return actionType_;
}

void ModifyClientUserDefineRuleRequest::setActionType(int actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), std::to_string(actionType));
}

std::string ModifyClientUserDefineRuleRequest::getNewFilePath() const {
  return newFilePath_;
}

void ModifyClientUserDefineRuleRequest::setNewFilePath(const std::string &newFilePath) {
  newFilePath_ = newFilePath;
  setParameter(std::string("NewFilePath"), newFilePath);
}

int ModifyClientUserDefineRuleRequest::getType() const {
  return type_;
}

void ModifyClientUserDefineRuleRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string ModifyClientUserDefineRuleRequest::getPlatform() const {
  return platform_;
}

void ModifyClientUserDefineRuleRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string ModifyClientUserDefineRuleRequest::getRegistryKey() const {
  return registryKey_;
}

void ModifyClientUserDefineRuleRequest::setRegistryKey(const std::string &registryKey) {
  registryKey_ = registryKey;
  setParameter(std::string("RegistryKey"), registryKey);
}

std::string ModifyClientUserDefineRuleRequest::getCmdline() const {
  return cmdline_;
}

void ModifyClientUserDefineRuleRequest::setCmdline(const std::string &cmdline) {
  cmdline_ = cmdline;
  setParameter(std::string("Cmdline"), cmdline);
}

std::string ModifyClientUserDefineRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyClientUserDefineRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyClientUserDefineRuleRequest::getFilePath() const {
  return filePath_;
}

void ModifyClientUserDefineRuleRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("FilePath"), filePath);
}

std::string ModifyClientUserDefineRuleRequest::getMd5List() const {
  return md5List_;
}

void ModifyClientUserDefineRuleRequest::setMd5List(const std::string &md5List) {
  md5List_ = md5List;
  setParameter(std::string("Md5List"), md5List);
}

std::string ModifyClientUserDefineRuleRequest::getParentProcPath() const {
  return parentProcPath_;
}

void ModifyClientUserDefineRuleRequest::setParentProcPath(const std::string &parentProcPath) {
  parentProcPath_ = parentProcPath;
  setParameter(std::string("ParentProcPath"), parentProcPath);
}

long ModifyClientUserDefineRuleRequest::getId() const {
  return id_;
}

void ModifyClientUserDefineRuleRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string ModifyClientUserDefineRuleRequest::getProcPath() const {
  return procPath_;
}

void ModifyClientUserDefineRuleRequest::setProcPath(const std::string &procPath) {
  procPath_ = procPath;
  setParameter(std::string("ProcPath"), procPath);
}

std::string ModifyClientUserDefineRuleRequest::getParentCmdline() const {
  return parentCmdline_;
}

void ModifyClientUserDefineRuleRequest::setParentCmdline(const std::string &parentCmdline) {
  parentCmdline_ = parentCmdline;
  setParameter(std::string("ParentCmdline"), parentCmdline);
}

std::string ModifyClientUserDefineRuleRequest::getIP() const {
  return iP_;
}

void ModifyClientUserDefineRuleRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

std::string ModifyClientUserDefineRuleRequest::getRegistryContent() const {
  return registryContent_;
}

void ModifyClientUserDefineRuleRequest::setRegistryContent(const std::string &registryContent) {
  registryContent_ = registryContent;
  setParameter(std::string("RegistryContent"), registryContent);
}

std::string ModifyClientUserDefineRuleRequest::getPortStr() const {
  return portStr_;
}

void ModifyClientUserDefineRuleRequest::setPortStr(const std::string &portStr) {
  portStr_ = portStr;
  setParameter(std::string("PortStr"), portStr);
}

int ModifyClientUserDefineRuleRequest::getPort() const {
  return port_;
}

void ModifyClientUserDefineRuleRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string ModifyClientUserDefineRuleRequest::getName() const {
  return name_;
}

void ModifyClientUserDefineRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

