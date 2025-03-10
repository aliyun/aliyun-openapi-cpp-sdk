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

#include <alibabacloud/dms-enterprise/model/ListDataLakeCatalogRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDataLakeCatalogRequest;

ListDataLakeCatalogRequest::ListDataLakeCatalogRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDataLakeCatalog") {
  setMethod(HttpRequest::Method::Post);
}

ListDataLakeCatalogRequest::~ListDataLakeCatalogRequest() {}

std::string ListDataLakeCatalogRequest::getSearchKey() const {
  return searchKey_;
}

void ListDataLakeCatalogRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

long ListDataLakeCatalogRequest::getTid() const {
  return tid_;
}

void ListDataLakeCatalogRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListDataLakeCatalogRequest::getDataRegion() const {
  return dataRegion_;
}

void ListDataLakeCatalogRequest::setDataRegion(const std::string &dataRegion) {
  dataRegion_ = dataRegion;
  setParameter(std::string("DataRegion"), dataRegion);
}

