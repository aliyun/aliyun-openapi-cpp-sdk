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

#include <alibabacloud/bssopenapi/model/QuerySavingsPlansDiscountRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySavingsPlansDiscountRequest;

QuerySavingsPlansDiscountRequest::QuerySavingsPlansDiscountRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySavingsPlansDiscount") {
  setMethod(HttpRequest::Method::Get);
}

QuerySavingsPlansDiscountRequest::~QuerySavingsPlansDiscountRequest() {}

std::string QuerySavingsPlansDiscountRequest::getCommodityCode() const {
  return commodityCode_;
}

void QuerySavingsPlansDiscountRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string QuerySavingsPlansDiscountRequest::getLocale() const {
  return locale_;
}

void QuerySavingsPlansDiscountRequest::setLocale(const std::string &locale) {
  locale_ = locale;
  setParameter(std::string("Locale"), locale);
}

int QuerySavingsPlansDiscountRequest::getPageNum() const {
  return pageNum_;
}

void QuerySavingsPlansDiscountRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QuerySavingsPlansDiscountRequest::getCycle() const {
  return cycle_;
}

void QuerySavingsPlansDiscountRequest::setCycle(const std::string &cycle) {
  cycle_ = cycle;
  setParameter(std::string("Cycle"), cycle);
}

std::string QuerySavingsPlansDiscountRequest::getSpec() const {
  return spec_;
}

void QuerySavingsPlansDiscountRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string QuerySavingsPlansDiscountRequest::getModuleCode() const {
  return moduleCode_;
}

void QuerySavingsPlansDiscountRequest::setModuleCode(const std::string &moduleCode) {
  moduleCode_ = moduleCode;
  setParameter(std::string("ModuleCode"), moduleCode);
}

std::string QuerySavingsPlansDiscountRequest::getPayMode() const {
  return payMode_;
}

void QuerySavingsPlansDiscountRequest::setPayMode(const std::string &payMode) {
  payMode_ = payMode;
  setParameter(std::string("PayMode"), payMode);
}

int QuerySavingsPlansDiscountRequest::getPageSize() const {
  return pageSize_;
}

void QuerySavingsPlansDiscountRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QuerySavingsPlansDiscountRequest::getSpnType() const {
  return spnType_;
}

void QuerySavingsPlansDiscountRequest::setSpnType(const std::string &spnType) {
  spnType_ = spnType;
  setParameter(std::string("SpnType"), spnType);
}

std::string QuerySavingsPlansDiscountRequest::getRegion() const {
  return region_;
}

void QuerySavingsPlansDiscountRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

