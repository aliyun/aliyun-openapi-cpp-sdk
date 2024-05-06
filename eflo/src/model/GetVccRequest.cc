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

#include <alibabacloud/eflo/model/GetVccRequest.h>

using AlibabaCloud::Eflo::Model::GetVccRequest;

GetVccRequest::GetVccRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetVcc") {
  setMethod(HttpRequest::Method::Post);
}

GetVccRequest::~GetVccRequest() {}

std::string GetVccRequest::getClientToken() const {
  return clientToken_;
}

void GetVccRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

int GetVccRequest::getPageNumber() const {
  return pageNumber_;
}

void GetVccRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetVccRequest::getRegionId() const {
  return regionId_;
}

void GetVccRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool GetVccRequest::getEnablePage() const {
  return enablePage_;
}

void GetVccRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

int GetVccRequest::getPageSize() const {
  return pageSize_;
}

void GetVccRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetVccRequest::getVccId() const {
  return vccId_;
}

void GetVccRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

