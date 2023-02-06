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

#include <alibabacloud/computenestsupplier/model/ListServiceUsagesRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::ListServiceUsagesRequest;

ListServiceUsagesRequest::ListServiceUsagesRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "ListServiceUsages") {
  setMethod(HttpRequest::Method::Post);
}

ListServiceUsagesRequest::~ListServiceUsagesRequest() {}

std::string ListServiceUsagesRequest::getNextToken() const {
  return nextToken_;
}

void ListServiceUsagesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListServiceUsagesRequest::Filter> ListServiceUsagesRequest::getFilter() const {
  return filter_;
}

void ListServiceUsagesRequest::setFilter(const std::vector<ListServiceUsagesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Name", filterObj.name);
  }
}

int ListServiceUsagesRequest::getMaxResults() const {
  return maxResults_;
}

void ListServiceUsagesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

