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

#include <alibabacloud/facebody/model/DetectInfraredLivingFaceRequest.h>

using AlibabaCloud::Facebody::Model::DetectInfraredLivingFaceRequest;

DetectInfraredLivingFaceRequest::DetectInfraredLivingFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DetectInfraredLivingFace") {
  setMethod(HttpRequest::Method::Post);
}

DetectInfraredLivingFaceRequest::~DetectInfraredLivingFaceRequest() {}

bool DetectInfraredLivingFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectInfraredLivingFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectInfraredLivingFaceRequest::getOssFile() const {
  return ossFile_;
}

void DetectInfraredLivingFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::vector<DetectInfraredLivingFaceRequest::Tasks> DetectInfraredLivingFaceRequest::getTasks() const {
  return tasks_;
}

void DetectInfraredLivingFaceRequest::setTasks(const std::vector<DetectInfraredLivingFaceRequest::Tasks> &tasks) {
  tasks_ = tasks;
  for(int dep1 = 0; dep1 != tasks.size(); dep1++) {
  auto tasksObj = tasks.at(dep1);
  std::string tasksObjStr = std::string("Tasks") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tasksObjStr + ".ImageURL", tasksObj.imageURL);
  }
}

std::string DetectInfraredLivingFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectInfraredLivingFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

