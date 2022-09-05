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

#include <alibabacloud/arms/model/ListEscalationPoliciesRequest.h>

using AlibabaCloud::ARMS::Model::ListEscalationPoliciesRequest;

ListEscalationPoliciesRequest::ListEscalationPoliciesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListEscalationPolicies") {
  setMethod(HttpRequest::Method::Get);
}

ListEscalationPoliciesRequest::~ListEscalationPoliciesRequest() {}

long ListEscalationPoliciesRequest::getSize() const {
  return size_;
}

void ListEscalationPoliciesRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListEscalationPoliciesRequest::getName() const {
  return name_;
}

void ListEscalationPoliciesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long ListEscalationPoliciesRequest::getPage() const {
  return page_;
}

void ListEscalationPoliciesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

