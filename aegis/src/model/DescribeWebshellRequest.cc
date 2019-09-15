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

int DescribeWebshellRequest::getGroupId()const
{
	return groupId_;
}

void DescribeWebshellRequest::setGroupId(int groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DescribeWebshellRequest::getRemark()const
{
	return remark_;
}

void DescribeWebshellRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeWebshellRequest::getDealed()const
{
	return dealed_;
}

void DescribeWebshellRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

std::string DescribeWebshellRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebshellRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeWebshellRequest::getTag()const
{
	return tag_;
}

void DescribeWebshellRequest::setTag(int tag)
{
	tag_ = tag;
	setCoreParameter("Tag", std::to_string(tag));
}

