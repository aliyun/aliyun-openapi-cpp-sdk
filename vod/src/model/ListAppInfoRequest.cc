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

#include <alibabacloud/vod/model/ListAppInfoRequest.h>

using AlibabaCloud::Vod::Model::ListAppInfoRequest;

ListAppInfoRequest::ListAppInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "ListAppInfo") {
  setMethod(HttpRequest::Method::Post);
}

ListAppInfoRequest::~ListAppInfoRequest() {}

long ListAppInfoRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void ListAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string ListAppInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListAppInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListAppInfoRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListAppInfoRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int ListAppInfoRequest::getPageSize() const {
  return pageSize_;
}

void ListAppInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

ListAppInfoRequest::Tag ListAppInfoRequest::getTag() const {
  return tag_;
}

void ListAppInfoRequest::setTag(const ListAppInfoRequest::Tag &tag) {
  tag_ = tag;
  setParameter(std::string("Tag") + ".Value", tag.value);
  setParameter(std::string("Tag") + ".Key", tag.key);
}

int ListAppInfoRequest::getPageNo() const {
  return pageNo_;
}

void ListAppInfoRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListAppInfoRequest::getStatus() const {
  return status_;
}

void ListAppInfoRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

