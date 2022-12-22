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

#include <alibabacloud/dataworks-public/model/GetMetaCollectionDetailRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaCollectionDetailRequest;

GetMetaCollectionDetailRequest::GetMetaCollectionDetailRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaCollectionDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaCollectionDetailRequest::~GetMetaCollectionDetailRequest() {}

std::string GetMetaCollectionDetailRequest::getQualifiedName() const {
  return qualifiedName_;
}

void GetMetaCollectionDetailRequest::setQualifiedName(const std::string &qualifiedName) {
  qualifiedName_ = qualifiedName;
  setParameter(std::string("QualifiedName"), qualifiedName);
}

