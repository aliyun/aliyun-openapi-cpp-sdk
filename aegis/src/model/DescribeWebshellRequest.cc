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

#include <alibabacloud/aegis/model/DescribeWebshellRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWebshellRequest;

DescribeWebshellRequest::DescribeWebshellRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWebshell")
{}

DescribeWebshellRequest::~DescribeWebshellRequest()
{}

long DescribeWebshellRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeWebshellRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeWebshellRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebshellRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeWebshellRequest::getGroupId()const
{
	return groupId_;
}

void DescribeWebshellRequest::setGroupId(int groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string DescribeWebshellRequest::getRemark()const
{
	return remark_;
}

void DescribeWebshellRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

