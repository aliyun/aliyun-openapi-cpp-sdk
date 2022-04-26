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

#include <alibabacloud/ccc/model/UpdateConfigItemsRequest.h>

using AlibabaCloud::CCC::Model::UpdateConfigItemsRequest;

UpdateConfigItemsRequest::UpdateConfigItemsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "UpdateConfigItems") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConfigItemsRequest::~UpdateConfigItemsRequest() {}

std::string UpdateConfigItemsRequest::getConfigItems() const {
  return configItems_;
}

void UpdateConfigItemsRequest::setConfigItems(const std::string &configItems) {
  configItems_ = configItems;
  setParameter(std::string("ConfigItems"), configItems);
}

std::string UpdateConfigItemsRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateConfigItemsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateConfigItemsRequest::getObjectType() const {
  return objectType_;
}

void UpdateConfigItemsRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string UpdateConfigItemsRequest::getObjectId() const {
  return objectId_;
}

void UpdateConfigItemsRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

