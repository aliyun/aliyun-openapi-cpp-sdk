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

#include <alibabacloud/es-serverless/model/ListAccessTokensRequest.h>

using AlibabaCloud::Es_serverless::Model::ListAccessTokensRequest;

ListAccessTokensRequest::ListAccessTokensRequest()
    : RoaServiceRequest("es-serverless", "2022-08-22") {
  setResourcePath("/openapi/xops/tokens"};
  setMethod(HttpRequest::Method::Get);
}

ListAccessTokensRequest::~ListAccessTokensRequest() {}

std::string ListAccessTokensRequest::getTokenId() const {
  return tokenId_;
}

void ListAccessTokensRequest::setTokenId(const std::string &tokenId) {
  tokenId_ = tokenId;
  setParameter(std::string("tokenId"), tokenId);
}

