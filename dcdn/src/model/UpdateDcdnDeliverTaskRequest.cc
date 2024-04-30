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

#include <alibabacloud/dcdn/model/UpdateDcdnDeliverTaskRequest.h>

using AlibabaCloud::Dcdn::Model::UpdateDcdnDeliverTaskRequest;

UpdateDcdnDeliverTaskRequest::UpdateDcdnDeliverTaskRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "UpdateDcdnDeliverTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDcdnDeliverTaskRequest::~UpdateDcdnDeliverTaskRequest() {}

std::string UpdateDcdnDeliverTaskRequest::getReports() const {
  return reports_;
}

void UpdateDcdnDeliverTaskRequest::setReports(const std::string &reports) {
  reports_ = reports;
  setBodyParameter(std::string("Reports"), reports);
}

std::string UpdateDcdnDeliverTaskRequest::getSchedule() const {
  return schedule_;
}

void UpdateDcdnDeliverTaskRequest::setSchedule(const std::string &schedule) {
  schedule_ = schedule;
  setBodyParameter(std::string("Schedule"), schedule);
}

std::string UpdateDcdnDeliverTaskRequest::getName() const {
  return name_;
}

void UpdateDcdnDeliverTaskRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateDcdnDeliverTaskRequest::getDomainName() const {
  return domainName_;
}

void UpdateDcdnDeliverTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

std::string UpdateDcdnDeliverTaskRequest::getDeliver() const {
  return deliver_;
}

void UpdateDcdnDeliverTaskRequest::setDeliver(const std::string &deliver) {
  deliver_ = deliver;
  setBodyParameter(std::string("Deliver"), deliver);
}

long UpdateDcdnDeliverTaskRequest::getDeliverId() const {
  return deliverId_;
}

void UpdateDcdnDeliverTaskRequest::setDeliverId(long deliverId) {
  deliverId_ = deliverId;
  setBodyParameter(std::string("DeliverId"), std::to_string(deliverId));
}

