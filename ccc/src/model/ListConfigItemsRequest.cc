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

#include <alibabacloud/ccc/model/ListConfigItemsRequest.h>

using AlibabaCloud::CCC::Model::ListConfigItemsRequest;

ListConfigItemsRequest::ListConfigItemsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListConfigItems") {
  setMethod(HttpRequest::Method::Post);
}

ListConfigItemsRequest::~ListConfigItemsRequest() {}

std::string ListConfigItemsRequest::getInstanceId() const {
  return instanceId_;
}

void ListConfigItemsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListConfigItemsRequest::getObjectType() const {
  return objectType_;
}

void ListConfigItemsRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string ListConfigItemsRequest::getObjectId() const {
  return objectId_;
}

void ListConfigItemsRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

