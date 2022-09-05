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

#include <alibabacloud/cdn/model/UpdateCdnDeliverTaskRequest.h>

using AlibabaCloud::Cdn::Model::UpdateCdnDeliverTaskRequest;

UpdateCdnDeliverTaskRequest::UpdateCdnDeliverTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "UpdateCdnDeliverTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCdnDeliverTaskRequest::~UpdateCdnDeliverTaskRequest() {}

std::string UpdateCdnDeliverTaskRequest::getReports() const {
  return reports_;
}

void UpdateCdnDeliverTaskRequest::setReports(const std::string &reports) {
  reports_ = reports;
  setBodyParameter(std::string("Reports"), reports);
}

std::string UpdateCdnDeliverTaskRequest::getDeliver() const {
  return deliver_;
}

void UpdateCdnDeliverTaskRequest::setDeliver(const std::string &deliver) {
  deliver_ = deliver;
  setBodyParameter(std::string("Deliver"), deliver);
}

long UpdateCdnDeliverTaskRequest::getDeliverId() const {
  return deliverId_;
}

void UpdateCdnDeliverTaskRequest::setDeliverId(long deliverId) {
  deliverId_ = deliverId;
  setBodyParameter(std::string("DeliverId"), std::to_string(deliverId));
}

std::string UpdateCdnDeliverTaskRequest::getDomainName() const {
  return domainName_;
}

void UpdateCdnDeliverTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

long UpdateCdnDeliverTaskRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateCdnDeliverTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateCdnDeliverTaskRequest::getSchedule() const {
  return schedule_;
}

void UpdateCdnDeliverTaskRequest::setSchedule(const std::string &schedule) {
  schedule_ = schedule;
  setBodyParameter(std::string("Schedule"), schedule);
}

std::string UpdateCdnDeliverTaskRequest::getName() const {
  return name_;
}

void UpdateCdnDeliverTaskRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

