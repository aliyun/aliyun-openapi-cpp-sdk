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

#include <alibabacloud/ddoscoo/model/DescribeLayer4RulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeLayer4RulesRequest;

DescribeLayer4RulesRequest::DescribeLayer4RulesRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeLayer4Rules")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLayer4RulesRequest::~DescribeLayer4RulesRequest()
{}

std::string DescribeLayer4RulesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeLayer4RulesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeLayer4RulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLayer4RulesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

int DescribeLayer4RulesRequest::getOffset()const
{
	return offset_;
}

void DescribeLayer4RulesRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

std::string DescribeLayer4RulesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeLayer4RulesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int DescribeLayer4RulesRequest::getFrontendPort()const
{
	return frontendPort_;
}

void DescribeLayer4RulesRequest::setFrontendPort(int frontendPort)
{
	frontendPort_ = frontendPort;
	setParameter("FrontendPort", std::to_string(frontendPort));
}

std::string DescribeLayer4RulesRequest::getForwardProtocol()const
{
	return forwardProtocol_;
}

void DescribeLayer4RulesRequest::setForwardProtocol(const std::string& forwardProtocol)
{
	forwardProtocol_ = forwardProtocol;
	setParameter("ForwardProtocol", forwardProtocol);
}

