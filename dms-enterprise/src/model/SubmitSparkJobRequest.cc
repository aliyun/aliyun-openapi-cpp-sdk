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

#include <alibabacloud/dms-enterprise/model/SubmitSparkJobRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SubmitSparkJobRequest;

SubmitSparkJobRequest::SubmitSparkJobRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SubmitSparkJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSparkJobRequest::~SubmitSparkJobRequest() {}

std::string SubmitSparkJobRequest::getMainClass() const {
  return mainClass_;
}

void SubmitSparkJobRequest::setMainClass(const std::string &mainClass) {
  mainClass_ = mainClass;
  setBodyParameter(std::string("MainClass"), mainClass);
}

std::map<std::string, std::string> SubmitSparkJobRequest::getConfiguration() const {
  return configuration_;
}

void SubmitSparkJobRequest::setConfiguration(const std::map<std::string, std::string> &configuration) {
  configuration_ = configuration;
  for(auto const &iter1 : configuration) {
    setBodyParameter(std::string("Configuration") + "." + iter1.first, iter1.second);
  }
}

SubmitSparkJobRequest::OssInfo SubmitSparkJobRequest::getOssInfo() const {
  return ossInfo_;
}

void SubmitSparkJobRequest::setOssInfo(const SubmitSparkJobRequest::OssInfo &ossInfo) {
  ossInfo_ = ossInfo;
  setBodyParameter(std::string("OssInfo") + ".Endpoint", ossInfo.endpoint);
  setBodyParameter(std::string("OssInfo") + ".AccessKeySecret", ossInfo.accessKeySecret);
  setBodyParameter(std::string("OssInfo") + ".AccessKeyId", ossInfo.accessKeyId);
}

long SubmitSparkJobRequest::getTid() const {
  return tid_;
}

void SubmitSparkJobRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string SubmitSparkJobRequest::getMainFile() const {
  return mainFile_;
}

void SubmitSparkJobRequest::setMainFile(const std::string &mainFile) {
  mainFile_ = mainFile;
  setBodyParameter(std::string("MainFile"), mainFile);
}

std::string SubmitSparkJobRequest::getName() const {
  return name_;
}

void SubmitSparkJobRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::vector<SubmitSparkJobRequest::std::string> SubmitSparkJobRequest::getFiles() const {
  return files_;
}

void SubmitSparkJobRequest::setFiles(const std::vector<SubmitSparkJobRequest::std::string> &files) {
  files_ = files;
  for(int dep1 = 0; dep1 != files.size(); dep1++) {
    setBodyParameter(std::string("Files") + "." + std::to_string(dep1 + 1), files[dep1]);
  }
}

std::string SubmitSparkJobRequest::getAppCode() const {
  return appCode_;
}

void SubmitSparkJobRequest::setAppCode(const std::string &appCode) {
  appCode_ = appCode;
  setBodyParameter(std::string("AppCode"), appCode);
}

std::vector<SubmitSparkJobRequest::std::string> SubmitSparkJobRequest::getArguments() const {
  return arguments_;
}

void SubmitSparkJobRequest::setArguments(const std::vector<SubmitSparkJobRequest::std::string> &arguments) {
  arguments_ = arguments;
  for(int dep1 = 0; dep1 != arguments.size(); dep1++) {
    setBodyParameter(std::string("Arguments") + "." + std::to_string(dep1 + 1), arguments[dep1]);
  }
}

