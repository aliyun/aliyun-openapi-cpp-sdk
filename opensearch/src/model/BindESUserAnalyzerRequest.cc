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

#include <alibabacloud/opensearch/model/BindESUserAnalyzerRequest.h>

using AlibabaCloud::OpenSearch::Model::BindESUserAnalyzerRequest;

BindESUserAnalyzerRequest::BindESUserAnalyzerRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/es/[esInstanceId]/actions/bind-analyzer"};
  setMethod(HttpRequest::Method::Post);
}

BindESUserAnalyzerRequest::~BindESUserAnalyzerRequest() {}

std::string BindESUserAnalyzerRequest::getEsInstanceId() const {
  return esInstanceId_;
}

void BindESUserAnalyzerRequest::setEsInstanceId(const std::string &esInstanceId) {
  esInstanceId_ = esInstanceId;
  setParameter(std::string("esInstanceId"), esInstanceId);
}

std::string BindESUserAnalyzerRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void BindESUserAnalyzerRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

