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

#include <alibabacloud/ens/model/DeleteBucketLifecycleRequest.h>

using AlibabaCloud::Ens::Model::DeleteBucketLifecycleRequest;

DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteBucketLifecycle") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBucketLifecycleRequest::~DeleteBucketLifecycleRequest() {}

std::string DeleteBucketLifecycleRequest::getBucketName() const {
  return bucketName_;
}

void DeleteBucketLifecycleRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setParameter(std::string("BucketName"), bucketName);
}

std::string DeleteBucketLifecycleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteBucketLifecycleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

