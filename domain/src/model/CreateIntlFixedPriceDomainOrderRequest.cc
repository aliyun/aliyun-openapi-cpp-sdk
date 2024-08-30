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

#include <alibabacloud/domain/model/CreateIntlFixedPriceDomainOrderRequest.h>

using AlibabaCloud::Domain::Model::CreateIntlFixedPriceDomainOrderRequest;

CreateIntlFixedPriceDomainOrderRequest::CreateIntlFixedPriceDomainOrderRequest()
    : RpcServiceRequest("domain", "2018-01-29", "CreateIntlFixedPriceDomainOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateIntlFixedPriceDomainOrderRequest::~CreateIntlFixedPriceDomainOrderRequest() {}

bool CreateIntlFixedPriceDomainOrderRequest::getAutoPay() const {
  return autoPay_;
}

void CreateIntlFixedPriceDomainOrderRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

long CreateIntlFixedPriceDomainOrderRequest::getContactId() const {
  return contactId_;
}

void CreateIntlFixedPriceDomainOrderRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), std::to_string(contactId));
}

long CreateIntlFixedPriceDomainOrderRequest::getExpectedPrice() const {
  return expectedPrice_;
}

void CreateIntlFixedPriceDomainOrderRequest::setExpectedPrice(long expectedPrice) {
  expectedPrice_ = expectedPrice;
  setParameter(std::string("ExpectedPrice"), std::to_string(expectedPrice));
}

std::string CreateIntlFixedPriceDomainOrderRequest::getDomain() const {
  return domain_;
}

void CreateIntlFixedPriceDomainOrderRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

