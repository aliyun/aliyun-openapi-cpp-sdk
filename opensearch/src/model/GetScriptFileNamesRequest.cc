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

#include <alibabacloud/opensearch/model/GetScriptFileNamesRequest.h>

using AlibabaCloud::OpenSearch::Model::GetScriptFileNamesRequest;

GetScriptFileNamesRequest::GetScriptFileNamesRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/apps/[appVersionId]/sort-scripts/[scriptName]/file-names"};
  setMethod(HttpRequest::Method::Get);
}

GetScriptFileNamesRequest::~GetScriptFileNamesRequest() {}

std::string GetScriptFileNamesRequest::getAppVersionId() const {
  return appVersionId_;
}

void GetScriptFileNamesRequest::setAppVersionId(const std::string &appVersionId) {
  appVersionId_ = appVersionId;
  setParameter(std::string("appVersionId"), appVersionId);
}

std::string GetScriptFileNamesRequest::getScriptName() const {
  return scriptName_;
}

void GetScriptFileNamesRequest::setScriptName(const std::string &scriptName) {
  scriptName_ = scriptName;
  setParameter(std::string("scriptName"), scriptName);
}

std::string GetScriptFileNamesRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void GetScriptFileNamesRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

