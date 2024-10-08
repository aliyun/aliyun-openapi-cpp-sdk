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

#include <alibabacloud/resourcecenter/model/DeleteFilterRequest.h>

using AlibabaCloud::ResourceCenter::Model::DeleteFilterRequest;

DeleteFilterRequest::DeleteFilterRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "DeleteFilter") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFilterRequest::~DeleteFilterRequest() {}

std::string DeleteFilterRequest::getFilterName() const {
  return filterName_;
}

void DeleteFilterRequest::setFilterName(const std::string &filterName) {
  filterName_ = filterName;
  setParameter(std::string("FilterName"), filterName);
}

