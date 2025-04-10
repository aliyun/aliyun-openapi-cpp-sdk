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

#include <alibabacloud/drds/model/CreateOrderForRdsRequest.h>

using AlibabaCloud::Drds::Model::CreateOrderForRdsRequest;

CreateOrderForRdsRequest::CreateOrderForRdsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "CreateOrderForRds") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrderForRdsRequest::~CreateOrderForRdsRequest() {}

std::string CreateOrderForRdsRequest::getParams() const {
  return params_;
}

void CreateOrderForRdsRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string CreateOrderForRdsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateOrderForRdsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateOrderForRdsRequest::getRegionId() const {
  return regionId_;
}

void CreateOrderForRdsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

