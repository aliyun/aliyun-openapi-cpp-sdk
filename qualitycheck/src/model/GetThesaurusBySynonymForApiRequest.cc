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

#include <alibabacloud/qualitycheck/model/GetThesaurusBySynonymForApiRequest.h>

using AlibabaCloud::Qualitycheck::Model::GetThesaurusBySynonymForApiRequest;

GetThesaurusBySynonymForApiRequest::GetThesaurusBySynonymForApiRequest()
    : RpcServiceRequest("qualitycheck", "2019-01-15", "GetThesaurusBySynonymForApi") {
  setMethod(HttpRequest::Method::Post);
}

GetThesaurusBySynonymForApiRequest::~GetThesaurusBySynonymForApiRequest() {}

long GetThesaurusBySynonymForApiRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetThesaurusBySynonymForApiRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetThesaurusBySynonymForApiRequest::getJsonStr() const {
  return jsonStr_;
}

void GetThesaurusBySynonymForApiRequest::setJsonStr(const std::string &jsonStr) {
  jsonStr_ = jsonStr;
  setParameter(std::string("JsonStr"), jsonStr);
}

std::string GetThesaurusBySynonymForApiRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetThesaurusBySynonymForApiRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

