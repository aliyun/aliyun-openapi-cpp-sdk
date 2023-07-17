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

#include <alibabacloud/dataworks-public/model/CreateUdfFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateUdfFileRequest;

CreateUdfFileRequest::CreateUdfFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateUdfFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateUdfFileRequest::~CreateUdfFileRequest() {}

bool CreateUdfFileRequest::getCreateFolderIfNotExists() const {
  return createFolderIfNotExists_;
}

void CreateUdfFileRequest::setCreateFolderIfNotExists(bool createFolderIfNotExists) {
  createFolderIfNotExists_ = createFolderIfNotExists;
  setBodyParameter(std::string("CreateFolderIfNotExists"), createFolderIfNotExists ? "true" : "false");
}

std::string CreateUdfFileRequest::getReturnValue() const {
  return returnValue_;
}

void CreateUdfFileRequest::setReturnValue(const std::string &returnValue) {
  returnValue_ = returnValue;
  setBodyParameter(std::string("ReturnValue"), returnValue);
}

std::string CreateUdfFileRequest::getResources() const {
  return resources_;
}

void CreateUdfFileRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setBodyParameter(std::string("Resources"), resources);
}

std::string CreateUdfFileRequest::getFunctionType() const {
  return functionType_;
}

void CreateUdfFileRequest::setFunctionType(const std::string &functionType) {
  functionType_ = functionType;
  setBodyParameter(std::string("FunctionType"), functionType);
}

std::string CreateUdfFileRequest::getCmdDescription() const {
  return cmdDescription_;
}

void CreateUdfFileRequest::setCmdDescription(const std::string &cmdDescription) {
  cmdDescription_ = cmdDescription;
  setBodyParameter(std::string("CmdDescription"), cmdDescription);
}

std::string CreateUdfFileRequest::getUdfDescription() const {
  return udfDescription_;
}

void CreateUdfFileRequest::setUdfDescription(const std::string &udfDescription) {
  udfDescription_ = udfDescription;
  setBodyParameter(std::string("UdfDescription"), udfDescription);
}

std::string CreateUdfFileRequest::getParameterDescription() const {
  return parameterDescription_;
}

void CreateUdfFileRequest::setParameterDescription(const std::string &parameterDescription) {
  parameterDescription_ = parameterDescription;
  setBodyParameter(std::string("ParameterDescription"), parameterDescription);
}

std::string CreateUdfFileRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void CreateUdfFileRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

std::string CreateUdfFileRequest::getExample() const {
  return example_;
}

void CreateUdfFileRequest::setExample(const std::string &example) {
  example_ = example;
  setBodyParameter(std::string("Example"), example);
}

std::string CreateUdfFileRequest::getFileName() const {
  return fileName_;
}

void CreateUdfFileRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setBodyParameter(std::string("FileName"), fileName);
}

std::string CreateUdfFileRequest::getClassName() const {
  return className_;
}

void CreateUdfFileRequest::setClassName(const std::string &className) {
  className_ = className;
  setBodyParameter(std::string("ClassName"), className);
}

std::string CreateUdfFileRequest::getFileFolderPath() const {
  return fileFolderPath_;
}

void CreateUdfFileRequest::setFileFolderPath(const std::string &fileFolderPath) {
  fileFolderPath_ = fileFolderPath;
  setBodyParameter(std::string("FileFolderPath"), fileFolderPath);
}

long CreateUdfFileRequest::getProjectId() const {
  return projectId_;
}

void CreateUdfFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

