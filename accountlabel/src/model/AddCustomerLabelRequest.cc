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

#include <alibabacloud/accountlabel/model/AddCustomerLabelRequest.h>

using AlibabaCloud::AccountLabel::Model::AddCustomerLabelRequest;

AddCustomerLabelRequest::AddCustomerLabelRequest()
    : RpcServiceRequest("accountlabel", "2020-03-15", "AddCustomerLabel") {
  setMethod(HttpRequest::Method::Post);
}

AddCustomerLabelRequest::~AddCustomerLabelRequest() {}

std::string AddCustomerLabelRequest::getLabelSeries() const {
  return labelSeries_;
}

void AddCustomerLabelRequest::setLabelSeries(const std::string &labelSeries) {
  labelSeries_ = labelSeries;
  setParameter(std::string("LabelSeries"), labelSeries);
}

std::string AddCustomerLabelRequest::getOrganization() const {
  return organization_;
}

void AddCustomerLabelRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

std::string AddCustomerLabelRequest::getEndtime() const {
  return endtime_;
}

void AddCustomerLabelRequest::setEndtime(const std::string &endtime) {
  endtime_ = endtime;
  setParameter(std::string("Endtime"), endtime);
}

long AddCustomerLabelRequest::getPK() const {
  return pK_;
}

void AddCustomerLabelRequest::setPK(long pK) {
  pK_ = pK;
  setParameter(std::string("PK"), std::to_string(pK));
}

std::string AddCustomerLabelRequest::getStartTime() const {
  return startTime_;
}

void AddCustomerLabelRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::vector<std::string> AddCustomerLabelRequest::getLabelTypes() const {
  return labelTypes_;
}

void AddCustomerLabelRequest::setLabelTypes(const std::vector<std::string> &labelTypes) {
  labelTypes_ = labelTypes;
}

std::string AddCustomerLabelRequest::getUserName() const {
  return userName_;
}

void AddCustomerLabelRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

std::string AddCustomerLabelRequest::getToken() const {
  return token_;
}

void AddCustomerLabelRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

