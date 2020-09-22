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

#include <alibabacloud/vs/model/DescribeParentPlatformResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeParentPlatformResult::DescribeParentPlatformResult() :
	ServiceResult()
{}

DescribeParentPlatformResult::DescribeParentPlatformResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParentPlatformResult::~DescribeParentPlatformResult()
{}

void DescribeParentPlatformResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Protocol"].isNull())
		protocol_ = value["Protocol"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["GbId"].isNull())
		gbId_ = value["GbId"].asString();
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["Port"].isNull())
		port_ = std::stol(value["Port"].asString());
	if(!value["ClientGbId"].isNull())
		clientGbId_ = value["ClientGbId"].asString();
	if(!value["ClientAuth"].isNull())
		clientAuth_ = value["ClientAuth"].asString() == "true";
	if(!value["ClientUsername"].isNull())
		clientUsername_ = value["ClientUsername"].asString();
	if(!value["ClientPassword"].isNull())
		clientPassword_ = value["ClientPassword"].asString();
	if(!value["ClientIp"].isNull())
		clientIp_ = value["ClientIp"].asString();
	if(!value["ClientPort"].isNull())
		clientPort_ = std::stol(value["ClientPort"].asString());
	if(!value["AutoStart"].isNull())
		autoStart_ = value["AutoStart"].asString() == "true";
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();

}

std::string DescribeParentPlatformResult::getStatus()const
{
	return status_;
}

std::string DescribeParentPlatformResult::getClientGbId()const
{
	return clientGbId_;
}

std::string DescribeParentPlatformResult::getDescription()const
{
	return description_;
}

std::string DescribeParentPlatformResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeParentPlatformResult::getIp()const
{
	return ip_;
}

long DescribeParentPlatformResult::getPort()const
{
	return port_;
}

long DescribeParentPlatformResult::getClientPort()const
{
	return clientPort_;
}

bool DescribeParentPlatformResult::getClientAuth()const
{
	return clientAuth_;
}

std::string DescribeParentPlatformResult::getClientIp()const
{
	return clientIp_;
}

std::string DescribeParentPlatformResult::getName()const
{
	return name_;
}

std::string DescribeParentPlatformResult::getGbId()const
{
	return gbId_;
}

std::string DescribeParentPlatformResult::getClientPassword()const
{
	return clientPassword_;
}

std::string DescribeParentPlatformResult::getId()const
{
	return id_;
}

std::string DescribeParentPlatformResult::getProtocol()const
{
	return protocol_;
}

bool DescribeParentPlatformResult::getAutoStart()const
{
	return autoStart_;
}

std::string DescribeParentPlatformResult::getClientUsername()const
{
	return clientUsername_;
}

