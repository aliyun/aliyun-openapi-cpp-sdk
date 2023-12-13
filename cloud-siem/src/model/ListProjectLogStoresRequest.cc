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

#include <alibabacloud/cloud-siem/model/ListProjectLogStoresRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListProjectLogStoresRequest;

ListProjectLogStoresRequest::ListProjectLogStoresRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListProjectLogStores") {
  setMethod(HttpRequest::Method::Post);
}

ListProjectLogStoresRequest::~ListProjectLogStoresRequest() {}

long ListProjectLogStoresRequest::getSubUserId() const {
  return subUserId_;
}

void ListProjectLogStoresRequest::setSubUserId(long subUserId) {
  subUserId_ = subUserId;
  setBodyParameter(std::string("SubUserId"), std::to_string(subUserId));
}

std::string ListProjectLogStoresRequest::getRegionId() const {
  return regionId_;
}

void ListProjectLogStoresRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListProjectLogStoresRequest::getSourceProdCode() const {
  return sourceProdCode_;
}

void ListProjectLogStoresRequest::setSourceProdCode(const std::string &sourceProdCode) {
  sourceProdCode_ = sourceProdCode;
  setBodyParameter(std::string("SourceProdCode"), sourceProdCode);
}

std::string ListProjectLogStoresRequest::getSourceLogCode() const {
  return sourceLogCode_;
}

void ListProjectLogStoresRequest::setSourceLogCode(const std::string &sourceLogCode) {
  sourceLogCode_ = sourceLogCode;
  setBodyParameter(std::string("SourceLogCode"), sourceLogCode);
}

