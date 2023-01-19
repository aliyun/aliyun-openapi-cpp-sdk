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

#include <alibabacloud/sas/model/GetModuleConfigRequest.h>

using AlibabaCloud::Sas::Model::GetModuleConfigRequest;

GetModuleConfigRequest::GetModuleConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetModuleConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetModuleConfigRequest::~GetModuleConfigRequest() {}

std::string GetModuleConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void GetModuleConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetModuleConfigRequest::getPageSize() const {
  return pageSize_;
}

void GetModuleConfigRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string GetModuleConfigRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void GetModuleConfigRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string GetModuleConfigRequest::getCurrentPage() const {
  return currentPage_;
}

void GetModuleConfigRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

