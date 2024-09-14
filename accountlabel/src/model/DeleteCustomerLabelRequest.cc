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

#include <alibabacloud/accountlabel/model/DeleteCustomerLabelRequest.h>

using AlibabaCloud::AccountLabel::Model::DeleteCustomerLabelRequest;

DeleteCustomerLabelRequest::DeleteCustomerLabelRequest()
    : RpcServiceRequest("accountlabel", "2020-03-15", "DeleteCustomerLabel") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomerLabelRequest::~DeleteCustomerLabelRequest() {}

std::string DeleteCustomerLabelRequest::getLabelSeries() const {
  return labelSeries_;
}

void DeleteCustomerLabelRequest::setLabelSeries(const std::string &labelSeries) {
  labelSeries_ = labelSeries;
  setParameter(std::string("LabelSeries"), labelSeries);
}

std::string DeleteCustomerLabelRequest::getOrganization() const {
  return organization_;
}

void DeleteCustomerLabelRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

long DeleteCustomerLabelRequest::getPK() const {
  return pK_;
}

void DeleteCustomerLabelRequest::setPK(long pK) {
  pK_ = pK;
  setParameter(std::string("PK"), std::to_string(pK));
}

std::vector<std::string> DeleteCustomerLabelRequest::getLabelTypes() const {
  return labelTypes_;
}

void DeleteCustomerLabelRequest::setLabelTypes(const std::vector<std::string> &labelTypes) {
  labelTypes_ = labelTypes;
}

std::string DeleteCustomerLabelRequest::getUserName() const {
  return userName_;
}

void DeleteCustomerLabelRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

std::string DeleteCustomerLabelRequest::getToken() const {
  return token_;
}

void DeleteCustomerLabelRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

