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

#include <alibabacloud/tingwu/model/GetMeetingTransRequest.h>

using AlibabaCloud::Tingwu::Model::GetMeetingTransRequest;

GetMeetingTransRequest::GetMeetingTransRequest()
    : RoaServiceRequest("tingwu", "2022-09-30") {
  setResourcePath("/openapi/meeting-trans/[MeetingId]"};
  setMethod(HttpRequest::Method::Get);
}

GetMeetingTransRequest::~GetMeetingTransRequest() {}

string GetMeetingTransRequest::getMeetingId() const {
  return meetingId_;
}

void GetMeetingTransRequest::setMeetingId(string meetingId) {
  meetingId_ = meetingId;
  setParameter(std::string("MeetingId"), std::to_string(meetingId));
}

