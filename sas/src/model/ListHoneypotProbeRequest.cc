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

#include <alibabacloud/sas/model/ListHoneypotProbeRequest.h>

using AlibabaCloud::Sas::Model::ListHoneypotProbeRequest;

ListHoneypotProbeRequest::ListHoneypotProbeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListHoneypotProbe") {
  setMethod(HttpRequest::Method::Post);
}

ListHoneypotProbeRequest::~ListHoneypotProbeRequest() {}

int ListHoneypotProbeRequest::getPageSize() const {
  return pageSize_;
}

void ListHoneypotProbeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListHoneypotProbeRequest::getLang() const {
  return lang_;
}

void ListHoneypotProbeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ListHoneypotProbeRequest::getProbeType() const {
  return probeType_;
}

void ListHoneypotProbeRequest::setProbeType(const std::string &probeType) {
  probeType_ = probeType;
  setParameter(std::string("ProbeType"), probeType);
}

std::string ListHoneypotProbeRequest::getProbeStatus() const {
  return probeStatus_;
}

void ListHoneypotProbeRequest::setProbeStatus(const std::string &probeStatus) {
  probeStatus_ = probeStatus;
  setParameter(std::string("ProbeStatus"), probeStatus);
}

int ListHoneypotProbeRequest::getCurrentPage() const {
  return currentPage_;
}

void ListHoneypotProbeRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListHoneypotProbeRequest::getDisplayName() const {
  return displayName_;
}

void ListHoneypotProbeRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

