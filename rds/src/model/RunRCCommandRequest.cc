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

#include <alibabacloud/rds/model/RunRCCommandRequest.h>

using AlibabaCloud::Rds::Model::RunRCCommandRequest;

RunRCCommandRequest::RunRCCommandRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RunRCCommand") {
  setMethod(HttpRequest::Method::Post);
}

RunRCCommandRequest::~RunRCCommandRequest() {}

std::vector<RunRCCommandRequest::ResourceTags> RunRCCommandRequest::getResourceTags() const {
  return resourceTags_;
}

void RunRCCommandRequest::setResourceTags(const std::vector<RunRCCommandRequest::ResourceTags> &resourceTags) {
  resourceTags_ = resourceTags;
  for(int dep1 = 0; dep1 != resourceTags.size(); dep1++) {
    setParameter(std::string("ResourceTags") + "." + std::to_string(dep1 + 1) + ".Value", resourceTags[dep1].value);
    setParameter(std::string("ResourceTags") + "." + std::to_string(dep1 + 1) + ".Key", resourceTags[dep1].key);
  }
}

std::string RunRCCommandRequest::getContainerName() const {
  return containerName_;
}

void RunRCCommandRequest::setContainerName(const std::string &containerName) {
  containerName_ = containerName;
  setParameter(std::string("ContainerName"), containerName);
}

std::string RunRCCommandRequest::getClientToken() const {
  return clientToken_;
}

void RunRCCommandRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RunRCCommandRequest::getWorkingDir() const {
  return workingDir_;
}

void RunRCCommandRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string RunRCCommandRequest::getDescription() const {
  return description_;
}

void RunRCCommandRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string RunRCCommandRequest::getType() const {
  return type_;
}

void RunRCCommandRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string RunRCCommandRequest::getCommandContent() const {
  return commandContent_;
}

void RunRCCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

long RunRCCommandRequest::getTimeout() const {
  return timeout_;
}

void RunRCCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string RunRCCommandRequest::getFrequency() const {
  return frequency_;
}

void RunRCCommandRequest::setFrequency(const std::string &frequency) {
  frequency_ = frequency;
  setParameter(std::string("Frequency"), frequency);
}

std::string RunRCCommandRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void RunRCCommandRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string RunRCCommandRequest::getRegionId() const {
  return regionId_;
}

void RunRCCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunRCCommandRequest::getContentEncoding() const {
  return contentEncoding_;
}

void RunRCCommandRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::string RunRCCommandRequest::getRepeatMode() const {
  return repeatMode_;
}

void RunRCCommandRequest::setRepeatMode(const std::string &repeatMode) {
  repeatMode_ = repeatMode;
  setParameter(std::string("RepeatMode"), repeatMode);
}

std::string RunRCCommandRequest::getWindowsPasswordName() const {
  return windowsPasswordName_;
}

void RunRCCommandRequest::setWindowsPasswordName(const std::string &windowsPasswordName) {
  windowsPasswordName_ = windowsPasswordName;
  setParameter(std::string("WindowsPasswordName"), windowsPasswordName);
}

bool RunRCCommandRequest::getKeepCommand() const {
  return keepCommand_;
}

void RunRCCommandRequest::setKeepCommand(bool keepCommand) {
  keepCommand_ = keepCommand;
  setParameter(std::string("KeepCommand"), keepCommand ? "true" : "false");
}

std::vector<RunRCCommandRequest::Tags> RunRCCommandRequest::getTags() const {
  return tags_;
}

void RunRCCommandRequest::setTags(const std::vector<RunRCCommandRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string RunRCCommandRequest::getTerminationMode() const {
  return terminationMode_;
}

void RunRCCommandRequest::setTerminationMode(const std::string &terminationMode) {
  terminationMode_ = terminationMode;
  setParameter(std::string("TerminationMode"), terminationMode);
}

std::vector<RunRCCommandRequest::std::string> RunRCCommandRequest::getInstanceIds() const {
  return instanceIds_;
}

void RunRCCommandRequest::setInstanceIds(const std::vector<RunRCCommandRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string RunRCCommandRequest::getName() const {
  return name_;
}

void RunRCCommandRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string RunRCCommandRequest::getContainerId() const {
  return containerId_;
}

void RunRCCommandRequest::setContainerId(const std::string &containerId) {
  containerId_ = containerId;
  setParameter(std::string("ContainerId"), containerId);
}

std::map<std::string, std::string> RunRCCommandRequest::getParameters() const {
  return parameters_;
}

void RunRCCommandRequest::setParameters(const std::map<std::string, std::string> &parameters) {
  parameters_ = parameters;
  for(auto const &iter1 : parameters) {
    setParameter(std::string("Parameters") + "." + iter1.first, iter1.second);
  }
}

bool RunRCCommandRequest::getEnableParameter() const {
  return enableParameter_;
}

void RunRCCommandRequest::setEnableParameter(bool enableParameter) {
  enableParameter_ = enableParameter;
  setParameter(std::string("EnableParameter"), enableParameter ? "true" : "false");
}

std::string RunRCCommandRequest::getUsername() const {
  return username_;
}

void RunRCCommandRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

std::string RunRCCommandRequest::getLauncher() const {
  return launcher_;
}

void RunRCCommandRequest::setLauncher(const std::string &launcher) {
  launcher_ = launcher;
  setParameter(std::string("Launcher"), launcher);
}

