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

#include <alibabacloud/cloudwf/model/GetOnlineApTimeSerRequest.h>

using AlibabaCloud::Cloudwf::Model::GetOnlineApTimeSerRequest;

GetOnlineApTimeSerRequest::GetOnlineApTimeSerRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetOnlineApTimeSer")
{
	setMethod(HttpRequest::Method::Post);
}

GetOnlineApTimeSerRequest::~GetOnlineApTimeSerRequest()
{}

long GetOnlineApTimeSerRequest::getApgroupId()const
{
	return apgroupId_;
}

void GetOnlineApTimeSerRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setParameter("ApgroupId", std::to_string(apgroupId));
}

long GetOnlineApTimeSerRequest::getStart()const
{
	return start_;
}

void GetOnlineApTimeSerRequest::setStart(long start)
{
	start_ = start;
	setParameter("Start", std::to_string(start));
}

std::string GetOnlineApTimeSerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOnlineApTimeSerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetOnlineApTimeSerRequest::getZoomStart()const
{
	return zoomStart_;
}

void GetOnlineApTimeSerRequest::setZoomStart(long zoomStart)
{
	zoomStart_ = zoomStart;
	setParameter("ZoomStart", std::to_string(zoomStart));
}

long GetOnlineApTimeSerRequest::getCompanyId()const
{
	return companyId_;
}

void GetOnlineApTimeSerRequest::setCompanyId(long companyId)
{
	companyId_ = companyId;
	setParameter("CompanyId", std::to_string(companyId));
}

long GetOnlineApTimeSerRequest::getZoomEnd()const
{
	return zoomEnd_;
}

void GetOnlineApTimeSerRequest::setZoomEnd(long zoomEnd)
{
	zoomEnd_ = zoomEnd;
	setParameter("ZoomEnd", std::to_string(zoomEnd));
}

long GetOnlineApTimeSerRequest::getEnd()const
{
	return end_;
}

void GetOnlineApTimeSerRequest::setEnd(long end)
{
	end_ = end;
	setParameter("End", std::to_string(end));
}

