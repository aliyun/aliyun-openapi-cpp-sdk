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

#include <alibabacloud/facebody/model/RecognizePublicFaceRequest.h>

using AlibabaCloud::Facebody::Model::RecognizePublicFaceRequest;

RecognizePublicFaceRequest::RecognizePublicFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "RecognizePublicFace") {
  setMethod(HttpRequest::Method::Post);
}

RecognizePublicFaceRequest::~RecognizePublicFaceRequest() {}

bool RecognizePublicFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void RecognizePublicFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string RecognizePublicFaceRequest::getOssFile() const {
  return ossFile_;
}

void RecognizePublicFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string RecognizePublicFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void RecognizePublicFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::vector<RecognizePublicFaceRequest::Task> RecognizePublicFaceRequest::getTask() const {
  return task_;
}

void RecognizePublicFaceRequest::setTask(const std::vector<RecognizePublicFaceRequest::Task> &task) {
  task_ = task;
  for(int dep1 = 0; dep1 != task.size(); dep1++) {
  auto taskObj = task.at(dep1);
  std::string taskObjStr = std::string("Task") + "." + std::to_string(dep1 + 1);
    setBodyParameter(taskObjStr + ".ImageURL", taskObj.imageURL);
    setBodyParameter(taskObjStr + ".ImageData", taskObj.imageData);
  }
}

