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

#include <alibabacloud/bssopenapi/model/QueryUserOmsDataRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryUserOmsDataRequest;

QueryUserOmsDataRequest::QueryUserOmsDataRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryUserOmsData")
{}

QueryUserOmsDataRequest::~QueryUserOmsDataRequest()
{}

std::string QueryUserOmsDataRequest::getDataType()const
{
	return dataType_;
}

void QueryUserOmsDataRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setCoreParameter("DataType", std::to_string(dataType));
}

std::string QueryUserOmsDataRequest::getMarker()const
{
	return marker_;
}

void QueryUserOmsDataRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

int QueryUserOmsDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryUserOmsDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryUserOmsDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryUserOmsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryUserOmsDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryUserOmsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long QueryUserOmsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryUserOmsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryUserOmsDataRequest::getTable()const
{
	return table_;
}

void QueryUserOmsDataRequest::setTable(const std::string& table)
{
	table_ = table;
	setCoreParameter("Table", std::to_string(table));
}

