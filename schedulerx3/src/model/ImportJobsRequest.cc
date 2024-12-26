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

#include <alibabacloud/schedulerx3/model/ImportJobsRequest.h>

using AlibabaCloud::SchedulerX3::Model::ImportJobsRequest;

ImportJobsRequest::ImportJobsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ImportJobs") {
  setMethod(HttpRequest::Method::Post);
}

ImportJobsRequest::~ImportJobsRequest() {}

std::string ImportJobsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ImportJobsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ImportJobsRequest::getContent() const {
  return content_;
}

void ImportJobsRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

bool ImportJobsRequest::getOverwrite() const {
  return overwrite_;
}

void ImportJobsRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setBodyParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

std::string ImportJobsRequest::getClusterId() const {
  return clusterId_;
}

void ImportJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

bool ImportJobsRequest::getAutoCreateApp() const {
  return autoCreateApp_;
}

void ImportJobsRequest::setAutoCreateApp(bool autoCreateApp) {
  autoCreateApp_ = autoCreateApp;
  setBodyParameter(std::string("AutoCreateApp"), autoCreateApp ? "true" : "false");
}

