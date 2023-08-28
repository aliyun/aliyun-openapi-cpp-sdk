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

#include <alibabacloud/eflo/model/ListInstancesByNcdRequest.h>

using AlibabaCloud::Eflo::Model::ListInstancesByNcdRequest;

ListInstancesByNcdRequest::ListInstancesByNcdRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListInstancesByNcd") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancesByNcdRequest::~ListInstancesByNcdRequest() {}

int ListInstancesByNcdRequest::getMaxNcd() const {
  return maxNcd_;
}

void ListInstancesByNcdRequest::setMaxNcd(int maxNcd) {
  maxNcd_ = maxNcd;
  setBodyParameter(std::string("MaxNcd"), std::to_string(maxNcd));
}

std::string ListInstancesByNcdRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstancesByNcdRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ListInstancesByNcdRequest::getRegionId() const {
  return regionId_;
}

void ListInstancesByNcdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListInstancesByNcdRequest::getInstanceType() const {
  return instanceType_;
}

void ListInstancesByNcdRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setBodyParameter(std::string("InstanceType"), instanceType);
}

