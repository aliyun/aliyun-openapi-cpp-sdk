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

#include <alibabacloud/cams/model/SubmitIsvCustomerTermsRequest.h>

using AlibabaCloud::Cams::Model::SubmitIsvCustomerTermsRequest;

SubmitIsvCustomerTermsRequest::SubmitIsvCustomerTermsRequest()
    : RpcServiceRequest("cams", "2020-06-06", "SubmitIsvCustomerTerms") {
  setMethod(HttpRequest::Method::Post);
}

SubmitIsvCustomerTermsRequest::~SubmitIsvCustomerTermsRequest() {}

std::string SubmitIsvCustomerTermsRequest::getOfficeAddress() const {
  return officeAddress_;
}

void SubmitIsvCustomerTermsRequest::setOfficeAddress(const std::string &officeAddress) {
  officeAddress_ = officeAddress;
  setParameter(std::string("OfficeAddress"), officeAddress);
}

std::string SubmitIsvCustomerTermsRequest::getIsvTerms() const {
  return isvTerms_;
}

void SubmitIsvCustomerTermsRequest::setIsvTerms(const std::string &isvTerms) {
  isvTerms_ = isvTerms;
  setParameter(std::string("IsvTerms"), isvTerms);
}

std::string SubmitIsvCustomerTermsRequest::getApiCode() const {
  return apiCode_;
}

void SubmitIsvCustomerTermsRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string SubmitIsvCustomerTermsRequest::getProdCode() const {
  return prodCode_;
}

void SubmitIsvCustomerTermsRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string SubmitIsvCustomerTermsRequest::getContactMail() const {
  return contactMail_;
}

void SubmitIsvCustomerTermsRequest::setContactMail(const std::string &contactMail) {
  contactMail_ = contactMail;
  setParameter(std::string("ContactMail"), contactMail);
}

std::string SubmitIsvCustomerTermsRequest::getCountryId() const {
  return countryId_;
}

void SubmitIsvCustomerTermsRequest::setCountryId(const std::string &countryId) {
  countryId_ = countryId;
  setParameter(std::string("CountryId"), countryId);
}

std::string SubmitIsvCustomerTermsRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void SubmitIsvCustomerTermsRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string SubmitIsvCustomerTermsRequest::getBusinessDesc() const {
  return businessDesc_;
}

void SubmitIsvCustomerTermsRequest::setBusinessDesc(const std::string &businessDesc) {
  businessDesc_ = businessDesc;
  setParameter(std::string("BusinessDesc"), businessDesc);
}

std::string SubmitIsvCustomerTermsRequest::getCustName() const {
  return custName_;
}

void SubmitIsvCustomerTermsRequest::setCustName(const std::string &custName) {
  custName_ = custName;
  setParameter(std::string("CustName"), custName);
}

