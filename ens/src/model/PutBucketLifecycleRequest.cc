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

#include <alibabacloud/ens/model/PutBucketLifecycleRequest.h>

using AlibabaCloud::Ens::Model::PutBucketLifecycleRequest;

PutBucketLifecycleRequest::PutBucketLifecycleRequest()
    : RpcServiceRequest("ens", "2017-11-10", "PutBucketLifecycle") {
  setMethod(HttpRequest::Method::Post);
}

PutBucketLifecycleRequest::~PutBucketLifecycleRequest() {}

std::string PutBucketLifecycleRequest::getPrefix() const {
  return prefix_;
}

void PutBucketLifecycleRequest::setPrefix(const std::string &prefix) {
  prefix_ = prefix;
  setParameter(std::string("Prefix"), prefix);
}

std::string PutBucketLifecycleRequest::getAllowSameActionOverlap() const {
  return allowSameActionOverlap_;
}

void PutBucketLifecycleRequest::setAllowSameActionOverlap(const std::string &allowSameActionOverlap) {
  allowSameActionOverlap_ = allowSameActionOverlap;
  setParameter(std::string("AllowSameActionOverlap"), allowSameActionOverlap);
}

long PutBucketLifecycleRequest::getExpirationDays() const {
  return expirationDays_;
}

void PutBucketLifecycleRequest::setExpirationDays(long expirationDays) {
  expirationDays_ = expirationDays;
  setParameter(std::string("ExpirationDays"), std::to_string(expirationDays));
}

std::string PutBucketLifecycleRequest::getRuleId() const {
  return ruleId_;
}

void PutBucketLifecycleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string PutBucketLifecycleRequest::getStatus() const {
  return status_;
}

void PutBucketLifecycleRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string PutBucketLifecycleRequest::getBucketName() const {
  return bucketName_;
}

void PutBucketLifecycleRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setParameter(std::string("BucketName"), bucketName);
}

std::string PutBucketLifecycleRequest::getCreatedBeforeDate() const {
  return createdBeforeDate_;
}

void PutBucketLifecycleRequest::setCreatedBeforeDate(const std::string &createdBeforeDate) {
  createdBeforeDate_ = createdBeforeDate;
  setParameter(std::string("CreatedBeforeDate"), createdBeforeDate);
}

