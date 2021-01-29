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

#include <alibabacloud/cdrs/model/GetMonitorResultRequest.h>

using AlibabaCloud::CDRS::Model::GetMonitorResultRequest;

GetMonitorResultRequest::GetMonitorResultRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "GetMonitorResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetMonitorResultRequest::~GetMonitorResultRequest()
{}

std::string GetMonitorResultRequest::getCorpId()const
{
	return corpId_;
}

void GetMonitorResultRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long GetMonitorResultRequest::getEndTime()const
{
	return endTime_;
}

void GetMonitorResultRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

long GetMonitorResultRequest::getStartTime()const
{
	return startTime_;
}

void GetMonitorResultRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

std::string GetMonitorResultRequest::getBizId()const
{
	return bizId_;
}

void GetMonitorResultRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string GetMonitorResultRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void GetMonitorResultRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

std::string GetMonitorResultRequest::getMinRecordId()const
{
	return minRecordId_;
}

void GetMonitorResultRequest::setMinRecordId(const std::string& minRecordId)
{
	minRecordId_ = minRecordId;
	setBodyParameter("MinRecordId", minRecordId);
}

std::string GetMonitorResultRequest::getTaskId()const
{
	return taskId_;
}

void GetMonitorResultRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

