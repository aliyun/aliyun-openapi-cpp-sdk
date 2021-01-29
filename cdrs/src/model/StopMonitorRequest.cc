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

#include <alibabacloud/cdrs/model/StopMonitorRequest.h>

using AlibabaCloud::CDRS::Model::StopMonitorRequest;

StopMonitorRequest::StopMonitorRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "StopMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

StopMonitorRequest::~StopMonitorRequest()
{}

std::string StopMonitorRequest::getCorpId()const
{
	return corpId_;
}

void StopMonitorRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string StopMonitorRequest::getBizId()const
{
	return bizId_;
}

void StopMonitorRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string StopMonitorRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void StopMonitorRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

std::string StopMonitorRequest::getTaskId()const
{
	return taskId_;
}

void StopMonitorRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

