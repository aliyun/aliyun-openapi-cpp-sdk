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

#include <alibabacloud/dt-oc-info/model/GetOcJusticeCaseFilingRequest.h>

using AlibabaCloud::Dt_oc_info::Model::GetOcJusticeCaseFilingRequest;

GetOcJusticeCaseFilingRequest::GetOcJusticeCaseFilingRequest()
    : RpcServiceRequest("dt-oc-info", "2022-08-29", "GetOcJusticeCaseFiling") {
  setMethod(HttpRequest::Method::Post);
}

GetOcJusticeCaseFilingRequest::~GetOcJusticeCaseFilingRequest() {}

int GetOcJusticeCaseFilingRequest::getPageNo() const {
  return pageNo_;
}

void GetOcJusticeCaseFilingRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setBodyParameter(std::string("PageNo"), std::to_string(pageNo));
}

int GetOcJusticeCaseFilingRequest::getPageSize() const {
  return pageSize_;
}

void GetOcJusticeCaseFilingRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetOcJusticeCaseFilingRequest::getSearchKey() const {
  return searchKey_;
}

void GetOcJusticeCaseFilingRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

