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

#include <alibabacloud/cdn/model/CreateCdnDeliverTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateCdnDeliverTaskRequest;

CreateCdnDeliverTaskRequest::CreateCdnDeliverTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "CreateCdnDeliverTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateCdnDeliverTaskRequest::~CreateCdnDeliverTaskRequest() {}

std::string CreateCdnDeliverTaskRequest::getReports() const {
  return reports_;
}

void CreateCdnDeliverTaskRequest::setReports(const std::string &reports) {
  reports_ = reports;
  setBodyParameter(std::string("Reports"), reports);
}

std::string CreateCdnDeliverTaskRequest::getDeliver() const {
  return deliver_;
}

void CreateCdnDeliverTaskRequest::setDeliver(const std::string &deliver) {
  deliver_ = deliver;
  setBodyParameter(std::string("Deliver"), deliver);
}

std::string CreateCdnDeliverTaskRequest::getDomainName() const {
  return domainName_;
}

void CreateCdnDeliverTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

long CreateCdnDeliverTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCdnDeliverTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCdnDeliverTaskRequest::getSchedule() const {
  return schedule_;
}

void CreateCdnDeliverTaskRequest::setSchedule(const std::string &schedule) {
  schedule_ = schedule;
  setBodyParameter(std::string("Schedule"), schedule);
}

std::string CreateCdnDeliverTaskRequest::getName() const {
  return name_;
}

void CreateCdnDeliverTaskRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

