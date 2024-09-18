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

#include <alibabacloud/quickbi-public/model/QueryWorksBloodRelationshipRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryWorksBloodRelationshipRequest;

QueryWorksBloodRelationshipRequest::QueryWorksBloodRelationshipRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryWorksBloodRelationship") {
  setMethod(HttpRequest::Method::Post);
}

QueryWorksBloodRelationshipRequest::~QueryWorksBloodRelationshipRequest() {}

std::string QueryWorksBloodRelationshipRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryWorksBloodRelationshipRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryWorksBloodRelationshipRequest::getSignType() const {
  return signType_;
}

void QueryWorksBloodRelationshipRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryWorksBloodRelationshipRequest::getApiLevel() const {
  return apiLevel_;
}

void QueryWorksBloodRelationshipRequest::setApiLevel(const std::string &apiLevel) {
  apiLevel_ = apiLevel;
  setParameter(std::string("ApiLevel"), apiLevel);
}

std::string QueryWorksBloodRelationshipRequest::getWorksId() const {
  return worksId_;
}

void QueryWorksBloodRelationshipRequest::setWorksId(const std::string &worksId) {
  worksId_ = worksId;
  setParameter(std::string("WorksId"), worksId);
}

