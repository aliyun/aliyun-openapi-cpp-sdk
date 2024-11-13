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

#include <alibabacloud/push/model/QueryDevicesByAliasRequest.h>

using AlibabaCloud::Push::Model::QueryDevicesByAliasRequest;

QueryDevicesByAliasRequest::QueryDevicesByAliasRequest()
    : RpcServiceRequest("push", "2016-08-01", "QueryDevicesByAlias") {
  setMethod(HttpRequest::Method::Post);
}

QueryDevicesByAliasRequest::~QueryDevicesByAliasRequest() {}

std::string QueryDevicesByAliasRequest::getAlias() const {
  return alias_;
}

void QueryDevicesByAliasRequest::setAlias(const std::string &alias) {
  alias_ = alias;
  setParameter(std::string("Alias"), alias);
}

long QueryDevicesByAliasRequest::getAppKey() const {
  return appKey_;
}

void QueryDevicesByAliasRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

