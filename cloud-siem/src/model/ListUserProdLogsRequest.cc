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

#include <alibabacloud/cloud-siem/model/ListUserProdLogsRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListUserProdLogsRequest;

ListUserProdLogsRequest::ListUserProdLogsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListUserProdLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListUserProdLogsRequest::~ListUserProdLogsRequest() {}

std::string ListUserProdLogsRequest::getRegionId() const {
  return regionId_;
}

void ListUserProdLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListUserProdLogsRequest::getSourceProdCode() const {
  return sourceProdCode_;
}

void ListUserProdLogsRequest::setSourceProdCode(const std::string &sourceProdCode) {
  sourceProdCode_ = sourceProdCode;
  setBodyParameter(std::string("SourceProdCode"), sourceProdCode);
}

std::string ListUserProdLogsRequest::getSourceLogCode() const {
  return sourceLogCode_;
}

void ListUserProdLogsRequest::setSourceLogCode(const std::string &sourceLogCode) {
  sourceLogCode_ = sourceLogCode;
  setBodyParameter(std::string("SourceLogCode"), sourceLogCode);
}

