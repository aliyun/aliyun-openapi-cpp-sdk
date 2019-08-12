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

#include <alibabacloud/live/model/DescribeCasterProgramRequest.h>

using AlibabaCloud::Live::Model::DescribeCasterProgramRequest;

DescribeCasterProgramRequest::DescribeCasterProgramRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeCasterProgram")
{}

DescribeCasterProgramRequest::~DescribeCasterProgramRequest()
{}

std::string DescribeCasterProgramRequest::getCasterId()const
{
	return casterId_;
}

void DescribeCasterProgramRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

std::string DescribeCasterProgramRequest::getEpisodeType()const
{
	return episodeType_;
}

void DescribeCasterProgramRequest::setEpisodeType(const std::string& episodeType)
{
	episodeType_ = episodeType;
	setCoreParameter("EpisodeType", episodeType);
}

int DescribeCasterProgramRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCasterProgramRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeCasterProgramRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCasterProgramRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeCasterProgramRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCasterProgramRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeCasterProgramRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCasterProgramRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeCasterProgramRequest::getEpisodeId()const
{
	return episodeId_;
}

void DescribeCasterProgramRequest::setEpisodeId(const std::string& episodeId)
{
	episodeId_ = episodeId;
	setCoreParameter("EpisodeId", episodeId);
}

int DescribeCasterProgramRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeCasterProgramRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

int DescribeCasterProgramRequest::getStatus()const
{
	return status_;
}

void DescribeCasterProgramRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

