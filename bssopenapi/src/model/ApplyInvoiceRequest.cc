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

#include <alibabacloud/bssopenapi/model/ApplyInvoiceRequest.h>

using AlibabaCloud::BssOpenApi::Model::ApplyInvoiceRequest;

ApplyInvoiceRequest::ApplyInvoiceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ApplyInvoice") {
  setMethod(HttpRequest::Method::Post);
}

ApplyInvoiceRequest::~ApplyInvoiceRequest() {}

int ApplyInvoiceRequest::getInvoicingType() const {
  return invoicingType_;
}

void ApplyInvoiceRequest::setInvoicingType(int invoicingType) {
  invoicingType_ = invoicingType;
  setParameter(std::string("InvoicingType"), std::to_string(invoicingType));
}

int ApplyInvoiceRequest::getProcessWay() const {
  return processWay_;
}

void ApplyInvoiceRequest::setProcessWay(int processWay) {
  processWay_ = processWay;
  setParameter(std::string("ProcessWay"), std::to_string(processWay));
}

long ApplyInvoiceRequest::getOwnerId() const {
  return ownerId_;
}

void ApplyInvoiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long ApplyInvoiceRequest::getInvoiceAmount() const {
  return invoiceAmount_;
}

void ApplyInvoiceRequest::setInvoiceAmount(long invoiceAmount) {
  invoiceAmount_ = invoiceAmount;
  setParameter(std::string("InvoiceAmount"), std::to_string(invoiceAmount));
}

long ApplyInvoiceRequest::getAddressId() const {
  return addressId_;
}

void ApplyInvoiceRequest::setAddressId(long addressId) {
  addressId_ = addressId;
  setParameter(std::string("AddressId"), std::to_string(addressId));
}

std::string ApplyInvoiceRequest::getApplyUserNick() const {
  return applyUserNick_;
}

void ApplyInvoiceRequest::setApplyUserNick(const std::string &applyUserNick) {
  applyUserNick_ = applyUserNick;
  setParameter(std::string("ApplyUserNick"), applyUserNick);
}

bool ApplyInvoiceRequest::getInvoiceByAmount() const {
  return invoiceByAmount_;
}

void ApplyInvoiceRequest::setInvoiceByAmount(bool invoiceByAmount) {
  invoiceByAmount_ = invoiceByAmount;
  setParameter(std::string("InvoiceByAmount"), invoiceByAmount ? "true" : "false");
}

long ApplyInvoiceRequest::getCustomerId() const {
  return customerId_;
}

void ApplyInvoiceRequest::setCustomerId(long customerId) {
  customerId_ = customerId;
  setParameter(std::string("CustomerId"), std::to_string(customerId));
}

std::vector<long> ApplyInvoiceRequest::getSelectedIds() const {
  return selectedIds_;
}

void ApplyInvoiceRequest::setSelectedIds(const std::vector<long> &selectedIds) {
  selectedIds_ = selectedIds;
}

std::string ApplyInvoiceRequest::getUserRemark() const {
  return userRemark_;
}

void ApplyInvoiceRequest::setUserRemark(const std::string &userRemark) {
  userRemark_ = userRemark;
  setParameter(std::string("UserRemark"), userRemark);
}

