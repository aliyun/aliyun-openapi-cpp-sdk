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

#include <alibabacloud/dt-oc-info/model/GetOcIpPatentRequest.h>

using AlibabaCloud::Dt_oc_info::Model::GetOcIpPatentRequest;

GetOcIpPatentRequest::GetOcIpPatentRequest()
    : RpcServiceRequest("dt-oc-info", "2022-08-29", "GetOcIpPatent") {
  setMethod(HttpRequest::Method::Post);
}

GetOcIpPatentRequest::~GetOcIpPatentRequest() {}

int GetOcIpPatentRequest::getPageNo() const {
  return pageNo_;
}

void GetOcIpPatentRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setBodyParameter(std::string("PageNo"), std::to_string(pageNo));
}

int GetOcIpPatentRequest::getPageSize() const {
  return pageSize_;
}

void GetOcIpPatentRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetOcIpPatentRequest::getSearchKey() const {
  return searchKey_;
}

void GetOcIpPatentRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

