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

#include <alibabacloud/aegis/model/DescribeDataSourceRequest.h>

using AlibabaCloud::Aegis::Model::DescribeDataSourceRequest;

DescribeDataSourceRequest::DescribeDataSourceRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeDataSource")
{}

DescribeDataSourceRequest::~DescribeDataSourceRequest()
{}

std::string DescribeDataSourceRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataSourceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeDataSourceRequest::getDescription()const
{
	return description_;
}

void DescribeDataSourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long DescribeDataSourceRequest::getId()const
{
	return id_;
}

void DescribeDataSourceRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string DescribeDataSourceRequest::getLang()const
{
	return lang_;
}

void DescribeDataSourceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDataSourceRequest::getGroupName()const
{
	return groupName_;
}

void DescribeDataSourceRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

