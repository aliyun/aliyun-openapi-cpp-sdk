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

#include <alibabacloud/aegis/model/DownloadLogRequest.h>

using AlibabaCloud::Aegis::Model::DownloadLogRequest;

DownloadLogRequest::DownloadLogRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DownloadLog")
{}

DownloadLogRequest::~DownloadLogRequest()
{}

std::string DownloadLogRequest::getQuery()const
{
	return query_;
}

void DownloadLogRequest::setQuery(const std::string& query)
{
	query_ = query;
	setCoreParameter("Query", query);
}

std::string DownloadLogRequest::getEndTime()const
{
	return endTime_;
}

void DownloadLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DownloadLogRequest::getStartTime()const
{
	return startTime_;
}

void DownloadLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DownloadLogRequest::getSourceIp()const
{
	return sourceIp_;
}

void DownloadLogRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

