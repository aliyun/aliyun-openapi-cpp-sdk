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

#include <alibabacloud/vs/model/DescribeGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeGroupResult::DescribeGroupResult() :
	ServiceResult()
{}

DescribeGroupResult::DescribeGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupResult::~DescribeGroupResult()
{}

void DescribeGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statsNode = value["Stats"];
	if(!statsNode["DeviceNum"].isNull())
		stats_.deviceNum = std::stol(statsNode["DeviceNum"].asString());
	if(!statsNode["IedNum"].isNull())
		stats_.iedNum = std::stol(statsNode["IedNum"].asString());
	if(!statsNode["IpcNum"].isNull())
		stats_.ipcNum = std::stol(statsNode["IpcNum"].asString());
	if(!statsNode["PlatformNum"].isNull())
		stats_.platformNum = std::stol(statsNode["PlatformNum"].asString());
	auto allGbUdpPorts = value["GbUdpPorts"]["Port"];
	for (const auto &item : allGbUdpPorts)
		gbUdpPorts_.push_back(item.asString());
	auto allGbTcpPorts = value["GbTcpPorts"]["Port"];
	for (const auto &item : allGbTcpPorts)
		gbTcpPorts_.push_back(item.asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["AliasId"].isNull())
		aliasId_ = value["AliasId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["App"].isNull())
		app_ = value["App"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["InProtocol"].isNull())
		inProtocol_ = value["InProtocol"].asString();
	if(!value["OutProtocol"].isNull())
		outProtocol_ = value["OutProtocol"].asString();
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString() == "true";
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["PushDomain"].isNull())
		pushDomain_ = value["PushDomain"].asString();
	if(!value["PlayDomain"].isNull())
		playDomain_ = value["PlayDomain"].asString();
	if(!value["LazyPull"].isNull())
		lazyPull_ = value["LazyPull"].asString() == "true";
	if(!value["Callback"].isNull())
		callback_ = value["Callback"].asString();
	if(!value["CaptureInterval"].isNull())
		captureInterval_ = std::stoi(value["CaptureInterval"].asString());
	if(!value["CaptureImage"].isNull())
		captureImage_ = std::stoi(value["CaptureImage"].asString());
	if(!value["CaptureVideo"].isNull())
		captureVideo_ = std::stoi(value["CaptureVideo"].asString());
	if(!value["CaptureOssBucket"].isNull())
		captureOssBucket_ = value["CaptureOssBucket"].asString();
	if(!value["CaptureOssPath"].isNull())
		captureOssPath_ = value["CaptureOssPath"].asString();
	if(!value["GbId"].isNull())
		gbId_ = value["GbId"].asString();
	if(!value["GbIp"].isNull())
		gbIp_ = value["GbIp"].asString();
	if(!value["GbPort"].isNull())
		gbPort_ = std::stol(value["GbPort"].asString());

}

std::string DescribeGroupResult::getApp()const
{
	return app_;
}

std::string DescribeGroupResult::getInProtocol()const
{
	return inProtocol_;
}

std::string DescribeGroupResult::getDescription()const
{
	return description_;
}

std::string DescribeGroupResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeGroupResult::getName()const
{
	return name_;
}

std::vector<std::string> DescribeGroupResult::getGbUdpPorts()const
{
	return gbUdpPorts_;
}

int DescribeGroupResult::getCaptureInterval()const
{
	return captureInterval_;
}

std::string DescribeGroupResult::getGbId()const
{
	return gbId_;
}

std::string DescribeGroupResult::getPushDomain()const
{
	return pushDomain_;
}

std::string DescribeGroupResult::getAliasId()const
{
	return aliasId_;
}

int DescribeGroupResult::getCaptureImage()const
{
	return captureImage_;
}

std::string DescribeGroupResult::getStatus()const
{
	return status_;
}

std::string DescribeGroupResult::getCaptureOssPath()const
{
	return captureOssPath_;
}

std::string DescribeGroupResult::getGbIp()const
{
	return gbIp_;
}

bool DescribeGroupResult::getEnabled()const
{
	return enabled_;
}

std::string DescribeGroupResult::getOutProtocol()const
{
	return outProtocol_;
}

bool DescribeGroupResult::getLazyPull()const
{
	return lazyPull_;
}

long DescribeGroupResult::getGbPort()const
{
	return gbPort_;
}

std::string DescribeGroupResult::getCallback()const
{
	return callback_;
}

int DescribeGroupResult::getCaptureVideo()const
{
	return captureVideo_;
}

std::string DescribeGroupResult::getPlayDomain()const
{
	return playDomain_;
}

DescribeGroupResult::Stats DescribeGroupResult::getStats()const
{
	return stats_;
}

std::string DescribeGroupResult::getRegion()const
{
	return region_;
}

std::string DescribeGroupResult::getCaptureOssBucket()const
{
	return captureOssBucket_;
}

std::vector<std::string> DescribeGroupResult::getGbTcpPorts()const
{
	return gbTcpPorts_;
}

std::string DescribeGroupResult::getId()const
{
	return id_;
}

