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

#include <alibabacloud/dms-enterprise/model/ListDataLakeDatabaseRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDataLakeDatabaseRequest;

ListDataLakeDatabaseRequest::ListDataLakeDatabaseRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDataLakeDatabase") {
  setMethod(HttpRequest::Method::Post);
}

ListDataLakeDatabaseRequest::~ListDataLakeDatabaseRequest() {}

std::string ListDataLakeDatabaseRequest::getSearchKey() const {
  return searchKey_;
}

void ListDataLakeDatabaseRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

long ListDataLakeDatabaseRequest::getTid() const {
  return tid_;
}

void ListDataLakeDatabaseRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListDataLakeDatabaseRequest::getNextToken() const {
  return nextToken_;
}

void ListDataLakeDatabaseRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDataLakeDatabaseRequest::getCatalogName() const {
  return catalogName_;
}

void ListDataLakeDatabaseRequest::setCatalogName(const std::string &catalogName) {
  catalogName_ = catalogName;
  setParameter(std::string("CatalogName"), catalogName);
}

std::string ListDataLakeDatabaseRequest::getDataRegion() const {
  return dataRegion_;
}

void ListDataLakeDatabaseRequest::setDataRegion(const std::string &dataRegion) {
  dataRegion_ = dataRegion;
  setParameter(std::string("DataRegion"), dataRegion);
}

int ListDataLakeDatabaseRequest::getMaxResults() const {
  return maxResults_;
}

void ListDataLakeDatabaseRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

