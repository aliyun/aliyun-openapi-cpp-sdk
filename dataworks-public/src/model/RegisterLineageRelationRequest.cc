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

#include <alibabacloud/dataworks-public/model/RegisterLineageRelationRequest.h>

using AlibabaCloud::Dataworks_public::Model::RegisterLineageRelationRequest;

RegisterLineageRelationRequest::RegisterLineageRelationRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RegisterLineageRelation") {
  setMethod(HttpRequest::Method::Post);
}

RegisterLineageRelationRequest::~RegisterLineageRelationRequest() {}

ObjectOfAny RegisterLineageRelationRequest::getLineageRelationRegisterVO() const {
  return lineageRelationRegisterVO_;
}

void RegisterLineageRelationRequest::setLineageRelationRegisterVO(ObjectOfAny lineageRelationRegisterVO) {
  lineageRelationRegisterVO_ = lineageRelationRegisterVO;
  setBodyParameter(std::string("LineageRelationRegisterVO"), std::to_string(lineageRelationRegisterVO));
}

