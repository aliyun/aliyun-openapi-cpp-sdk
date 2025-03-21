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

#include <alibabacloud/eiam/model/ListApplicationsRequest.h>

using AlibabaCloud::Eiam::Model::ListApplicationsRequest;

ListApplicationsRequest::ListApplicationsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListApplications") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsRequest::~ListApplicationsRequest() {}

std::string ListApplicationsRequest::getResourceServerStatus() const {
  return resourceServerStatus_;
}

void ListApplicationsRequest::setResourceServerStatus(const std::string &resourceServerStatus) {
  resourceServerStatus_ = resourceServerStatus;
  setParameter(std::string("ResourceServerStatus"), resourceServerStatus);
}

long ListApplicationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListApplicationsRequest::getM2MClientStatus() const {
  return m2MClientStatus_;
}

void ListApplicationsRequest::setM2MClientStatus(const std::string &m2MClientStatus) {
  m2MClientStatus_ = m2MClientStatus;
  setParameter(std::string("M2MClientStatus"), m2MClientStatus);
}

long ListApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationsRequest::getAuthorizationType() const {
  return authorizationType_;
}

void ListApplicationsRequest::setAuthorizationType(const std::string &authorizationType) {
  authorizationType_ = authorizationType;
  setParameter(std::string("AuthorizationType"), authorizationType);
}

std::string ListApplicationsRequest::getApplicationName() const {
  return applicationName_;
}

void ListApplicationsRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

std::vector<ListApplicationsRequest::std::string> ListApplicationsRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListApplicationsRequest::setApplicationIds(const std::vector<ListApplicationsRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string ListApplicationsRequest::getInstanceId() const {
  return instanceId_;
}

void ListApplicationsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListApplicationsRequest::getSsoType() const {
  return ssoType_;
}

void ListApplicationsRequest::setSsoType(const std::string &ssoType) {
  ssoType_ = ssoType;
  setParameter(std::string("SsoType"), ssoType);
}

std::string ListApplicationsRequest::getStatus() const {
  return status_;
}

void ListApplicationsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

