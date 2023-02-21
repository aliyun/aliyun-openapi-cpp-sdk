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

#include <alibabacloud/dt-oc-info/model/GetQccSearchCertificationRequest.h>

using AlibabaCloud::Dt_oc_info::Model::GetQccSearchCertificationRequest;

GetQccSearchCertificationRequest::GetQccSearchCertificationRequest()
    : RpcServiceRequest("dt-oc-info", "2022-08-29", "GetQccSearchCertification") {
  setMethod(HttpRequest::Method::Post);
}

GetQccSearchCertificationRequest::~GetQccSearchCertificationRequest() {}

std::string GetQccSearchCertificationRequest::getCertCategory() const {
  return certCategory_;
}

void GetQccSearchCertificationRequest::setCertCategory(const std::string &certCategory) {
  certCategory_ = certCategory;
  setBodyParameter(std::string("CertCategory"), certCategory);
}

std::string GetQccSearchCertificationRequest::getEntName() const {
  return entName_;
}

void GetQccSearchCertificationRequest::setEntName(const std::string &entName) {
  entName_ = entName;
  setBodyParameter(std::string("EntName"), entName);
}

int GetQccSearchCertificationRequest::getPageNo() const {
  return pageNo_;
}

void GetQccSearchCertificationRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setBodyParameter(std::string("PageNo"), std::to_string(pageNo));
}

int GetQccSearchCertificationRequest::getPageSize() const {
  return pageSize_;
}

void GetQccSearchCertificationRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

