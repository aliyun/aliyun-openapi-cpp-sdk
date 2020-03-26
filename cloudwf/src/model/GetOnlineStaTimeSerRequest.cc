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
{
	setMethod(HttpRequest::Method::Post);
}

GetOnlineStaTimeSerRequest::~GetOnlineStaTimeSerRequest()
{}

long GetOnlineStaTimeSerRequest::getApgroupId()const
{
	return apgroupId_;
}

void GetOnlineStaTimeSerRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setParameter("ApgroupId", std::to_string(apgroupId));
}

long GetOnlineStaTimeSerRequest::getStart()const
{
	return start_;
}

void GetOnlineStaTimeSerRequest::setStart(long start)
{
	start_ = start;
	setParameter("Start", std::to_string(start));
}

std::string GetOnlineStaTimeSerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOnlineStaTimeSerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetOnlineStaTimeSerRequest::getZoomStart()const
{
	return zoomStart_;
}

void GetOnlineStaTimeSerRequest::setZoomStart(long zoomStart)
{
	zoomStart_ = zoomStart;
	setParameter("ZoomStart", std::to_string(zoomStart));
}

long GetOnlineStaTimeSerRequest::getCompanyId()const
{
	return companyId_;
}

void GetOnlineStaTimeSerRequest::setCompanyId(long companyId)
{
	companyId_ = companyId;
	setParameter("CompanyId", std::to_string(companyId));
}

long GetOnlineStaTimeSerRequest::getZoomEnd()const
{
	return zoomEnd_;
}

void GetOnlineStaTimeSerRequest::setZoomEnd(long zoomEnd)
{
	zoomEnd_ = zoomEnd;
	setParameter("ZoomEnd", std::to_string(zoomEnd));
}

long GetOnlineStaTimeSerRequest::getEnd()const
{
	return end_;
}

void GetOnlineStaTimeSerRequest::setEnd(long end)
{
	end_ = end;
	setParameter("End", std::to_string(end));
}

