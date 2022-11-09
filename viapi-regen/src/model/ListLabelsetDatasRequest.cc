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

#include <alibabacloud/viapi-regen/model/ListLabelsetDatasRequest.h>

using AlibabaCloud::Viapi_regen::Model::ListLabelsetDatasRequest;

ListLabelsetDatasRequest::ListLabelsetDatasRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ListLabelsetDatas") {
  setMethod(HttpRequest::Method::Post);
}

ListLabelsetDatasRequest::~ListLabelsetDatasRequest() {}

long ListLabelsetDatasRequest::getPageSize() const {
  return pageSize_;
}

void ListLabelsetDatasRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLabelsetDatasRequest::getValue() const {
  return value_;
}

void ListLabelsetDatasRequest::setValue(const std::string &value) {
  value_ = value;
  setBodyParameter(std::string("Value"), value);
}

long ListLabelsetDatasRequest::getCurrentPage() const {
  return currentPage_;
}

void ListLabelsetDatasRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

bool ListLabelsetDatasRequest::getIsAbandon() const {
  return isAbandon_;
}

void ListLabelsetDatasRequest::setIsAbandon(bool isAbandon) {
  isAbandon_ = isAbandon;
  setBodyParameter(std::string("IsAbandon"), isAbandon ? "true" : "false");
}

long ListLabelsetDatasRequest::getLabelId() const {
  return labelId_;
}

void ListLabelsetDatasRequest::setLabelId(long labelId) {
  labelId_ = labelId;
  setBodyParameter(std::string("LabelId"), std::to_string(labelId));
}

std::string ListLabelsetDatasRequest::getName() const {
  return name_;
}

void ListLabelsetDatasRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string ListLabelsetDatasRequest::getOperation() const {
  return operation_;
}

void ListLabelsetDatasRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setBodyParameter(std::string("Operation"), operation);
}

