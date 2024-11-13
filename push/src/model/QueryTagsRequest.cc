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

#include <alibabacloud/push/model/QueryTagsRequest.h>

using AlibabaCloud::Push::Model::QueryTagsRequest;

QueryTagsRequest::QueryTagsRequest()
    : RpcServiceRequest("push", "2016-08-01", "QueryTags") {
  setMethod(HttpRequest::Method::Post);
}

QueryTagsRequest::~QueryTagsRequest() {}

std::string QueryTagsRequest::getKeyType() const {
  return keyType_;
}

void QueryTagsRequest::setKeyType(const std::string &keyType) {
  keyType_ = keyType;
  setParameter(std::string("KeyType"), keyType);
}

std::string QueryTagsRequest::getClientKey() const {
  return clientKey_;
}

void QueryTagsRequest::setClientKey(const std::string &clientKey) {
  clientKey_ = clientKey;
  setParameter(std::string("ClientKey"), clientKey);
}

long QueryTagsRequest::getAppKey() const {
  return appKey_;
}

void QueryTagsRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

