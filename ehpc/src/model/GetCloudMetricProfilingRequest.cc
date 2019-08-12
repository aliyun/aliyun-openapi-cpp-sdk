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

#include <alibabacloud/ehpc/model/GetCloudMetricProfilingRequest.h>

using AlibabaCloud::EHPC::Model::GetCloudMetricProfilingRequest;

GetCloudMetricProfilingRequest::GetCloudMetricProfilingRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetCloudMetricProfiling")
{}

GetCloudMetricProfilingRequest::~GetCloudMetricProfilingRequest()
{}

std::string GetCloudMetricProfilingRequest::getRegionId()const
{
	return regionId_;
}

void GetCloudMetricProfilingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetCloudMetricProfilingRequest::getProfilingId()const
{
	return profilingId_;
}

void GetCloudMetricProfilingRequest::setProfilingId(const std::string& profilingId)
{
	profilingId_ = profilingId;
	setCoreParameter("ProfilingId", profilingId);
}

std::string GetCloudMetricProfilingRequest::getClusterId()const
{
	return clusterId_;
}

void GetCloudMetricProfilingRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string GetCloudMetricProfilingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCloudMetricProfilingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

