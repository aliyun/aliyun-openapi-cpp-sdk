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

#include <alibabacloud/ens/model/DeleteSDGRequest.h>

using AlibabaCloud::Ens::Model::DeleteSDGRequest;

DeleteSDGRequest::DeleteSDGRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteSDG") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSDGRequest::~DeleteSDGRequest() {}

std::vector<DeleteSDGRequest::std::string> DeleteSDGRequest::getSDGId() const {
  return sDGId_;
}

void DeleteSDGRequest::setSDGId(const std::vector<DeleteSDGRequest::std::string> &sDGId) {
  sDGId_ = sDGId;
  for(int dep1 = 0; dep1 != sDGId.size(); dep1++) {
    setParameter(std::string("SDGId") + "." + std::to_string(dep1 + 1), sDGId[dep1]);
  }
}

