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

#include <alibabacloud/sas/model/GetCheckConfigRequest.h>

using AlibabaCloud::Sas::Model::GetCheckConfigRequest;

GetCheckConfigRequest::GetCheckConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetCheckConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetCheckConfigRequest::~GetCheckConfigRequest() {}

std::string GetCheckConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void GetCheckConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int GetCheckConfigRequest::getPageSize() const {
  return pageSize_;
}

void GetCheckConfigRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetCheckConfigRequest::getFrom() const {
  return from_;
}

void GetCheckConfigRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string GetCheckConfigRequest::getLang() const {
  return lang_;
}

void GetCheckConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int GetCheckConfigRequest::getCurrentPage() const {
  return currentPage_;
}

void GetCheckConfigRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string GetCheckConfigRequest::getCheckGroupId() const {
  return checkGroupId_;
}

void GetCheckConfigRequest::setCheckGroupId(const std::string &checkGroupId) {
  checkGroupId_ = checkGroupId;
  setParameter(std::string("CheckGroupId"), checkGroupId);
}

