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

#include <alibabacloud/appstream-center/model/ListNodeInstanceTypeRequest.h>

using AlibabaCloud::Appstream_center::Model::ListNodeInstanceTypeRequest;

ListNodeInstanceTypeRequest::ListNodeInstanceTypeRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ListNodeInstanceType") {
  setMethod(HttpRequest::Method::Post);
}

ListNodeInstanceTypeRequest::~ListNodeInstanceTypeRequest() {}

std::string ListNodeInstanceTypeRequest::getBizRegionId() const {
  return bizRegionId_;
}

void ListNodeInstanceTypeRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setParameter(std::string("BizRegionId"), bizRegionId);
}

std::string ListNodeInstanceTypeRequest::getLanguage() const {
  return language_;
}

void ListNodeInstanceTypeRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string ListNodeInstanceTypeRequest::getOsType() const {
  return osType_;
}

void ListNodeInstanceTypeRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

int ListNodeInstanceTypeRequest::getPageNumber() const {
  return pageNumber_;
}

void ListNodeInstanceTypeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListNodeInstanceTypeRequest::getProductType() const {
  return productType_;
}

void ListNodeInstanceTypeRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int ListNodeInstanceTypeRequest::getPageSize() const {
  return pageSize_;
}

void ListNodeInstanceTypeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

