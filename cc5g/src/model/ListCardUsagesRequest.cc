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

#include <alibabacloud/cc5g/model/ListCardUsagesRequest.h>

using AlibabaCloud::CC5G::Model::ListCardUsagesRequest;

ListCardUsagesRequest::ListCardUsagesRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListCardUsages") {
  setMethod(HttpRequest::Method::Get);
}

ListCardUsagesRequest::~ListCardUsagesRequest() {}

std::vector<ListCardUsagesRequest::std::string> ListCardUsagesRequest::getIccids() const {
  return iccids_;
}

void ListCardUsagesRequest::setIccids(const std::vector<ListCardUsagesRequest::std::string> &iccids) {
  iccids_ = iccids;
  for(int dep1 = 0; dep1 != iccids.size(); dep1++) {
    setParameter(std::string("Iccids") + "." + std::to_string(dep1 + 1), iccids[dep1]);
  }
}

std::string ListCardUsagesRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListCardUsagesRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

