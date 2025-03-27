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

#include <alibabacloud/dataworks-public/model/CreateFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateFileRequest;

CreateFileRequest::CreateFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileRequest::~CreateFileRequest() {}

int CreateFileRequest::getFileType() const {
  return fileType_;
}

void CreateFileRequest::setFileType(int fileType) {
  fileType_ = fileType;
  setBodyParameter(std::string("FileType"), std::to_string(fileType));
}

std::string CreateFileRequest::getImageId() const {
  return imageId_;
}

void CreateFileRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setBodyParameter(std::string("ImageId"), imageId);
}

std::string CreateFileRequest::getDependentNodeIdList() const {
  return dependentNodeIdList_;
}

void CreateFileRequest::setDependentNodeIdList(const std::string &dependentNodeIdList) {
  dependentNodeIdList_ = dependentNodeIdList;
  setBodyParameter(std::string("DependentNodeIdList"), dependentNodeIdList);
}

std::string CreateFileRequest::getContent() const {
  return content_;
}

void CreateFileRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string CreateFileRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void CreateFileRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int CreateFileRequest::getTimeout() const {
  return timeout_;
}

void CreateFileRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setBodyParameter(std::string("Timeout"), std::to_string(timeout));
}

long CreateFileRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateFileRequest::setResourceGroupId(long resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), std::to_string(resourceGroupId));
}

bool CreateFileRequest::getStartImmediately() const {
  return startImmediately_;
}

void CreateFileRequest::setStartImmediately(bool startImmediately) {
  startImmediately_ = startImmediately;
  setBodyParameter(std::string("StartImmediately"), startImmediately ? "true" : "false");
}

long CreateFileRequest::getProjectId() const {
  return projectId_;
}

void CreateFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateFileRequest::getAdvancedSettings() const {
  return advancedSettings_;
}

void CreateFileRequest::setAdvancedSettings(const std::string &advancedSettings) {
  advancedSettings_ = advancedSettings;
  setBodyParameter(std::string("AdvancedSettings"), advancedSettings);
}

long CreateFileRequest::getStartEffectDate() const {
  return startEffectDate_;
}

void CreateFileRequest::setStartEffectDate(long startEffectDate) {
  startEffectDate_ = startEffectDate;
  setBodyParameter(std::string("StartEffectDate"), std::to_string(startEffectDate));
}

std::string CreateFileRequest::getCycleType() const {
  return cycleType_;
}

void CreateFileRequest::setCycleType(const std::string &cycleType) {
  cycleType_ = cycleType;
  setBodyParameter(std::string("CycleType"), cycleType);
}

std::string CreateFileRequest::getOwner() const {
  return owner_;
}

void CreateFileRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

int CreateFileRequest::getAutoRerunIntervalMillis() const {
  return autoRerunIntervalMillis_;
}

void CreateFileRequest::setAutoRerunIntervalMillis(int autoRerunIntervalMillis) {
  autoRerunIntervalMillis_ = autoRerunIntervalMillis;
  setBodyParameter(std::string("AutoRerunIntervalMillis"), std::to_string(autoRerunIntervalMillis));
}

std::string CreateFileRequest::getInputList() const {
  return inputList_;
}

void CreateFileRequest::setInputList(const std::string &inputList) {
  inputList_ = inputList;
  setBodyParameter(std::string("InputList"), inputList);
}

bool CreateFileRequest::getCreateFolderIfNotExists() const {
  return createFolderIfNotExists_;
}

void CreateFileRequest::setCreateFolderIfNotExists(bool createFolderIfNotExists) {
  createFolderIfNotExists_ = createFolderIfNotExists;
  setBodyParameter(std::string("CreateFolderIfNotExists"), createFolderIfNotExists ? "true" : "false");
}

bool CreateFileRequest::getApplyScheduleImmediately() const {
  return applyScheduleImmediately_;
}

void CreateFileRequest::setApplyScheduleImmediately(bool applyScheduleImmediately) {
  applyScheduleImmediately_ = applyScheduleImmediately;
  setBodyParameter(std::string("ApplyScheduleImmediately"), applyScheduleImmediately ? "true" : "false");
}

std::string CreateFileRequest::getRerunMode() const {
  return rerunMode_;
}

void CreateFileRequest::setRerunMode(const std::string &rerunMode) {
  rerunMode_ = rerunMode;
  setBodyParameter(std::string("RerunMode"), rerunMode);
}

std::string CreateFileRequest::getConnectionName() const {
  return connectionName_;
}

void CreateFileRequest::setConnectionName(const std::string &connectionName) {
  connectionName_ = connectionName;
  setBodyParameter(std::string("ConnectionName"), connectionName);
}

std::string CreateFileRequest::getOutputParameters() const {
  return outputParameters_;
}

void CreateFileRequest::setOutputParameters(const std::string &outputParameters) {
  outputParameters_ = outputParameters;
  setBodyParameter(std::string("OutputParameters"), outputParameters);
}

std::string CreateFileRequest::getParaValue() const {
  return paraValue_;
}

void CreateFileRequest::setParaValue(const std::string &paraValue) {
  paraValue_ = paraValue;
  setBodyParameter(std::string("ParaValue"), paraValue);
}

std::string CreateFileRequest::getResourceGroupIdentifier() const {
  return resourceGroupIdentifier_;
}

void CreateFileRequest::setResourceGroupIdentifier(const std::string &resourceGroupIdentifier) {
  resourceGroupIdentifier_ = resourceGroupIdentifier;
  setBodyParameter(std::string("ResourceGroupIdentifier"), resourceGroupIdentifier);
}

int CreateFileRequest::getAutoRerunTimes() const {
  return autoRerunTimes_;
}

void CreateFileRequest::setAutoRerunTimes(int autoRerunTimes) {
  autoRerunTimes_ = autoRerunTimes;
  setBodyParameter(std::string("AutoRerunTimes"), std::to_string(autoRerunTimes));
}

std::string CreateFileRequest::getCronExpress() const {
  return cronExpress_;
}

void CreateFileRequest::setCronExpress(const std::string &cronExpress) {
  cronExpress_ = cronExpress;
  setBodyParameter(std::string("CronExpress"), cronExpress);
}

bool CreateFileRequest::getIgnoreParentSkipRunningProperty() const {
  return ignoreParentSkipRunningProperty_;
}

void CreateFileRequest::setIgnoreParentSkipRunningProperty(bool ignoreParentSkipRunningProperty) {
  ignoreParentSkipRunningProperty_ = ignoreParentSkipRunningProperty;
  setBodyParameter(std::string("IgnoreParentSkipRunningProperty"), ignoreParentSkipRunningProperty ? "true" : "false");
}

long CreateFileRequest::getEndEffectDate() const {
  return endEffectDate_;
}

void CreateFileRequest::setEndEffectDate(long endEffectDate) {
  endEffectDate_ = endEffectDate;
  setBodyParameter(std::string("EndEffectDate"), std::to_string(endEffectDate));
}

std::string CreateFileRequest::getFileName() const {
  return fileName_;
}

void CreateFileRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setBodyParameter(std::string("FileName"), fileName);
}

std::string CreateFileRequest::getInputParameters() const {
  return inputParameters_;
}

void CreateFileRequest::setInputParameters(const std::string &inputParameters) {
  inputParameters_ = inputParameters;
  setBodyParameter(std::string("InputParameters"), inputParameters);
}

bool CreateFileRequest::getStop() const {
  return stop_;
}

void CreateFileRequest::setStop(bool stop) {
  stop_ = stop;
  setBodyParameter(std::string("Stop"), stop ? "true" : "false");
}

std::string CreateFileRequest::getDependentType() const {
  return dependentType_;
}

void CreateFileRequest::setDependentType(const std::string &dependentType) {
  dependentType_ = dependentType;
  setBodyParameter(std::string("DependentType"), dependentType);
}

std::string CreateFileRequest::getFileFolderPath() const {
  return fileFolderPath_;
}

void CreateFileRequest::setFileFolderPath(const std::string &fileFolderPath) {
  fileFolderPath_ = fileFolderPath;
  setBodyParameter(std::string("FileFolderPath"), fileFolderPath);
}

std::string CreateFileRequest::getFileDescription() const {
  return fileDescription_;
}

void CreateFileRequest::setFileDescription(const std::string &fileDescription) {
  fileDescription_ = fileDescription;
  setBodyParameter(std::string("FileDescription"), fileDescription);
}

bool CreateFileRequest::getAutoParsing() const {
  return autoParsing_;
}

void CreateFileRequest::setAutoParsing(bool autoParsing) {
  autoParsing_ = autoParsing;
  setBodyParameter(std::string("AutoParsing"), autoParsing ? "true" : "false");
}

std::string CreateFileRequest::getSchedulerType() const {
  return schedulerType_;
}

void CreateFileRequest::setSchedulerType(const std::string &schedulerType) {
  schedulerType_ = schedulerType;
  setBodyParameter(std::string("SchedulerType"), schedulerType);
}

