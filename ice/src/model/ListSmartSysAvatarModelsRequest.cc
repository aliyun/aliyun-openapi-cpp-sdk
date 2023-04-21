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

#include <alibabacloud/ice/model/ListSmartSysAvatarModelsRequest.h>

using AlibabaCloud::ICE::Model::ListSmartSysAvatarModelsRequest;

ListSmartSysAvatarModelsRequest::ListSmartSysAvatarModelsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListSmartSysAvatarModels") {
  setMethod(HttpRequest::Method::Get);
}

ListSmartSysAvatarModelsRequest::~ListSmartSysAvatarModelsRequest() {}

long ListSmartSysAvatarModelsRequest::getPageNo() const {
  return pageNo_;
}

void ListSmartSysAvatarModelsRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

long ListSmartSysAvatarModelsRequest::getPageSize() const {
  return pageSize_;
}

void ListSmartSysAvatarModelsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

