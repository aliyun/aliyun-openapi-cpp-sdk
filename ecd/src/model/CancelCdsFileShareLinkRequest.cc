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

#include <alibabacloud/ecd/model/CancelCdsFileShareLinkRequest.h>

using AlibabaCloud::Ecd::Model::CancelCdsFileShareLinkRequest;

CancelCdsFileShareLinkRequest::CancelCdsFileShareLinkRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CancelCdsFileShareLink") {
  setMethod(HttpRequest::Method::Post);
}

CancelCdsFileShareLinkRequest::~CancelCdsFileShareLinkRequest() {}

std::string CancelCdsFileShareLinkRequest::getShareId() const {
  return shareId_;
}

void CancelCdsFileShareLinkRequest::setShareId(const std::string &shareId) {
  shareId_ = shareId;
  setParameter(std::string("ShareId"), shareId);
}

std::string CancelCdsFileShareLinkRequest::getCdsId() const {
  return cdsId_;
}

void CancelCdsFileShareLinkRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

