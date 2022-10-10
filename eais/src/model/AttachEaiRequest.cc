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

#include <alibabacloud/eais/model/AttachEaiRequest.h>

using AlibabaCloud::Eais::Model::AttachEaiRequest;

AttachEaiRequest::AttachEaiRequest()
    : RpcServiceRequest("eais", "2019-06-24", "AttachEai") {
  setMethod(HttpRequest::Method::Post);
}

AttachEaiRequest::~AttachEaiRequest() {}

std::string AttachEaiRequest::getClientInstanceId() const {
  return clientInstanceId_;
}

void AttachEaiRequest::setClientInstanceId(const std::string &clientInstanceId) {
  clientInstanceId_ = clientInstanceId;
  setParameter(std::string("ClientInstanceId"), clientInstanceId);
}

std::string AttachEaiRequest::getRegionId() const {
  return regionId_;
}

void AttachEaiRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachEaiRequest::getElasticAcceleratedInstanceId() const {
  return elasticAcceleratedInstanceId_;
}

void AttachEaiRequest::setElasticAcceleratedInstanceId(const std::string &elasticAcceleratedInstanceId) {
  elasticAcceleratedInstanceId_ = elasticAcceleratedInstanceId;
  setParameter(std::string("ElasticAcceleratedInstanceId"), elasticAcceleratedInstanceId);
}

