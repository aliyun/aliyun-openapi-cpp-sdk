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

#include <alibabacloud/arms/model/SearchAlertContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertContactGroupRequest;

SearchAlertContactGroupRequest::SearchAlertContactGroupRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SearchAlertContactGroup") {
  setMethod(HttpRequest::Method::Post);
}

SearchAlertContactGroupRequest::~SearchAlertContactGroupRequest() {}

long SearchAlertContactGroupRequest::getContactId() const {
  return contactId_;
}

void SearchAlertContactGroupRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), std::to_string(contactId));
}

bool SearchAlertContactGroupRequest::getIsDetail() const {
  return isDetail_;
}

void SearchAlertContactGroupRequest::setIsDetail(bool isDetail) {
  isDetail_ = isDetail;
  setParameter(std::string("IsDetail"), isDetail ? "true" : "false");
}

std::string SearchAlertContactGroupRequest::getContactGroupName() const {
  return contactGroupName_;
}

void SearchAlertContactGroupRequest::setContactGroupName(const std::string &contactGroupName) {
  contactGroupName_ = contactGroupName;
  setParameter(std::string("ContactGroupName"), contactGroupName);
}

std::string SearchAlertContactGroupRequest::getProxyUserId() const {
  return proxyUserId_;
}

void SearchAlertContactGroupRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string SearchAlertContactGroupRequest::getContactName() const {
  return contactName_;
}

void SearchAlertContactGroupRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string SearchAlertContactGroupRequest::getRegionId() const {
  return regionId_;
}

void SearchAlertContactGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SearchAlertContactGroupRequest::getContactGroupIds() const {
  return contactGroupIds_;
}

void SearchAlertContactGroupRequest::setContactGroupIds(const std::string &contactGroupIds) {
  contactGroupIds_ = contactGroupIds;
  setParameter(std::string("ContactGroupIds"), contactGroupIds);
}

