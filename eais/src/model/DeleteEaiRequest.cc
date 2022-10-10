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

#include <alibabacloud/eais/model/DeleteEaiRequest.h>

using AlibabaCloud::Eais::Model::DeleteEaiRequest;

DeleteEaiRequest::DeleteEaiRequest()
    : RpcServiceRequest("eais", "2019-06-24", "DeleteEai") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEaiRequest::~DeleteEaiRequest() {}

std::string DeleteEaiRequest::getRegionId() const {
  return regionId_;
}

void DeleteEaiRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteEaiRequest::getElasticAcceleratedInstanceId() const {
  return elasticAcceleratedInstanceId_;
}

void DeleteEaiRequest::setElasticAcceleratedInstanceId(const std::string &elasticAcceleratedInstanceId) {
  elasticAcceleratedInstanceId_ = elasticAcceleratedInstanceId;
  setParameter(std::string("ElasticAcceleratedInstanceId"), elasticAcceleratedInstanceId);
}

bool DeleteEaiRequest::getForce() const {
  return force_;
}

void DeleteEaiRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

