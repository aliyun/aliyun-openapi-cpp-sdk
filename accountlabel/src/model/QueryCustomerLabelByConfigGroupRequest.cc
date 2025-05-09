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

#include <alibabacloud/accountlabel/model/QueryCustomerLabelByConfigGroupRequest.h>

using AlibabaCloud::AccountLabel::Model::QueryCustomerLabelByConfigGroupRequest;

QueryCustomerLabelByConfigGroupRequest::QueryCustomerLabelByConfigGroupRequest()
    : RpcServiceRequest("accountlabel", "2020-03-15", "QueryCustomerLabelByConfigGroup") {
  setMethod(HttpRequest::Method::Post);
}

QueryCustomerLabelByConfigGroupRequest::~QueryCustomerLabelByConfigGroupRequest() {}

std::string QueryCustomerLabelByConfigGroupRequest::getGroupType() const {
  return groupType_;
}

void QueryCustomerLabelByConfigGroupRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

long QueryCustomerLabelByConfigGroupRequest::getPK() const {
  return pK_;
}

void QueryCustomerLabelByConfigGroupRequest::setPK(long pK) {
  pK_ = pK;
  setParameter(std::string("PK"), std::to_string(pK));
}

std::string QueryCustomerLabelByConfigGroupRequest::getToken() const {
  return token_;
}

void QueryCustomerLabelByConfigGroupRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

