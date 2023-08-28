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

#include <alibabacloud/eflo/model/QueryInstanceNcdRequest.h>

using AlibabaCloud::Eflo::Model::QueryInstanceNcdRequest;

QueryInstanceNcdRequest::QueryInstanceNcdRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "QueryInstanceNcd") {
  setMethod(HttpRequest::Method::Post);
}

QueryInstanceNcdRequest::~QueryInstanceNcdRequest() {}

std::string QueryInstanceNcdRequest::getInstanceId2() const {
  return instanceId2_;
}

void QueryInstanceNcdRequest::setInstanceId2(const std::string &instanceId2) {
  instanceId2_ = instanceId2;
  setBodyParameter(std::string("InstanceId2"), instanceId2);
}

std::string QueryInstanceNcdRequest::getRegionId() const {
  return regionId_;
}

void QueryInstanceNcdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string QueryInstanceNcdRequest::getInstanceId1() const {
  return instanceId1_;
}

void QueryInstanceNcdRequest::setInstanceId1(const std::string &instanceId1) {
  instanceId1_ = instanceId1;
  setBodyParameter(std::string("InstanceId1"), instanceId1);
}

std::string QueryInstanceNcdRequest::getInstanceType() const {
  return instanceType_;
}

void QueryInstanceNcdRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setBodyParameter(std::string("InstanceType"), instanceType);
}

