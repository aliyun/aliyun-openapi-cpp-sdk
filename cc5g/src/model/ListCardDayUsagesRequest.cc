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

#include <alibabacloud/cc5g/model/ListCardDayUsagesRequest.h>

using AlibabaCloud::CC5G::Model::ListCardDayUsagesRequest;

ListCardDayUsagesRequest::ListCardDayUsagesRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListCardDayUsages") {
  setMethod(HttpRequest::Method::Get);
}

ListCardDayUsagesRequest::~ListCardDayUsagesRequest() {}

int ListCardDayUsagesRequest::getLatestMonthNum() const {
  return latestMonthNum_;
}

void ListCardDayUsagesRequest::setLatestMonthNum(int latestMonthNum) {
  latestMonthNum_ = latestMonthNum;
  setParameter(std::string("LatestMonthNum"), std::to_string(latestMonthNum));
}

std::vector<ListCardDayUsagesRequest::std::string> ListCardDayUsagesRequest::getIccids() const {
  return iccids_;
}

void ListCardDayUsagesRequest::setIccids(const std::vector<ListCardDayUsagesRequest::std::string> &iccids) {
  iccids_ = iccids;
  for(int dep1 = 0; dep1 != iccids.size(); dep1++) {
    setParameter(std::string("Iccids") + "." + std::to_string(dep1 + 1), iccids[dep1]);
  }
}

std::string ListCardDayUsagesRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListCardDayUsagesRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

