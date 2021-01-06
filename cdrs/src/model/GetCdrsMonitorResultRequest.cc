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

#include <alibabacloud/cdrs/model/GetCdrsMonitorResultRequest.h>

using AlibabaCloud::CDRS::Model::GetCdrsMonitorResultRequest;

GetCdrsMonitorResultRequest::GetCdrsMonitorResultRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "GetCdrsMonitorResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetCdrsMonitorResultRequest::~GetCdrsMonitorResultRequest()
{}

std::string GetCdrsMonitorResultRequest::getCorpId()const
{
	return corpId_;
}

void GetCdrsMonitorResultRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long GetCdrsMonitorResultRequest::getEndTime()const
{
	return endTime_;
}

void GetCdrsMonitorResultRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

long GetCdrsMonitorResultRequest::getStartTime()const
{
	return startTime_;
}

void GetCdrsMonitorResultRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

std::string GetCdrsMonitorResultRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void GetCdrsMonitorResultRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

std::string GetCdrsMonitorResultRequest::getMinRecordId()const
{
	return minRecordId_;
}

void GetCdrsMonitorResultRequest::setMinRecordId(const std::string& minRecordId)
{
	minRecordId_ = minRecordId;
	setBodyParameter("MinRecordId", minRecordId);
}

std::string GetCdrsMonitorResultRequest::getTaskId()const
{
	return taskId_;
}

void GetCdrsMonitorResultRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

