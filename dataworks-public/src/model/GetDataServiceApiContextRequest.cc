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

#include <alibabacloud/dataworks-public/model/GetDataServiceApiContextRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataServiceApiContextRequest;

GetDataServiceApiContextRequest::GetDataServiceApiContextRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "GetDataServiceApiContext") {
  setMethod(HttpRequest::Method::Get);
}

GetDataServiceApiContextRequest::~GetDataServiceApiContextRequest() {}

int GetDataServiceApiContextRequest::getApiStatus() const {
  return apiStatus_;
}

void GetDataServiceApiContextRequest::setApiStatus(int apiStatus) {
  apiStatus_ = apiStatus;
  setParameter(std::string("ApiStatus"), std::to_string(apiStatus));
}

std::string GetDataServiceApiContextRequest::getCacheKey() const {
  return cacheKey_;
}

void GetDataServiceApiContextRequest::setCacheKey(const std::string &cacheKey) {
  cacheKey_ = cacheKey;
  setParameter(std::string("CacheKey"), cacheKey);
}

long GetDataServiceApiContextRequest::getApiId() const {
  return apiId_;
}

void GetDataServiceApiContextRequest::setApiId(long apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), std::to_string(apiId));
}

bool GetDataServiceApiContextRequest::getVerbose() const {
  return verbose_;
}

void GetDataServiceApiContextRequest::setVerbose(bool verbose) {
  verbose_ = verbose;
  setParameter(std::string("Verbose"), verbose ? "true" : "false");
}

bool GetDataServiceApiContextRequest::getForPrivateResGroup() const {
  return forPrivateResGroup_;
}

void GetDataServiceApiContextRequest::setForPrivateResGroup(bool forPrivateResGroup) {
  forPrivateResGroup_ = forPrivateResGroup;
  setParameter(std::string("ForPrivateResGroup"), forPrivateResGroup ? "true" : "false");
}

