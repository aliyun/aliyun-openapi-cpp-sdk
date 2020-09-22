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

#include <alibabacloud/vs/model/DescribeDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeDeviceResult::DescribeDeviceResult() :
	ServiceResult()
{}

DescribeDeviceResult::DescribeDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeviceResult::~DescribeDeviceResult()
{}

void DescribeDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statsNode = value["Stats"];
	if(!statsNode["ChannelNum"].isNull())
		stats_.channelNum = std::stol(statsNode["ChannelNum"].asString());
	if(!statsNode["StreamNum"].isNull())
		stats_.streamNum = std::stol(statsNode["StreamNum"].asString());
	if(!statsNode["OnlineNum"].isNull())
		stats_.onlineNum = std::stol(statsNode["OnlineNum"].asString());
	if(!statsNode["OfflineNum"].isNull())
		stats_.offlineNum = std::stol(statsNode["OfflineNum"].asString());
	if(!statsNode["FailedNum"].isNull())
		stats_.failedNum = std::stol(statsNode["FailedNum"].asString());
	auto directoryNode = value["Directory"];
	if(!directoryNode["Id"].isNull())
		directory_.id = directoryNode["Id"].asString();
	if(!directoryNode["Name"].isNull())
		directory_.name = directoryNode["Name"].asString();
	if(!directoryNode["Description"].isNull())
		directory_.description = directoryNode["Description"].asString();
	if(!directoryNode["GroupId"].isNull())
		directory_.groupId = directoryNode["GroupId"].asString();
	if(!directoryNode["ParentId"].isNull())
		directory_.parentId = directoryNode["ParentId"].asString();
	if(!directoryNode["CreatedTime"].isNull())
		directory_.createdTime = directoryNode["CreatedTime"].asString();
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["ParentId"].isNull())
		parentId_ = value["ParentId"].asString();
	if(!value["DirectoryId"].isNull())
		directoryId_ = value["DirectoryId"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["AutoStart"].isNull())
		autoStart_ = value["AutoStart"].asString() == "true";
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString() == "true";
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
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Username"].isNull())
		username_ = value["Username"].asString();
	if(!value["Password"].isNull())
		password_ = value["Password"].asString();
	if(!value["Vendor"].isNull())
		vendor_ = value["Vendor"].asString();
	if(!value["Dsn"].isNull())
		dsn_ = value["Dsn"].asString();
	if(!value["Longitude"].isNull())
		longitude_ = value["Longitude"].asString();
	if(!value["Latitude"].isNull())
		latitude_ = value["Latitude"].asString();
	if(!value["AutoPos"].isNull())
		autoPos_ = value["AutoPos"].asString() == "true";
	if(!value["PosInterval"].isNull())
		posInterval_ = std::stol(value["PosInterval"].asString());
	if(!value["AlarmMethod"].isNull())
		alarmMethod_ = value["AlarmMethod"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["RegisteredTime"].isNull())
		registeredTime_ = value["RegisteredTime"].asString();
	if(!value["ChannelSyncTime"].isNull())
		channelSyncTime_ = value["ChannelSyncTime"].asString();
	if(!value["Params"].isNull())
		params_ = value["Params"].asString();

}

std::string DescribeDeviceResult::getAlarmMethod()const
{
	return alarmMethod_;
}

std::string DescribeDeviceResult::getDescription()const
{
	return description_;
}

std::string DescribeDeviceResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeDeviceResult::getIp()const
{
	return ip_;
}

long DescribeDeviceResult::getPort()const
{
	return port_;
}

std::string DescribeDeviceResult::getChannelSyncTime()const
{
	return channelSyncTime_;
}

std::string DescribeDeviceResult::getLatitude()const
{
	return latitude_;
}

std::string DescribeDeviceResult::getUrl()const
{
	return url_;
}

std::string DescribeDeviceResult::getName()const
{
	return name_;
}

std::string DescribeDeviceResult::getGbId()const
{
	return gbId_;
}

std::string DescribeDeviceResult::getProtocol()const
{
	return protocol_;
}

bool DescribeDeviceResult::getAutoStart()const
{
	return autoStart_;
}

std::string DescribeDeviceResult::getDsn()const
{
	return dsn_;
}

DescribeDeviceResult::Directory DescribeDeviceResult::getDirectory()const
{
	return directory_;
}

std::string DescribeDeviceResult::getPassword()const
{
	return password_;
}

std::string DescribeDeviceResult::getParentId()const
{
	return parentId_;
}

std::string DescribeDeviceResult::getStatus()const
{
	return status_;
}

bool DescribeDeviceResult::getEnabled()const
{
	return enabled_;
}

std::string DescribeDeviceResult::getParams()const
{
	return params_;
}

std::string DescribeDeviceResult::getVendor()const
{
	return vendor_;
}

std::string DescribeDeviceResult::getLongitude()const
{
	return longitude_;
}

std::string DescribeDeviceResult::getRegisteredTime()const
{
	return registeredTime_;
}

std::string DescribeDeviceResult::getGroupId()const
{
	return groupId_;
}

long DescribeDeviceResult::getPosInterval()const
{
	return posInterval_;
}

std::string DescribeDeviceResult::getType()const
{
	return type_;
}

std::string DescribeDeviceResult::getDirectoryId()const
{
	return directoryId_;
}

std::string DescribeDeviceResult::getUsername()const
{
	return username_;
}

bool DescribeDeviceResult::getAutoPos()const
{
	return autoPos_;
}

DescribeDeviceResult::Stats DescribeDeviceResult::getStats()const
{
	return stats_;
}

std::string DescribeDeviceResult::getId()const
{
	return id_;
}

