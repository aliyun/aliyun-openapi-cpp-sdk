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

#include <alibabacloud/cloudwf/model/GetScanProbeTimeSerRequest.h>

using AlibabaCloud::Cloudwf::Model::GetScanProbeTimeSerRequest;

GetScanProbeTimeSerRequest::GetScanProbeTimeSerRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetScanProbeTimeSer")
{}

GetScanProbeTimeSerRequest::~GetScanProbeTimeSerRequest()
{}

long GetScanProbeTimeSerRequest::getZoomStart()const
{
	return zoomStart_;
}

void GetScanProbeTimeSerRequest::setZoomStart(long zoomStart)
{
	zoomStart_ = zoomStart;
	setCoreParameter("ZoomStart", std::to_string(zoomStart));
}

long GetScanProbeTimeSerRequest::getCompanyId()const
{
	return companyId_;
}

void GetScanProbeTimeSerRequest::setCompanyId(long companyId)
{
	companyId_ = companyId;
	setCoreParameter("CompanyId", std::to_string(companyId));
}

long GetScanProbeTimeSerRequest::getApgroupId()const
{
	return apgroupId_;
}

void GetScanProbeTimeSerRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setCoreParameter("ApgroupId", std::to_string(apgroupId));
}

long GetScanProbeTimeSerRequest::getStart()const
{
	return start_;
}

void GetScanProbeTimeSerRequest::setStart(long start)
{
	start_ = start;
	setCoreParameter("Start", std::to_string(start));
}

long GetScanProbeTimeSerRequest::getZoomEnd()const
{
	return zoomEnd_;
}

void GetScanProbeTimeSerRequest::setZoomEnd(long zoomEnd)
{
	zoomEnd_ = zoomEnd;
	setCoreParameter("ZoomEnd", std::to_string(zoomEnd));
}

long GetScanProbeTimeSerRequest::getEnd()const
{
	return end_;
}

void GetScanProbeTimeSerRequest::setEnd(long end)
{
	end_ = end;
	setCoreParameter("End", std::to_string(end));
}

std::string GetScanProbeTimeSerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetScanProbeTimeSerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

