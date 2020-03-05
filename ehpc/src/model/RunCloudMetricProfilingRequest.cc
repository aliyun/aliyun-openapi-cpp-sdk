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

#include <alibabacloud/ehpc/model/RunCloudMetricProfilingRequest.h>

using AlibabaCloud::EHPC::Model::RunCloudMetricProfilingRequest;

RunCloudMetricProfilingRequest::RunCloudMetricProfilingRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "RunCloudMetricProfiling")
{
	setMethod(HttpRequest::Method::GET);
}

RunCloudMetricProfilingRequest::~RunCloudMetricProfilingRequest()
{}

int RunCloudMetricProfilingRequest::getFreq()const
{
	return freq_;
}

void RunCloudMetricProfilingRequest::setFreq(int freq)
{
	freq_ = freq;
	setParameter("Freq", std::to_string(freq));
}

std::string RunCloudMetricProfilingRequest::getClusterId()const
{
	return clusterId_;
}

void RunCloudMetricProfilingRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string RunCloudMetricProfilingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunCloudMetricProfilingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int RunCloudMetricProfilingRequest::getDuration()const
{
	return duration_;
}

void RunCloudMetricProfilingRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string RunCloudMetricProfilingRequest::getHostName()const
{
	return hostName_;
}

void RunCloudMetricProfilingRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string RunCloudMetricProfilingRequest::getRegionId()const
{
	return regionId_;
}

void RunCloudMetricProfilingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int RunCloudMetricProfilingRequest::getProcessId()const
{
	return processId_;
}

void RunCloudMetricProfilingRequest::setProcessId(int processId)
{
	processId_ = processId;
	setParameter("ProcessId", std::to_string(processId));
}

