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

#include <alibabacloud/resourcecenter/model/UpdateFilterRequest.h>

using AlibabaCloud::ResourceCenter::Model::UpdateFilterRequest;

UpdateFilterRequest::UpdateFilterRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "UpdateFilter") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFilterRequest::~UpdateFilterRequest() {}

std::string UpdateFilterRequest::getFilterName() const {
  return filterName_;
}

void UpdateFilterRequest::setFilterName(const std::string &filterName) {
  filterName_ = filterName;
  setParameter(std::string("FilterName"), filterName);
}

std::string UpdateFilterRequest::getFilterConfiguration() const {
  return filterConfiguration_;
}

void UpdateFilterRequest::setFilterConfiguration(const std::string &filterConfiguration) {
  filterConfiguration_ = filterConfiguration;
  setParameter(std::string("FilterConfiguration"), filterConfiguration);
}

