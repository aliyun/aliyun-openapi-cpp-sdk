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

#include <alibabacloud/arms/model/ListAddonsRequest.h>

using AlibabaCloud::ARMS::Model::ListAddonsRequest;

ListAddonsRequest::ListAddonsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListAddons") {
  setMethod(HttpRequest::Method::Post);
}

ListAddonsRequest::~ListAddonsRequest() {}

bool ListAddonsRequest::getRegexp() const {
  return regexp_;
}

void ListAddonsRequest::setRegexp(bool regexp) {
  regexp_ = regexp;
  setParameter(std::string("Regexp"), regexp ? "true" : "false");
}

std::string ListAddonsRequest::getAliyunLang() const {
  return aliyunLang_;
}

void ListAddonsRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string ListAddonsRequest::getSearch() const {
  return search_;
}

void ListAddonsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("Search"), search);
}

std::string ListAddonsRequest::getRegionId() const {
  return regionId_;
}

void ListAddonsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListAddonsRequest::getCategory() const {
  return category_;
}

void ListAddonsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

