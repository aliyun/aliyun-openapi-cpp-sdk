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

#include <alibabacloud/dms-enterprise/model/ListDataLakeTablebaseInfoRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDataLakeTablebaseInfoRequest;

ListDataLakeTablebaseInfoRequest::ListDataLakeTablebaseInfoRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDataLakeTablebaseInfo") {
  setMethod(HttpRequest::Method::Post);
}

ListDataLakeTablebaseInfoRequest::~ListDataLakeTablebaseInfoRequest() {}

std::string ListDataLakeTablebaseInfoRequest::getSearchKey() const {
  return searchKey_;
}

void ListDataLakeTablebaseInfoRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

long ListDataLakeTablebaseInfoRequest::getTid() const {
  return tid_;
}

void ListDataLakeTablebaseInfoRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListDataLakeTablebaseInfoRequest::getCatalogName() const {
  return catalogName_;
}

void ListDataLakeTablebaseInfoRequest::setCatalogName(const std::string &catalogName) {
  catalogName_ = catalogName;
  setParameter(std::string("CatalogName"), catalogName);
}

int ListDataLakeTablebaseInfoRequest::getRows() const {
  return rows_;
}

void ListDataLakeTablebaseInfoRequest::setRows(int rows) {
  rows_ = rows;
  setParameter(std::string("Rows"), std::to_string(rows));
}

std::string ListDataLakeTablebaseInfoRequest::getDbName() const {
  return dbName_;
}

void ListDataLakeTablebaseInfoRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string ListDataLakeTablebaseInfoRequest::getDataRegion() const {
  return dataRegion_;
}

void ListDataLakeTablebaseInfoRequest::setDataRegion(const std::string &dataRegion) {
  dataRegion_ = dataRegion;
  setParameter(std::string("DataRegion"), dataRegion);
}

int ListDataLakeTablebaseInfoRequest::getPage() const {
  return page_;
}

void ListDataLakeTablebaseInfoRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

