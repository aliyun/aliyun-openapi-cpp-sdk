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

#include <alibabacloud/scdn/model/DescribeScdnDdosTrafficInfoRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDdosTrafficInfoRequest;

DescribeScdnDdosTrafficInfoRequest::DescribeScdnDdosTrafficInfoRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDdosTrafficInfo")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeScdnDdosTrafficInfoRequest::~DescribeScdnDdosTrafficInfoRequest()
{}

std::string DescribeScdnDdosTrafficInfoRequest::getLine()const
{
	return line_;
}

void DescribeScdnDdosTrafficInfoRequest::setLine(const std::string& line)
{
	line_ = line;
	setParameter("Line", line);
}

std::string DescribeScdnDdosTrafficInfoRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDdosTrafficInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDdosTrafficInfoRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDdosTrafficInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeScdnDdosTrafficInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDdosTrafficInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

