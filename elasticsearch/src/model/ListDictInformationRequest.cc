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

#include <alibabacloud/elasticsearch/model/ListDictInformationRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListDictInformationRequest;

ListDictInformationRequest::ListDictInformationRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/dict/_info"};
  setMethod(HttpRequest::Method::Get);
}

ListDictInformationRequest::~ListDictInformationRequest() {}

std::string ListDictInformationRequest::getInstanceId() const {
  return instanceId_;
}

void ListDictInformationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListDictInformationRequest::getAnalyzerType() const {
  return analyzerType_;
}

void ListDictInformationRequest::setAnalyzerType(const std::string &analyzerType) {
  analyzerType_ = analyzerType;
  setParameter(std::string("analyzerType"), analyzerType);
}

std::string ListDictInformationRequest::getBucketName() const {
  return bucketName_;
}

void ListDictInformationRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setParameter(std::string("bucketName"), bucketName);
}

std::string ListDictInformationRequest::getKey() const {
  return key_;
}

void ListDictInformationRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("key"), key);
}

