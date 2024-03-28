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

#include <alibabacloud/devops/model/ListSearchSourceCodeRequest.h>

using AlibabaCloud::Devops::Model::ListSearchSourceCodeRequest;

ListSearchSourceCodeRequest::ListSearchSourceCodeRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/search/code"};
  setMethod(HttpRequest::Method::Post);
}

ListSearchSourceCodeRequest::~ListSearchSourceCodeRequest() {}

std::string ListSearchSourceCodeRequest::getOrganizationId() const {
  return organizationId_;
}

void ListSearchSourceCodeRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

ListSearchSourceCodeRequest::body ListSearchSourceCodeRequest::getBody() const {
  return body_;
}

void ListSearchSourceCodeRequest::setBody(const ListSearchSourceCodeRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".isCodeBlock", body.isCodeBlock ? "true" : "false");
  setBodyParameter(std::string("body") + ".filePath.matchType", body.filePath.matchType);
  setBodyParameter(std::string("body") + ".filePath.value", body.filePath.value);
  setBodyParameter(std::string("body") + ".filePath.operatorType", body.filePath.operatorType);
  setBodyParameter(std::string("body") + ".scope", body.scope);
  setBodyParameter(std::string("body") + ".pageSize", std::to_string(body.pageSize));
  setBodyParameter(std::string("body") + ".language", body.language);
  setBodyParameter(std::string("body") + ".page", std::to_string(body.page));
  setBodyParameter(std::string("body") + ".sort", body.sort);
  setBodyParameter(std::string("body") + ".keyword", body.keyword);
  setBodyParameter(std::string("body") + ".repoPath.matchType", body.repoPath.matchType);
  setBodyParameter(std::string("body") + ".repoPath.value", body.repoPath.value);
  setBodyParameter(std::string("body") + ".repoPath.operatorType", body.repoPath.operatorType);
  setBodyParameter(std::string("body") + ".order", body.order);
}

