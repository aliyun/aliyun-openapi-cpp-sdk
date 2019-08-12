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

#include <alibabacloud/cloudwf/model/GetOnlineStaTimeSerRequest.h>

using AlibabaCloud::Cloudwf::Model::GetOnlineStaTimeSerRequest;

GetOnlineStaTimeSerRequest::GetOnlineStaTimeSerRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetOnlineStaTimeSer")
{}

GetOnlineStaTimeSerRequest::~GetOnlineStaTimeSerRequest()
{}

long GetOnlineStaTimeSerRequest::getZoomStart()const
{
	return zoomStart_;
}

void GetOnlineStaTimeSerRequest::setZoomStart(long zoomStart)
{
	zoomStart_ = zoomStart;
	setCoreParameter("ZoomStart", zoomStart);
}

long GetOnlineStaTimeSerRequest::getCompanyId()const
{
	return companyId_;
}

void GetOnlineStaTimeSerRequest::setCompanyId(long companyId)
{
	companyId_ = companyId;
	setCoreParameter("CompanyId", companyId);
}

long GetOnlineStaTimeSerRequest::getApgroupId()const
{
	return apgroupId_;
}

void GetOnlineStaTimeSerRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setCoreParameter("ApgroupId", apgroupId);
}

long GetOnlineStaTimeSerRequest::getStart()const
{
	return start_;
}

void GetOnlineStaTimeSerRequest::setStart(long start)
{
	start_ = start;
	setCoreParameter("Start", start);
}

long GetOnlineStaTimeSerRequest::getZoomEnd()const
{
	return zoomEnd_;
}

void GetOnlineStaTimeSerRequest::setZoomEnd(long zoomEnd)
{
	zoomEnd_ = zoomEnd;
	setCoreParameter("ZoomEnd", zoomEnd);
}

long GetOnlineStaTimeSerRequest::getEnd()const
{
	return end_;
}

void GetOnlineStaTimeSerRequest::setEnd(long end)
{
	end_ = end;
	setCoreParameter("End", end);
}

std::string GetOnlineStaTimeSerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOnlineStaTimeSerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

