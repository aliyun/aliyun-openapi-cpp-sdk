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

#include <alibabacloud/ens/model/ListObjectsRequest.h>

using AlibabaCloud::Ens::Model::ListObjectsRequest;

ListObjectsRequest::ListObjectsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ListObjects") {
  setMethod(HttpRequest::Method::Post);
}

ListObjectsRequest::~ListObjectsRequest() {}

long ListObjectsRequest::getMaxKeys() const {
  return maxKeys_;
}

void ListObjectsRequest::setMaxKeys(long maxKeys) {
  maxKeys_ = maxKeys;
  setParameter(std::string("MaxKeys"), std::to_string(maxKeys));
}

std::string ListObjectsRequest::getContinuationToken() const {
  return continuationToken_;
}

void ListObjectsRequest::setContinuationToken(const std::string &continuationToken) {
  continuationToken_ = continuationToken;
  setParameter(std::string("ContinuationToken"), continuationToken);
}

std::string ListObjectsRequest::getPrefix() const {
  return prefix_;
}

void ListObjectsRequest::setPrefix(const std::string &prefix) {
  prefix_ = prefix;
  setParameter(std::string("Prefix"), prefix);
}

std::string ListObjectsRequest::getDelimiter() const {
  return delimiter_;
}

void ListObjectsRequest::setDelimiter(const std::string &delimiter) {
  delimiter_ = delimiter;
  setParameter(std::string("Delimiter"), delimiter);
}

std::string ListObjectsRequest::getMarker() const {
  return marker_;
}

void ListObjectsRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

std::string ListObjectsRequest::getBucketName() const {
  return bucketName_;
}

void ListObjectsRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setParameter(std::string("BucketName"), bucketName);
}

std::string ListObjectsRequest::getEncodingType() const {
  return encodingType_;
}

void ListObjectsRequest::setEncodingType(const std::string &encodingType) {
  encodingType_ = encodingType;
  setParameter(std::string("EncodingType"), encodingType);
}

std::string ListObjectsRequest::getStartAfter() const {
  return startAfter_;
}

void ListObjectsRequest::setStartAfter(const std::string &startAfter) {
  startAfter_ = startAfter;
  setParameter(std::string("StartAfter"), startAfter);
}

