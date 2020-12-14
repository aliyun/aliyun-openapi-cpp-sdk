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

#include <alibabacloud/cdrs/model/ListDataStatisticsByDayRequest.h>

using AlibabaCloud::CDRS::Model::ListDataStatisticsByDayRequest;

ListDataStatisticsByDayRequest::ListDataStatisticsByDayRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListDataStatisticsByDay")
{
	setMethod(HttpRequest::Method::Post);
}

ListDataStatisticsByDayRequest::~ListDataStatisticsByDayRequest()
{}

std::string ListDataStatisticsByDayRequest::getCorpId()const
{
	return corpId_;
}

void ListDataStatisticsByDayRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListDataStatisticsByDayRequest::getEndTime()const
{
	return endTime_;
}

void ListDataStatisticsByDayRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListDataStatisticsByDayRequest::getStartTime()const
{
	return startTime_;
}

void ListDataStatisticsByDayRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

