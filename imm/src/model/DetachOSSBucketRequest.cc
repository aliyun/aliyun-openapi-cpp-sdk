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

#include <alibabacloud/imm/model/DetachOSSBucketRequest.h>

using AlibabaCloud::Imm::Model::DetachOSSBucketRequest;

DetachOSSBucketRequest::DetachOSSBucketRequest()
    : RpcServiceRequest("imm", "2020-09-30", "DetachOSSBucket") {
  setMethod(HttpRequest::Method::Post);
}

DetachOSSBucketRequest::~DetachOSSBucketRequest() {}

std::string DetachOSSBucketRequest::getOSSBucket() const {
  return oSSBucket_;
}

void DetachOSSBucketRequest::setOSSBucket(const std::string &oSSBucket) {
  oSSBucket_ = oSSBucket;
  setParameter(std::string("OSSBucket"), oSSBucket);
}

