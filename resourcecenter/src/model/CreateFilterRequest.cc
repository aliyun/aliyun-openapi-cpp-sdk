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

#include <alibabacloud/resourcecenter/model/CreateFilterRequest.h>

using AlibabaCloud::ResourceCenter::Model::CreateFilterRequest;

CreateFilterRequest::CreateFilterRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "CreateFilter") {
  setMethod(HttpRequest::Method::Post);
}

CreateFilterRequest::~CreateFilterRequest() {}

std::string CreateFilterRequest::getFilterName() const {
  return filterName_;
}

void CreateFilterRequest::setFilterName(const std::string &filterName) {
  filterName_ = filterName;
  setParameter(std::string("FilterName"), filterName);
}

std::string CreateFilterRequest::getFilterConfiguration() const {
  return filterConfiguration_;
}

void CreateFilterRequest::setFilterConfiguration(const std::string &filterConfiguration) {
  filterConfiguration_ = filterConfiguration;
  setParameter(std::string("FilterConfiguration"), filterConfiguration);
}

