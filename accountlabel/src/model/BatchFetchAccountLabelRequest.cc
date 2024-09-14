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

#include <alibabacloud/accountlabel/model/BatchFetchAccountLabelRequest.h>

using AlibabaCloud::AccountLabel::Model::BatchFetchAccountLabelRequest;

BatchFetchAccountLabelRequest::BatchFetchAccountLabelRequest()
    : RpcServiceRequest("accountlabel", "2020-03-15", "BatchFetchAccountLabel") {
  setMethod(HttpRequest::Method::Post);
}

BatchFetchAccountLabelRequest::~BatchFetchAccountLabelRequest() {}

std::string BatchFetchAccountLabelRequest::getOrganization() const {
  return organization_;
}

void BatchFetchAccountLabelRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

long BatchFetchAccountLabelRequest::getPk() const {
  return pk_;
}

void BatchFetchAccountLabelRequest::setPk(long pk) {
  pk_ = pk;
  setParameter(std::string("Pk"), std::to_string(pk));
}

std::string BatchFetchAccountLabelRequest::getUserName() const {
  return userName_;
}

void BatchFetchAccountLabelRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

bool BatchFetchAccountLabelRequest::getInstant() const {
  return instant_;
}

void BatchFetchAccountLabelRequest::setInstant(bool instant) {
  instant_ = instant;
  setParameter(std::string("Instant"), instant ? "true" : "false");
}

std::string BatchFetchAccountLabelRequest::getToken() const {
  return token_;
}

void BatchFetchAccountLabelRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::vector<BatchFetchAccountLabelRequest::std::string> BatchFetchAccountLabelRequest::getLabelSeriesList() const {
  return labelSeriesList_;
}

void BatchFetchAccountLabelRequest::setLabelSeriesList(const std::vector<BatchFetchAccountLabelRequest::std::string> &labelSeriesList) {
  labelSeriesList_ = labelSeriesList;
  for(int dep1 = 0; dep1 != labelSeriesList.size(); dep1++) {
    setParameter(std::string("LabelSeriesList") + "." + std::to_string(dep1 + 1), labelSeriesList[dep1]);
  }
}

