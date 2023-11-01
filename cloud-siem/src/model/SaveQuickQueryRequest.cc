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

#include <alibabacloud/cloud-siem/model/SaveQuickQueryRequest.h>

using AlibabaCloud::Cloud_siem::Model::SaveQuickQueryRequest;

SaveQuickQueryRequest::SaveQuickQueryRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "SaveQuickQuery") {
  setMethod(HttpRequest::Method::Post);
}

SaveQuickQueryRequest::~SaveQuickQueryRequest() {}

std::string SaveQuickQueryRequest::getRegionId() const {
  return regionId_;
}

void SaveQuickQueryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string SaveQuickQueryRequest::getQuery() const {
  return query_;
}

void SaveQuickQueryRequest::setQuery(const std::string &query) {
  query_ = query;
  setBodyParameter(std::string("Query"), query);
}

std::string SaveQuickQueryRequest::getDisplayName() const {
  return displayName_;
}

void SaveQuickQueryRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setBodyParameter(std::string("DisplayName"), displayName);
}

