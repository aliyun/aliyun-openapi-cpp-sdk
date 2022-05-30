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

#include <alibabacloud/dataworks-public/model/ListResourceGroupsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListResourceGroupsRequest;

ListResourceGroupsRequest::ListResourceGroupsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListResourceGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceGroupsRequest::~ListResourceGroupsRequest() {}

std::string ListResourceGroupsRequest::getBizExtKey() const {
  return bizExtKey_;
}

void ListResourceGroupsRequest::setBizExtKey(const std::string &bizExtKey) {
  bizExtKey_ = bizExtKey;
  setParameter(std::string("BizExtKey"), bizExtKey);
}

int ListResourceGroupsRequest::getResourceGroupType() const {
  return resourceGroupType_;
}

void ListResourceGroupsRequest::setResourceGroupType(int resourceGroupType) {
  resourceGroupType_ = resourceGroupType;
  setParameter(std::string("ResourceGroupType"), std::to_string(resourceGroupType));
}

std::string ListResourceGroupsRequest::getKeyword() const {
  return keyword_;
}

void ListResourceGroupsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

