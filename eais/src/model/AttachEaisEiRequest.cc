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

#include <alibabacloud/eais/model/AttachEaisEiRequest.h>

using AlibabaCloud::Eais::Model::AttachEaisEiRequest;

AttachEaisEiRequest::AttachEaisEiRequest()
    : RpcServiceRequest("eais", "2019-06-24", "AttachEaisEi") {
  setMethod(HttpRequest::Method::Post);
}

AttachEaisEiRequest::~AttachEaisEiRequest() {}

std::string AttachEaisEiRequest::getEiInstanceType() const {
  return eiInstanceType_;
}

void AttachEaisEiRequest::setEiInstanceType(const std::string &eiInstanceType) {
  eiInstanceType_ = eiInstanceType;
  setParameter(std::string("EiInstanceType"), eiInstanceType);
}

std::string AttachEaisEiRequest::getClientInstanceId() const {
  return clientInstanceId_;
}

void AttachEaisEiRequest::setClientInstanceId(const std::string &clientInstanceId) {
  clientInstanceId_ = clientInstanceId;
  setParameter(std::string("ClientInstanceId"), clientInstanceId);
}

std::string AttachEaisEiRequest::getEiInstanceId() const {
  return eiInstanceId_;
}

void AttachEaisEiRequest::setEiInstanceId(const std::string &eiInstanceId) {
  eiInstanceId_ = eiInstanceId;
  setParameter(std::string("EiInstanceId"), eiInstanceId);
}

std::string AttachEaisEiRequest::getRegionId() const {
  return regionId_;
}

void AttachEaisEiRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

