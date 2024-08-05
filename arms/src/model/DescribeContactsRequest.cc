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

#include <alibabacloud/arms/model/DescribeContactsRequest.h>

using AlibabaCloud::ARMS::Model::DescribeContactsRequest;

DescribeContactsRequest::DescribeContactsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribeContacts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContactsRequest::~DescribeContactsRequest() {}

std::string DescribeContactsRequest::getContactIds() const {
  return contactIds_;
}

void DescribeContactsRequest::setContactIds(const std::string &contactIds) {
  contactIds_ = contactIds;
  setParameter(std::string("ContactIds"), contactIds);
}

std::string DescribeContactsRequest::getVerbose() const {
  return verbose_;
}

void DescribeContactsRequest::setVerbose(const std::string &verbose) {
  verbose_ = verbose;
  setParameter(std::string("Verbose"), verbose);
}

std::string DescribeContactsRequest::getContactName() const {
  return contactName_;
}

void DescribeContactsRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

long DescribeContactsRequest::getSize() const {
  return size_;
}

void DescribeContactsRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string DescribeContactsRequest::getPhone() const {
  return phone_;
}

void DescribeContactsRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

std::string DescribeContactsRequest::getRegionId() const {
  return regionId_;
}

void DescribeContactsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeContactsRequest::getPage() const {
  return page_;
}

void DescribeContactsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeContactsRequest::getEmail() const {
  return email_;
}

void DescribeContactsRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

