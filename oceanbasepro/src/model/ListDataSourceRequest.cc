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

#include <alibabacloud/oceanbasepro/model/ListDataSourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::ListDataSourceRequest;

ListDataSourceRequest::ListDataSourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ListDataSource") {
  setMethod(HttpRequest::Method::Post);
}

ListDataSourceRequest::~ListDataSourceRequest() {}

std::vector<ListDataSourceRequest::std::string> ListDataSourceRequest::getTypes() const {
  return types_;
}

void ListDataSourceRequest::setTypes(const std::vector<ListDataSourceRequest::std::string> &types) {
  types_ = types;
  for(int dep1 = 0; dep1 != types.size(); dep1++) {
    setBodyParameter(std::string("Types") + "." + std::to_string(dep1 + 1), types[dep1]);
  }
}

std::string ListDataSourceRequest::getSearchKey() const {
  return searchKey_;
}

void ListDataSourceRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

std::string ListDataSourceRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataSourceRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), pageNumber);
}

std::string ListDataSourceRequest::getPageSize() const {
  return pageSize_;
}

void ListDataSourceRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), pageSize);
}

std::string ListDataSourceRequest::getSortField() const {
  return sortField_;
}

void ListDataSourceRequest::setSortField(const std::string &sortField) {
  sortField_ = sortField;
  setBodyParameter(std::string("SortField"), sortField);
}

std::string ListDataSourceRequest::getOrder() const {
  return order_;
}

void ListDataSourceRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

