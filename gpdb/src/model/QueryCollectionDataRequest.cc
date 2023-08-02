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

#include <alibabacloud/gpdb/model/QueryCollectionDataRequest.h>

using AlibabaCloud::Gpdb::Model::QueryCollectionDataRequest;

QueryCollectionDataRequest::QueryCollectionDataRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "QueryCollectionData") {
  setMethod(HttpRequest::Method::Post);
}

QueryCollectionDataRequest::~QueryCollectionDataRequest() {}

long QueryCollectionDataRequest::getTopK() const {
  return topK_;
}

void QueryCollectionDataRequest::setTopK(long topK) {
  topK_ = topK;
  setParameter(std::string("TopK"), std::to_string(topK));
}

std::string QueryCollectionDataRequest::getContent() const {
  return content_;
}

void QueryCollectionDataRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string QueryCollectionDataRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryCollectionDataRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryCollectionDataRequest::getRegionId() const {
  return regionId_;
}

void QueryCollectionDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryCollectionDataRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void QueryCollectionDataRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::vector<QueryCollectionDataRequest::double> QueryCollectionDataRequest::getVector() const {
  return vector_;
}

void QueryCollectionDataRequest::setVector(const std::vector<QueryCollectionDataRequest::double> &vector) {
  vector_ = vector;
  for(int dep1 = 0; dep1 != vector.size(); dep1++) {
    setParameter(std::string("Vector") + "." + std::to_string(dep1 + 1), std::to_string(vector[dep1]));
  }
}

std::string QueryCollectionDataRequest::getCollection() const {
  return collection_;
}

void QueryCollectionDataRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long QueryCollectionDataRequest::getOwnerId() const {
  return ownerId_;
}

void QueryCollectionDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryCollectionDataRequest::getNamespacePassword() const {
  return namespacePassword_;
}

void QueryCollectionDataRequest::setNamespacePassword(const std::string &namespacePassword) {
  namespacePassword_ = namespacePassword;
  setParameter(std::string("NamespacePassword"), namespacePassword);
}

std::string QueryCollectionDataRequest::getFilter() const {
  return filter_;
}

void QueryCollectionDataRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string QueryCollectionDataRequest::get_Namespace() const {
  return _namespace_;
}

void QueryCollectionDataRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

