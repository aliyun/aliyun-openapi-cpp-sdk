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

#include <alibabacloud/arms/model/DescribeWebhookContactsRequest.h>

using AlibabaCloud::ARMS::Model::DescribeWebhookContactsRequest;

DescribeWebhookContactsRequest::DescribeWebhookContactsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribeWebhookContacts") {
  setMethod(HttpRequest::Method::Get);
}

DescribeWebhookContactsRequest::~DescribeWebhookContactsRequest() {}

std::string DescribeWebhookContactsRequest::getWebhookName() const {
  return webhookName_;
}

void DescribeWebhookContactsRequest::setWebhookName(const std::string &webhookName) {
  webhookName_ = webhookName;
  setParameter(std::string("WebhookName"), webhookName);
}

std::string DescribeWebhookContactsRequest::getContactIds() const {
  return contactIds_;
}

void DescribeWebhookContactsRequest::setContactIds(const std::string &contactIds) {
  contactIds_ = contactIds;
  setParameter(std::string("ContactIds"), contactIds);
}

long DescribeWebhookContactsRequest::getSize() const {
  return size_;
}

void DescribeWebhookContactsRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

long DescribeWebhookContactsRequest::getPage() const {
  return page_;
}

void DescribeWebhookContactsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

