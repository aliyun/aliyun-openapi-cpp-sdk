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

#include <alibabacloud/live/model/DeleteMultiRateConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteMultiRateConfigRequest;

DeleteMultiRateConfigRequest::DeleteMultiRateConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteMultiRateConfig") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMultiRateConfigRequest::~DeleteMultiRateConfigRequest() {}

std::string DeleteMultiRateConfigRequest::getDeleteAll() const {
  return deleteAll_;
}

void DeleteMultiRateConfigRequest::setDeleteAll(const std::string &deleteAll) {
  deleteAll_ = deleteAll;
  setParameter(std::string("DeleteAll"), deleteAll);
}

std::string DeleteMultiRateConfigRequest::getApp() const {
  return app_;
}

void DeleteMultiRateConfigRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string DeleteMultiRateConfigRequest::getGroupId() const {
  return groupId_;
}

void DeleteMultiRateConfigRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DeleteMultiRateConfigRequest::getTemplates() const {
  return templates_;
}

void DeleteMultiRateConfigRequest::setTemplates(const std::string &templates) {
  templates_ = templates;
  setParameter(std::string("Templates"), templates);
}

std::string DeleteMultiRateConfigRequest::getDomainName() const {
  return domainName_;
}

void DeleteMultiRateConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteMultiRateConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteMultiRateConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

