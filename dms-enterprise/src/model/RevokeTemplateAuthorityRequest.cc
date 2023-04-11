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

#include <alibabacloud/dms-enterprise/model/RevokeTemplateAuthorityRequest.h>

using AlibabaCloud::Dms_enterprise::Model::RevokeTemplateAuthorityRequest;

RevokeTemplateAuthorityRequest::RevokeTemplateAuthorityRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "RevokeTemplateAuthority") {
  setMethod(HttpRequest::Method::Post);
}

RevokeTemplateAuthorityRequest::~RevokeTemplateAuthorityRequest() {}

long RevokeTemplateAuthorityRequest::getTid() const {
  return tid_;
}

void RevokeTemplateAuthorityRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long RevokeTemplateAuthorityRequest::getTemplateId() const {
  return templateId_;
}

void RevokeTemplateAuthorityRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string RevokeTemplateAuthorityRequest::getUserIds() const {
  return userIds_;
}

void RevokeTemplateAuthorityRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("UserIds"), userIds);
}

