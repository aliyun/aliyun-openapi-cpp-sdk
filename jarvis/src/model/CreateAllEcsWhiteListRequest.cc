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

#include <alibabacloud/jarvis/model/CreateAllEcsWhiteListRequest.h>

using AlibabaCloud::Jarvis::Model::CreateAllEcsWhiteListRequest;

CreateAllEcsWhiteListRequest::CreateAllEcsWhiteListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateAllEcsWhiteList")
{}

CreateAllEcsWhiteListRequest::~CreateAllEcsWhiteListRequest()
{}

long CreateAllEcsWhiteListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAllEcsWhiteListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateAllEcsWhiteListRequest::getSrcIP()const
{
	return srcIP_;
}

void CreateAllEcsWhiteListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", std::to_string(srcIP));
}

std::string CreateAllEcsWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAllEcsWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string CreateAllEcsWhiteListRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateAllEcsWhiteListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

