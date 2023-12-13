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

#include <alibabacloud/cloud-siem/model/ListAccountsByLogRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListAccountsByLogRequest;

ListAccountsByLogRequest::ListAccountsByLogRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListAccountsByLog") {
  setMethod(HttpRequest::Method::Post);
}

ListAccountsByLogRequest::~ListAccountsByLogRequest() {}

std::string ListAccountsByLogRequest::getCloudCode() const {
  return cloudCode_;
}

void ListAccountsByLogRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string ListAccountsByLogRequest::getRegionId() const {
  return regionId_;
}

void ListAccountsByLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ListAccountsByLogRequest::getLogCodes() const {
  return logCodes_;
}

void ListAccountsByLogRequest::setLogCodes(const std::vector<std::string> &logCodes) {
  logCodes_ = logCodes;
}

std::string ListAccountsByLogRequest::getProdCode() const {
  return prodCode_;
}

void ListAccountsByLogRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setBodyParameter(std::string("ProdCode"), prodCode);
}

