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

#include <alibabacloud/sas/model/OpenSensitiveFileScanRequest.h>

using AlibabaCloud::Sas::Model::OpenSensitiveFileScanRequest;

OpenSensitiveFileScanRequest::OpenSensitiveFileScanRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OpenSensitiveFileScan") {
  setMethod(HttpRequest::Method::Post);
}

OpenSensitiveFileScanRequest::~OpenSensitiveFileScanRequest() {}

int OpenSensitiveFileScanRequest::getPageSize() const {
  return pageSize_;
}

void OpenSensitiveFileScanRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string OpenSensitiveFileScanRequest::getLang() const {
  return lang_;
}

void OpenSensitiveFileScanRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int OpenSensitiveFileScanRequest::getCurrentPage() const {
  return currentPage_;
}

void OpenSensitiveFileScanRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string OpenSensitiveFileScanRequest::getSwitchOn() const {
  return switchOn_;
}

void OpenSensitiveFileScanRequest::setSwitchOn(const std::string &switchOn) {
  switchOn_ = switchOn;
  setParameter(std::string("SwitchOn"), switchOn);
}

