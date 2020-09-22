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

#include <alibabacloud/vs/model/DescribeGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeGroupsResult::DescribeGroupsResult() :
	ServiceResult()
{}

DescribeGroupsResult::DescribeGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupsResult::~DescribeGroupsResult()
{}

void DescribeGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["Group"];
	for (auto valueGroupsGroup : allGroupsNode)
	{
		Group groupsObject;
		if(!valueGroupsGroup["Id"].isNull())
			groupsObject.id = valueGroupsGroup["Id"].asString();
		if(!valueGroupsGroup["AliasId"].isNull())
			groupsObject.aliasId = valueGroupsGroup["AliasId"].asString();
		if(!valueGroupsGroup["Name"].isNull())
			groupsObject.name = valueGroupsGroup["Name"].asString();
		if(!valueGroupsGroup["Description"].isNull())
			groupsObject.description = valueGroupsGroup["Description"].asString();
		if(!valueGroupsGroup["App"].isNull())
			groupsObject.app = valueGroupsGroup["App"].asString();
		if(!valueGroupsGroup["Region"].isNull())
			groupsObject.region = valueGroupsGroup["Region"].asString();
		if(!valueGroupsGroup["InProtocol"].isNull())
			groupsObject.inProtocol = valueGroupsGroup["InProtocol"].asString();
		if(!valueGroupsGroup["OutProtocol"].isNull())
			groupsObject.outProtocol = valueGroupsGroup["OutProtocol"].asString();
		if(!valueGroupsGroup["Enabled"].isNull())
			groupsObject.enabled = valueGroupsGroup["Enabled"].asString() == "true";
		if(!valueGroupsGroup["Status"].isNull())
			groupsObject.status = valueGroupsGroup["Status"].asString();
		if(!valueGroupsGroup["CreatedTime"].isNull())
			groupsObject.createdTime = valueGroupsGroup["CreatedTime"].asString();
		if(!valueGroupsGroup["PushDomain"].isNull())
			groupsObject.pushDomain = valueGroupsGroup["PushDomain"].asString();
		if(!valueGroupsGroup["PlayDomain"].isNull())
			groupsObject.playDomain = valueGroupsGroup["PlayDomain"].asString();
		if(!valueGroupsGroup["LazyPull"].isNull())
			groupsObject.lazyPull = valueGroupsGroup["LazyPull"].asString() == "true";
		if(!valueGroupsGroup["Callback"].isNull())
			groupsObject.callback = valueGroupsGroup["Callback"].asString();
		if(!valueGroupsGroup["CaptureInterval"].isNull())
			groupsObject.captureInterval = std::stoi(valueGroupsGroup["CaptureInterval"].asString());
		if(!valueGroupsGroup["CaptureImage"].isNull())
			groupsObject.captureImage = std::stoi(valueGroupsGroup["CaptureImage"].asString());
		if(!valueGroupsGroup["CaptureVideo"].isNull())
			groupsObject.captureVideo = std::stoi(valueGroupsGroup["CaptureVideo"].asString());
		if(!valueGroupsGroup["CaptureOssBucket"].isNull())
			groupsObject.captureOssBucket = valueGroupsGroup["CaptureOssBucket"].asString();
		if(!valueGroupsGroup["CaptureOssPath"].isNull())
			groupsObject.captureOssPath = valueGroupsGroup["CaptureOssPath"].asString();
		if(!valueGroupsGroup["GbId"].isNull())
			groupsObject.gbId = valueGroupsGroup["GbId"].asString();
		if(!valueGroupsGroup["GbIp"].isNull())
			groupsObject.gbIp = valueGroupsGroup["GbIp"].asString();
		if(!valueGroupsGroup["GbPort"].isNull())
			groupsObject.gbPort = std::stol(valueGroupsGroup["GbPort"].asString());
		auto statsNode = value["Stats"];
		if(!statsNode["DeviceNum"].isNull())
			groupsObject.stats.deviceNum = std::stol(statsNode["DeviceNum"].asString());
		if(!statsNode["IedNum"].isNull())
			groupsObject.stats.iedNum = std::stol(statsNode["IedNum"].asString());
		if(!statsNode["IpcNum"].isNull())
			groupsObject.stats.ipcNum = std::stol(statsNode["IpcNum"].asString());
		if(!statsNode["PlatformNum"].isNull())
			groupsObject.stats.platformNum = std::stol(statsNode["PlatformNum"].asString());
		auto allGbUdpPorts = value["GbUdpPorts"]["Port"];
		for (auto value : allGbUdpPorts)
			groupsObject.gbUdpPorts.push_back(value.asString());
		auto allGbTcpPorts = value["GbTcpPorts"]["Port"];
		for (auto value : allGbTcpPorts)
			groupsObject.gbTcpPorts.push_back(value.asString());
		groups_.push_back(groupsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeGroupsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeGroupsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeGroupsResult::getPageNum()const
{
	return pageNum_;
}

long DescribeGroupsResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribeGroupsResult::Group> DescribeGroupsResult::getGroups()const
{
	return groups_;
}

