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

RegisterLineageRelationRequest::LineageRelationRegisterVO RegisterLineageRelationRequest::getLineageRelationRegisterVO() const {
  return lineageRelationRegisterVO_;
}

void RegisterLineageRelationRequest::setLineageRelationRegisterVO(const RegisterLineageRelationRequest::LineageRelationRegisterVO &lineageRelationRegisterVO) {
  lineageRelationRegisterVO_ = lineageRelationRegisterVO;
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".DestEntity.ParentName", lineageRelationRegisterVO.destEntity.parentName);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".DestEntity.QualifiedName", lineageRelationRegisterVO.destEntity.qualifiedName);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".DestEntity.Name", lineageRelationRegisterVO.destEntity.name);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".DestEntity.DetailUrl", lineageRelationRegisterVO.destEntity.detailUrl);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".CreateTimestamp", std::to_string(lineageRelationRegisterVO.createTimestamp));
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".Relationship.Type", lineageRelationRegisterVO.relationship.type);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".SrcEntity.ParentName", lineageRelationRegisterVO.srcEntity.parentName);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".SrcEntity.QualifiedName", lineageRelationRegisterVO.srcEntity.qualifiedName);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".SrcEntity.Name", lineageRelationRegisterVO.srcEntity.name);
  setBodyParameter(std::string("LineageRelationRegisterVO") + ".SrcEntity.DetailUrl", lineageRelationRegisterVO.srcEntity.detailUrl);
}

