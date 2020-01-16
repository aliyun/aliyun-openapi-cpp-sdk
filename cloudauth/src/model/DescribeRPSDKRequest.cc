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

#include <alibabacloud/cloudauth/model/DescribeRPSDKRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeRPSDKRequest;

DescribeRPSDKRequest::DescribeRPSDKRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeRPSDK")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRPSDKRequest::~DescribeRPSDKRequest()
{}

std::string DescribeRPSDKRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRPSDKRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeRPSDKRequest::getLang()const
{
	return lang_;
}

void DescribeRPSDKRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeRPSDKRequest::getTaskId()const
{
	return taskId_;
}

void DescribeRPSDKRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

