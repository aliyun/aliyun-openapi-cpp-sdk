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

#include <alibabacloud/dataworks-public/model/UpdateUdfFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateUdfFileRequest;

UpdateUdfFileRequest::UpdateUdfFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateUdfFile") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUdfFileRequest::~UpdateUdfFileRequest() {}

std::string UpdateUdfFileRequest::getReturnValue() const {
  return returnValue_;
}

void UpdateUdfFileRequest::setReturnValue(const std::string &returnValue) {
  returnValue_ = returnValue;
  setBodyParameter(std::string("ReturnValue"), returnValue);
}

std::string UpdateUdfFileRequest::getResources() const {
  return resources_;
}

void UpdateUdfFileRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setBodyParameter(std::string("Resources"), resources);
}

std::string UpdateUdfFileRequest::getFunctionType() const {
  return functionType_;
}

void UpdateUdfFileRequest::setFunctionType(const std::string &functionType) {
  functionType_ = functionType;
  setBodyParameter(std::string("FunctionType"), functionType);
}

std::string UpdateUdfFileRequest::getCmdDescription() const {
  return cmdDescription_;
}

void UpdateUdfFileRequest::setCmdDescription(const std::string &cmdDescription) {
  cmdDescription_ = cmdDescription;
  setBodyParameter(std::string("CmdDescription"), cmdDescription);
}

std::string UpdateUdfFileRequest::getUdfDescription() const {
  return udfDescription_;
}

void UpdateUdfFileRequest::setUdfDescription(const std::string &udfDescription) {
  udfDescription_ = udfDescription;
  setBodyParameter(std::string("UdfDescription"), udfDescription);
}

std::string UpdateUdfFileRequest::getParameterDescription() const {
  return parameterDescription_;
}

void UpdateUdfFileRequest::setParameterDescription(const std::string &parameterDescription) {
  parameterDescription_ = parameterDescription;
  setBodyParameter(std::string("ParameterDescription"), parameterDescription);
}

std::string UpdateUdfFileRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void UpdateUdfFileRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

std::string UpdateUdfFileRequest::getExample() const {
  return example_;
}

void UpdateUdfFileRequest::setExample(const std::string &example) {
  example_ = example;
  setBodyParameter(std::string("Example"), example);
}

std::string UpdateUdfFileRequest::getClassName() const {
  return className_;
}

void UpdateUdfFileRequest::setClassName(const std::string &className) {
  className_ = className;
  setBodyParameter(std::string("ClassName"), className);
}

std::string UpdateUdfFileRequest::getFileFolderPath() const {
  return fileFolderPath_;
}

void UpdateUdfFileRequest::setFileFolderPath(const std::string &fileFolderPath) {
  fileFolderPath_ = fileFolderPath;
  setBodyParameter(std::string("FileFolderPath"), fileFolderPath);
}

long UpdateUdfFileRequest::getProjectId() const {
  return projectId_;
}

void UpdateUdfFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string UpdateUdfFileRequest::getFileId() const {
  return fileId_;
}

void UpdateUdfFileRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setBodyParameter(std::string("FileId"), fileId);
}

