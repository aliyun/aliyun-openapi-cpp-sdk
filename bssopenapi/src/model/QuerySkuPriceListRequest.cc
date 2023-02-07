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

#include <alibabacloud/bssopenapi/model/QuerySkuPriceListRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySkuPriceListRequest;

QuerySkuPriceListRequest::QuerySkuPriceListRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySkuPriceList") {
  setMethod(HttpRequest::Method::Get);
}

QuerySkuPriceListRequest::~QuerySkuPriceListRequest() {}

std::string QuerySkuPriceListRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QuerySkuPriceListRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QuerySkuPriceListRequest::getCommodityCode() const {
  return commodityCode_;
}

void QuerySkuPriceListRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::map<std::string, QuerySkuPriceListRequest::std::vector<std::string>> QuerySkuPriceListRequest::getPriceFactorConditionMap() const {
  return priceFactorConditionMap_;
}

void QuerySkuPriceListRequest::setPriceFactorConditionMap(const std::map<std::string, QuerySkuPriceListRequest::std::vector<std::string>> &priceFactorConditionMap) {
  priceFactorConditionMap_ = priceFactorConditionMap;
  for(auto const &iter1 : priceFactorConditionMap) {
    for(int dep2 = 0; dep2 != iter1.second.size(); dep2++) {
      setParameter(std::string("PriceFactorConditionMap") + "." + iter1.first + "." + std::to_string(dep2 + 1), iter1.second[dep2]);
    }
  }
}

std::string QuerySkuPriceListRequest::getPriceEntityCode() const {
  return priceEntityCode_;
}

void QuerySkuPriceListRequest::setPriceEntityCode(const std::string &priceEntityCode) {
  priceEntityCode_ = priceEntityCode;
  setParameter(std::string("PriceEntityCode"), priceEntityCode);
}

int QuerySkuPriceListRequest::getPageSize() const {
  return pageSize_;
}

void QuerySkuPriceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

