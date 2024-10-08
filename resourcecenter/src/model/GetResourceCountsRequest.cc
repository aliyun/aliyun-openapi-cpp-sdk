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

#include <alibabacloud/resourcecenter/model/GetResourceCountsRequest.h>

using AlibabaCloud::ResourceCenter::Model::GetResourceCountsRequest;

GetResourceCountsRequest::GetResourceCountsRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "GetResourceCounts") {
  setMethod(HttpRequest::Method::Post);
}

GetResourceCountsRequest::~GetResourceCountsRequest() {}

std::vector<GetResourceCountsRequest::Filter> GetResourceCountsRequest::getFilter() const {
  return filter_;
}

void GetResourceCountsRequest::setFilter(const std::vector<GetResourceCountsRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".MatchType", filterObj.matchType);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

std::string GetResourceCountsRequest::getView() const {
  return view_;
}

void GetResourceCountsRequest::setView(const std::string &view) {
  view_ = view;
  setParameter(std::string("View"), view);
}

std::string GetResourceCountsRequest::getGroupByKey() const {
  return groupByKey_;
}

void GetResourceCountsRequest::setGroupByKey(const std::string &groupByKey) {
  groupByKey_ = groupByKey;
  setParameter(std::string("GroupByKey"), groupByKey);
}

