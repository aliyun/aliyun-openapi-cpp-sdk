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

#include <alibabacloud/mse/model/QuerySwimmingLaneByIdRequest.h>

using AlibabaCloud::Mse::Model::QuerySwimmingLaneByIdRequest;

QuerySwimmingLaneByIdRequest::QuerySwimmingLaneByIdRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QuerySwimmingLaneById") {
  setMethod(HttpRequest::Method::Post);
}

QuerySwimmingLaneByIdRequest::~QuerySwimmingLaneByIdRequest() {}

std::string QuerySwimmingLaneByIdRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QuerySwimmingLaneByIdRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long QuerySwimmingLaneByIdRequest::getLaneId() const {
  return laneId_;
}

void QuerySwimmingLaneByIdRequest::setLaneId(long laneId) {
  laneId_ = laneId;
  setParameter(std::string("LaneId"), std::to_string(laneId));
}

std::string QuerySwimmingLaneByIdRequest::get_Namespace() const {
  return _namespace_;
}

void QuerySwimmingLaneByIdRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string QuerySwimmingLaneByIdRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QuerySwimmingLaneByIdRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

