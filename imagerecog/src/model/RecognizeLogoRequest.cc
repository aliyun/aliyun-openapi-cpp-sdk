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

#include <alibabacloud/imagerecog/model/RecognizeLogoRequest.h>

using AlibabaCloud::Imagerecog::Model::RecognizeLogoRequest;

RecognizeLogoRequest::RecognizeLogoRequest()
    : RpcServiceRequest("imagerecog", "2019-09-30", "RecognizeLogo") {
  setMethod(HttpRequest::Method::Post);
}

RecognizeLogoRequest::~RecognizeLogoRequest() {}

bool RecognizeLogoRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void RecognizeLogoRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string RecognizeLogoRequest::getOssFile() const {
  return ossFile_;
}

void RecognizeLogoRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::vector<RecognizeLogoRequest::Tasks> RecognizeLogoRequest::getTasks() const {
  return tasks_;
}

void RecognizeLogoRequest::setTasks(const std::vector<RecognizeLogoRequest::Tasks> &tasks) {
  tasks_ = tasks;
  for(int dep1 = 0; dep1 != tasks.size(); dep1++) {
  auto tasksObj = tasks.at(dep1);
  std::string tasksObjStr = std::string("Tasks") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tasksObjStr + ".ImageURL", tasksObj.imageURL);
  }
}

std::string RecognizeLogoRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void RecognizeLogoRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

