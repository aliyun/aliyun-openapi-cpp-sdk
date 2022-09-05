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

#include <alibabacloud/arms/model/ListOnCallSchedulesRequest.h>

using AlibabaCloud::ARMS::Model::ListOnCallSchedulesRequest;

ListOnCallSchedulesRequest::ListOnCallSchedulesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListOnCallSchedules") {
  setMethod(HttpRequest::Method::Get);
}

ListOnCallSchedulesRequest::~ListOnCallSchedulesRequest() {}

long ListOnCallSchedulesRequest::getSize() const {
  return size_;
}

void ListOnCallSchedulesRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListOnCallSchedulesRequest::getName() const {
  return name_;
}

void ListOnCallSchedulesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long ListOnCallSchedulesRequest::getPage() const {
  return page_;
}

void ListOnCallSchedulesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

