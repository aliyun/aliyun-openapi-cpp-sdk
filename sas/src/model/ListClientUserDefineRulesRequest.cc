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

#include <alibabacloud/sas/model/ListClientUserDefineRulesRequest.h>

using AlibabaCloud::Sas::Model::ListClientUserDefineRulesRequest;

ListClientUserDefineRulesRequest::ListClientUserDefineRulesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListClientUserDefineRules") {
  setMethod(HttpRequest::Method::Post);
}

ListClientUserDefineRulesRequest::~ListClientUserDefineRulesRequest() {}

std::vector<int> ListClientUserDefineRulesRequest::getType() const {
  return type_;
}

void ListClientUserDefineRulesRequest::setType(const std::vector<int> &type) {
  type_ = type;
}

std::string ListClientUserDefineRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListClientUserDefineRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListClientUserDefineRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListClientUserDefineRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListClientUserDefineRulesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListClientUserDefineRulesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListClientUserDefineRulesRequest::getName() const {
  return name_;
}

void ListClientUserDefineRulesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

