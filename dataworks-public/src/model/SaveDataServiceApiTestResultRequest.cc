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

#include <alibabacloud/dataworks-public/model/SaveDataServiceApiTestResultRequest.h>

using AlibabaCloud::Dataworks_public::Model::SaveDataServiceApiTestResultRequest;

SaveDataServiceApiTestResultRequest::SaveDataServiceApiTestResultRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "SaveDataServiceApiTestResult") {
  setMethod(HttpRequest::Method::Post);
}

SaveDataServiceApiTestResultRequest::~SaveDataServiceApiTestResultRequest() {}

std::string SaveDataServiceApiTestResultRequest::getFailResultSample() const {
  return failResultSample_;
}

void SaveDataServiceApiTestResultRequest::setFailResultSample(const std::string &failResultSample) {
  failResultSample_ = failResultSample;
  setBodyParameter(std::string("FailResultSample"), failResultSample);
}

std::string SaveDataServiceApiTestResultRequest::getResultSample() const {
  return resultSample_;
}

void SaveDataServiceApiTestResultRequest::setResultSample(const std::string &resultSample) {
  resultSample_ = resultSample;
  setBodyParameter(std::string("ResultSample"), resultSample);
}

bool SaveDataServiceApiTestResultRequest::getAutoGenerate() const {
  return autoGenerate_;
}

void SaveDataServiceApiTestResultRequest::setAutoGenerate(bool autoGenerate) {
  autoGenerate_ = autoGenerate;
  setBodyParameter(std::string("AutoGenerate"), autoGenerate ? "true" : "false");
}

long SaveDataServiceApiTestResultRequest::getProjectId() const {
  return projectId_;
}

void SaveDataServiceApiTestResultRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

long SaveDataServiceApiTestResultRequest::getApiId() const {
  return apiId_;
}

void SaveDataServiceApiTestResultRequest::setApiId(long apiId) {
  apiId_ = apiId;
  setBodyParameter(std::string("ApiId"), std::to_string(apiId));
}

