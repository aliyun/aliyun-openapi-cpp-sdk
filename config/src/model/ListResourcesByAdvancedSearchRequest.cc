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

#include <alibabacloud/config/model/ListResourcesByAdvancedSearchRequest.h>

using AlibabaCloud::Config::Model::ListResourcesByAdvancedSearchRequest;

ListResourcesByAdvancedSearchRequest::ListResourcesByAdvancedSearchRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListResourcesByAdvancedSearch") {
  setMethod(HttpRequest::Method::Post);
}

ListResourcesByAdvancedSearchRequest::~ListResourcesByAdvancedSearchRequest() {}

std::string ListResourcesByAdvancedSearchRequest::getSql() const {
  return sql_;
}

void ListResourcesByAdvancedSearchRequest::setSql(const std::string &sql) {
  sql_ = sql;
  setParameter(std::string("Sql"), sql);
}

