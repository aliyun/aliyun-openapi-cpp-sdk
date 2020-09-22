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

#include <alibabacloud/vs/model/DescribeStreamResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeStreamResult::DescribeStreamResult() :
	ServiceResult()
{}

DescribeStreamResult::DescribeStreamResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStreamResult::~DescribeStreamResult()
{}

void DescribeStreamResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["PushDomain"].isNull())
		pushDomain_ = value["PushDomain"].asString();
	if(!value["PlayDomain"].isNull())
		playDomain_ = value["PlayDomain"].asString();
	if(!value["App"].isNull())
		app_ = value["App"].asString();
	if(!value["Protocol"].isNull())
		protocol_ = value["Protocol"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["DeviceId"].isNull())
		deviceId_ = value["DeviceId"].asString();
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString() == "true";
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Height"].isNull())
		height_ = std::stoi(value["Height"].asString());
	if(!value["Width"].isNull())
		width_ = std::stoi(value["Width"].asString());
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();

}

std::string DescribeStreamResult::getApp()const
{
	return app_;
}

std::string DescribeStreamResult::getStatus()const
{
	return status_;
}

std::string DescribeStreamResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeStreamResult::getDeviceId()const
{
	return deviceId_;
}

bool DescribeStreamResult::getEnabled()const
{
	return enabled_;
}

std::string DescribeStreamResult::getName()const
{
	return name_;
}

std::string DescribeStreamResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeStreamResult::getPlayDomain()const
{
	return playDomain_;
}

int DescribeStreamResult::getHeight()const
{
	return height_;
}

std::string DescribeStreamResult::getId()const
{
	return id_;
}

std::string DescribeStreamResult::getPushDomain()const
{
	return pushDomain_;
}

std::string DescribeStreamResult::getProtocol()const
{
	return protocol_;
}

int DescribeStreamResult::getWidth()const
{
	return width_;
}

