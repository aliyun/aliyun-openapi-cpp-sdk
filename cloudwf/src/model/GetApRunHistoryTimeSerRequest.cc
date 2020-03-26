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

#include <alibabacloud/cloudwf/model/GetApRunHistoryTimeSerRequest.h>

using AlibabaCloud::Cloudwf::Model::GetApRunHistoryTimeSerRequest;

GetApRunHistoryTimeSerRequest::GetApRunHistoryTimeSerRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetApRunHistoryTimeSer")
{
	setMethod(HttpRequest::Method::Post);
}

GetApRunHistoryTimeSerRequest::~GetApRunHistoryTimeSerRequest()
{}

long GetApRunHistoryTimeSerRequest::getStart()const
{
	return start_;
}

void GetApRunHistoryTimeSerRequest::setStart(long start)
{
	start_ = start;
	setParameter("Start", std::to_string(start));
}

std::string GetApRunHistoryTimeSerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetApRunHistoryTimeSerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetApRunHistoryTimeSerRequest::getEnd()const
{
	return end_;
}

void GetApRunHistoryTimeSerRequest::setEnd(long end)
{
	end_ = end;
	setParameter("End", std::to_string(end));
}

long GetApRunHistoryTimeSerRequest::getId()const
{
	return id_;
}

void GetApRunHistoryTimeSerRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

