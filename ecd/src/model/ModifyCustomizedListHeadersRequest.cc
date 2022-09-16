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

#include <alibabacloud/ecd/model/ModifyCustomizedListHeadersRequest.h>

using AlibabaCloud::Ecd::Model::ModifyCustomizedListHeadersRequest;

ModifyCustomizedListHeadersRequest::ModifyCustomizedListHeadersRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyCustomizedListHeaders") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCustomizedListHeadersRequest::~ModifyCustomizedListHeadersRequest() {}

std::vector<ModifyCustomizedListHeadersRequest::Headers> ModifyCustomizedListHeadersRequest::getHeaders() const {
  return headers_;
}

void ModifyCustomizedListHeadersRequest::setHeaders(const std::vector<ModifyCustomizedListHeadersRequest::Headers> &headers) {
  headers_ = headers;
  for(int dep1 = 0; dep1 != headers.size(); dep1++) {
  auto headersObj = headers.at(dep1);
  std::string headersObjStr = std::string("Headers") + "." + std::to_string(dep1 + 1);
    setParameter(headersObjStr + ".DisplayType", headersObj.displayType);
    setParameter(headersObjStr + ".HeaderKey", headersObj.headerKey);
  }
}

std::string ModifyCustomizedListHeadersRequest::getRegionId() const {
  return regionId_;
}

void ModifyCustomizedListHeadersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCustomizedListHeadersRequest::getListType() const {
  return listType_;
}

void ModifyCustomizedListHeadersRequest::setListType(const std::string &listType) {
  listType_ = listType;
  setParameter(std::string("ListType"), listType);
}

