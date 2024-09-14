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

#include <alibabacloud/accountlabel/model/QueryCustomerLabelRequest.h>

using AlibabaCloud::AccountLabel::Model::QueryCustomerLabelRequest;

QueryCustomerLabelRequest::QueryCustomerLabelRequest()
    : RpcServiceRequest("accountlabel", "2020-03-15", "QueryCustomerLabel") {
  setMethod(HttpRequest::Method::Post);
}

QueryCustomerLabelRequest::~QueryCustomerLabelRequest() {}

std::string QueryCustomerLabelRequest::getLabelSeries() const {
  return labelSeries_;
}

void QueryCustomerLabelRequest::setLabelSeries(const std::string &labelSeries) {
  labelSeries_ = labelSeries;
  setParameter(std::string("LabelSeries"), labelSeries);
}

long QueryCustomerLabelRequest::getPK() const {
  return pK_;
}

void QueryCustomerLabelRequest::setPK(long pK) {
  pK_ = pK;
  setParameter(std::string("PK"), std::to_string(pK));
}

std::string QueryCustomerLabelRequest::getToken() const {
  return token_;
}

void QueryCustomerLabelRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

bool QueryCustomerLabelRequest::getInstant() const {
  return instant_;
}

void QueryCustomerLabelRequest::setInstant(bool instant) {
  instant_ = instant;
  setParameter(std::string("Instant"), instant ? "true" : "false");
}

