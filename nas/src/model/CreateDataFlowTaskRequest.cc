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

#include <alibabacloud/nas/model/CreateDataFlowTaskRequest.h>

using AlibabaCloud::NAS::Model::CreateDataFlowTaskRequest;

CreateDataFlowTaskRequest::CreateDataFlowTaskRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateDataFlowTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataFlowTaskRequest::~CreateDataFlowTaskRequest() {}

std::string CreateDataFlowTaskRequest::getDstDirectory() const {
  return dstDirectory_;
}

void CreateDataFlowTaskRequest::setDstDirectory(const std::string &dstDirectory) {
  dstDirectory_ = dstDirectory;
  setParameter(std::string("DstDirectory"), dstDirectory);
}

std::string CreateDataFlowTaskRequest::getClientToken() const {
  return clientToken_;
}

void CreateDataFlowTaskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDataFlowTaskRequest::getDirectory() const {
  return directory_;
}

void CreateDataFlowTaskRequest::setDirectory(const std::string &directory) {
  directory_ = directory;
  setParameter(std::string("Directory"), directory);
}

std::string CreateDataFlowTaskRequest::getSrcTaskId() const {
  return srcTaskId_;
}

void CreateDataFlowTaskRequest::setSrcTaskId(const std::string &srcTaskId) {
  srcTaskId_ = srcTaskId;
  setParameter(std::string("SrcTaskId"), srcTaskId);
}

std::string CreateDataFlowTaskRequest::getDataType() const {
  return dataType_;
}

void CreateDataFlowTaskRequest::setDataType(const std::string &dataType) {
  dataType_ = dataType;
  setParameter(std::string("DataType"), dataType);
}

bool CreateDataFlowTaskRequest::getCreateDirIfNotExist() const {
  return createDirIfNotExist_;
}

void CreateDataFlowTaskRequest::setCreateDirIfNotExist(bool createDirIfNotExist) {
  createDirIfNotExist_ = createDirIfNotExist;
  setParameter(std::string("CreateDirIfNotExist"), createDirIfNotExist ? "true" : "false");
}

std::string CreateDataFlowTaskRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateDataFlowTaskRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateDataFlowTaskRequest::getDryRun() const {
  return dryRun_;
}

void CreateDataFlowTaskRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateDataFlowTaskRequest::getDataFlowId() const {
  return dataFlowId_;
}

void CreateDataFlowTaskRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

std::string CreateDataFlowTaskRequest::getEntryList() const {
  return entryList_;
}

void CreateDataFlowTaskRequest::setEntryList(const std::string &entryList) {
  entryList_ = entryList;
  setParameter(std::string("EntryList"), entryList);
}

std::string CreateDataFlowTaskRequest::getConflictPolicy() const {
  return conflictPolicy_;
}

void CreateDataFlowTaskRequest::setConflictPolicy(const std::string &conflictPolicy) {
  conflictPolicy_ = conflictPolicy;
  setParameter(std::string("ConflictPolicy"), conflictPolicy);
}

std::string CreateDataFlowTaskRequest::getTaskAction() const {
  return taskAction_;
}

void CreateDataFlowTaskRequest::setTaskAction(const std::string &taskAction) {
  taskAction_ = taskAction;
  setParameter(std::string("TaskAction"), taskAction);
}

