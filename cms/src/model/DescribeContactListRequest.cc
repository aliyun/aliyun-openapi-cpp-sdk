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

#include <alibabacloud/cms/model/DescribeContactListRequest.h>

using AlibabaCloud::Cms::Model::DescribeContactListRequest;

DescribeContactListRequest::DescribeContactListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeContactList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContactListRequest::~DescribeContactListRequest() {}

std::string DescribeContactListRequest::getChanelType() const {
  return chanelType_;
}

void DescribeContactListRequest::setChanelType(const std::string &chanelType) {
  chanelType_ = chanelType;
  setParameter(std::string("ChanelType"), chanelType);
}

int DescribeContactListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeContactListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeContactListRequest::getContactName() const {
  return contactName_;
}

void DescribeContactListRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

int DescribeContactListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeContactListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeContactListRequest::getChanelValue() const {
  return chanelValue_;
}

void DescribeContactListRequest::setChanelValue(const std::string &chanelValue) {
  chanelValue_ = chanelValue;
  setParameter(std::string("ChanelValue"), chanelValue);
}

