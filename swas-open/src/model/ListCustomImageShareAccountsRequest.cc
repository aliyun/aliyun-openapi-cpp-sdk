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

#include <alibabacloud/swas-open/model/ListCustomImageShareAccountsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListCustomImageShareAccountsRequest;

ListCustomImageShareAccountsRequest::ListCustomImageShareAccountsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListCustomImageShareAccounts") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomImageShareAccountsRequest::~ListCustomImageShareAccountsRequest() {}

std::string ListCustomImageShareAccountsRequest::getImageId() const {
  return imageId_;
}

void ListCustomImageShareAccountsRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ListCustomImageShareAccountsRequest::getClientToken() const {
  return clientToken_;
}

void ListCustomImageShareAccountsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int ListCustomImageShareAccountsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomImageShareAccountsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCustomImageShareAccountsRequest::getRegionId() const {
  return regionId_;
}

void ListCustomImageShareAccountsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListCustomImageShareAccountsRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomImageShareAccountsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

