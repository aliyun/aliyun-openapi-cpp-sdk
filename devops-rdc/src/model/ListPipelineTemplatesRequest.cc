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

#include <alibabacloud/devops-rdc/model/ListPipelineTemplatesRequest.h>

using AlibabaCloud::Devops_rdc::Model::ListPipelineTemplatesRequest;

ListPipelineTemplatesRequest::ListPipelineTemplatesRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "ListPipelineTemplates") {
  setMethod(HttpRequest::Method::Get);
}

ListPipelineTemplatesRequest::~ListPipelineTemplatesRequest() {}

int ListPipelineTemplatesRequest::getPageStart() const {
  return pageStart_;
}

void ListPipelineTemplatesRequest::setPageStart(int pageStart) {
  pageStart_ = pageStart;
  setParameter(std::string("PageStart"), std::to_string(pageStart));
}

int ListPipelineTemplatesRequest::getPageNum() const {
  return pageNum_;
}

void ListPipelineTemplatesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListPipelineTemplatesRequest::getOrgId() const {
  return orgId_;
}

void ListPipelineTemplatesRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

