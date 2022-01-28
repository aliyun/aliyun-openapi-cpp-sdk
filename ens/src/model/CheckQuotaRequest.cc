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

#include <alibabacloud/ens/model/CheckQuotaRequest.h>

using AlibabaCloud::Ens::Model::CheckQuotaRequest;

CheckQuotaRequest::CheckQuotaRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CheckQuota") {
  setMethod(HttpRequest::Method::Post);
}

CheckQuotaRequest::~CheckQuotaRequest() {}

std::string CheckQuotaRequest::getGroupUuid() const {
  return groupUuid_;
}

void CheckQuotaRequest::setGroupUuid(const std::string &groupUuid) {
  groupUuid_ = groupUuid;
  setParameter(std::string("GroupUuid"), groupUuid);
}

std::string CheckQuotaRequest::getResourceAttribute() const {
  return resourceAttribute_;
}

void CheckQuotaRequest::setResourceAttribute(const std::string &resourceAttribute) {
  resourceAttribute_ = resourceAttribute;
  setBodyParameter(std::string("ResourceAttribute"), resourceAttribute);
}

long CheckQuotaRequest::getAliUid() const {
  return aliUid_;
}

void CheckQuotaRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

