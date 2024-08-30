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

#include <alibabacloud/domain/model/QueryIntlFixedPriceOrderListRequest.h>

using AlibabaCloud::Domain::Model::QueryIntlFixedPriceOrderListRequest;

QueryIntlFixedPriceOrderListRequest::QueryIntlFixedPriceOrderListRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryIntlFixedPriceOrderList") {
  setMethod(HttpRequest::Method::Post);
}

QueryIntlFixedPriceOrderListRequest::~QueryIntlFixedPriceOrderListRequest() {}

long QueryIntlFixedPriceOrderListRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryIntlFixedPriceOrderListRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryIntlFixedPriceOrderListRequest::getBizId() const {
  return bizId_;
}

void QueryIntlFixedPriceOrderListRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

long QueryIntlFixedPriceOrderListRequest::getPageSize() const {
  return pageSize_;
}

void QueryIntlFixedPriceOrderListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryIntlFixedPriceOrderListRequest::getStatus() const {
  return status_;
}

void QueryIntlFixedPriceOrderListRequest::setStatus(long status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

