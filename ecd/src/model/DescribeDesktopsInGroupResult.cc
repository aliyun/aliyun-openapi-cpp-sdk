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

#include <alibabacloud/ecd/model/DescribeDesktopsInGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDesktopsInGroupResult::DescribeDesktopsInGroupResult() :
	ServiceResult()
{}

DescribeDesktopsInGroupResult::DescribeDesktopsInGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDesktopsInGroupResult::~DescribeDesktopsInGroupResult()
{}

void DescribeDesktopsInGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPaidDesktopsNode = value["PaidDesktops"]["PaidDesktop"];
	for (auto valuePaidDesktopsPaidDesktop : allPaidDesktopsNode)
	{
		PaidDesktop paidDesktopsObject;
		if(!valuePaidDesktopsPaidDesktop["EndUserId"].isNull())
			paidDesktopsObject.endUserId = valuePaidDesktopsPaidDesktop["EndUserId"].asString();
		if(!valuePaidDesktopsPaidDesktop["DesktopStatus"].isNull())
			paidDesktopsObject.desktopStatus = valuePaidDesktopsPaidDesktop["DesktopStatus"].asString();
		if(!valuePaidDesktopsPaidDesktop["DesktopName"].isNull())
			paidDesktopsObject.desktopName = valuePaidDesktopsPaidDesktop["DesktopName"].asString();
		if(!valuePaidDesktopsPaidDesktop["ConnectionStatus"].isNull())
			paidDesktopsObject.connectionStatus = valuePaidDesktopsPaidDesktop["ConnectionStatus"].asString();
		if(!valuePaidDesktopsPaidDesktop["DesktopId"].isNull())
			paidDesktopsObject.desktopId = valuePaidDesktopsPaidDesktop["DesktopId"].asString();
		if(!valuePaidDesktopsPaidDesktop["EndUserName"].isNull())
			paidDesktopsObject.endUserName = valuePaidDesktopsPaidDesktop["EndUserName"].asString();
		if(!valuePaidDesktopsPaidDesktop["ManagementFlag"].isNull())
			paidDesktopsObject.managementFlag = valuePaidDesktopsPaidDesktop["ManagementFlag"].asString();
		if(!valuePaidDesktopsPaidDesktop["ResetTime"].isNull())
			paidDesktopsObject.resetTime = valuePaidDesktopsPaidDesktop["ResetTime"].asString();
		if(!valuePaidDesktopsPaidDesktop["ImageId"].isNull())
			paidDesktopsObject.imageId = valuePaidDesktopsPaidDesktop["ImageId"].asString();
		if(!valuePaidDesktopsPaidDesktop["ImageName"].isNull())
			paidDesktopsObject.imageName = valuePaidDesktopsPaidDesktop["ImageName"].asString();
		if(!valuePaidDesktopsPaidDesktop["SystemDiskSize"].isNull())
			paidDesktopsObject.systemDiskSize = std::stoi(valuePaidDesktopsPaidDesktop["SystemDiskSize"].asString());
		if(!valuePaidDesktopsPaidDesktop["OsType"].isNull())
			paidDesktopsObject.osType = valuePaidDesktopsPaidDesktop["OsType"].asString();
		if(!valuePaidDesktopsPaidDesktop["GpuDriverVersion"].isNull())
			paidDesktopsObject.gpuDriverVersion = valuePaidDesktopsPaidDesktop["GpuDriverVersion"].asString();
		if(!valuePaidDesktopsPaidDesktop["DiskType"].isNull())
			paidDesktopsObject.diskType = valuePaidDesktopsPaidDesktop["DiskType"].asString();
		if(!valuePaidDesktopsPaidDesktop["MemberEniIp"].isNull())
			paidDesktopsObject.memberEniIp = valuePaidDesktopsPaidDesktop["MemberEniIp"].asString();
		if(!valuePaidDesktopsPaidDesktop["PrimaryEniIp"].isNull())
			paidDesktopsObject.primaryEniIp = valuePaidDesktopsPaidDesktop["PrimaryEniIp"].asString();
		if(!valuePaidDesktopsPaidDesktop["ProtocolType"].isNull())
			paidDesktopsObject.protocolType = valuePaidDesktopsPaidDesktop["ProtocolType"].asString();
		if(!valuePaidDesktopsPaidDesktop["FotaVersion"].isNull())
			paidDesktopsObject.fotaVersion = valuePaidDesktopsPaidDesktop["FotaVersion"].asString();
		auto allEndUserIds = value["EndUserIds"]["endUserIds"];
		for (auto value : allEndUserIds)
			paidDesktopsObject.endUserIds.push_back(value.asString());
		auto allEndUserNames = value["EndUserNames"]["endUserNames"];
		for (auto value : allEndUserNames)
			paidDesktopsObject.endUserNames.push_back(value.asString());
		auto allManagementFlags = value["ManagementFlags"]["managementFlags"];
		for (auto value : allManagementFlags)
			paidDesktopsObject.managementFlags.push_back(value.asString());
		paidDesktops_.push_back(paidDesktopsObject);
	}
	auto allPostPaidDesktopsNode = value["PostPaidDesktops"]["PostPaidDesktop"];
	for (auto valuePostPaidDesktopsPostPaidDesktop : allPostPaidDesktopsNode)
	{
		PostPaidDesktop postPaidDesktopsObject;
		if(!valuePostPaidDesktopsPostPaidDesktop["CreateDuration"].isNull())
			postPaidDesktopsObject.createDuration = valuePostPaidDesktopsPostPaidDesktop["CreateDuration"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["EndUserId"].isNull())
			postPaidDesktopsObject.endUserId = valuePostPaidDesktopsPostPaidDesktop["EndUserId"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["DesktopStatus"].isNull())
			postPaidDesktopsObject.desktopStatus = valuePostPaidDesktopsPostPaidDesktop["DesktopStatus"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["CreateTime"].isNull())
			postPaidDesktopsObject.createTime = valuePostPaidDesktopsPostPaidDesktop["CreateTime"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ReleaseTime"].isNull())
			postPaidDesktopsObject.releaseTime = valuePostPaidDesktopsPostPaidDesktop["ReleaseTime"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["DesktopName"].isNull())
			postPaidDesktopsObject.desktopName = valuePostPaidDesktopsPostPaidDesktop["DesktopName"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ConnectionStatus"].isNull())
			postPaidDesktopsObject.connectionStatus = valuePostPaidDesktopsPostPaidDesktop["ConnectionStatus"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["DesktopId"].isNull())
			postPaidDesktopsObject.desktopId = valuePostPaidDesktopsPostPaidDesktop["DesktopId"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["EndUserName"].isNull())
			postPaidDesktopsObject.endUserName = valuePostPaidDesktopsPostPaidDesktop["EndUserName"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ManagementFlag"].isNull())
			postPaidDesktopsObject.managementFlag = valuePostPaidDesktopsPostPaidDesktop["ManagementFlag"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ResetTime"].isNull())
			postPaidDesktopsObject.resetTime = valuePostPaidDesktopsPostPaidDesktop["ResetTime"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ImageId"].isNull())
			postPaidDesktopsObject.imageId = valuePostPaidDesktopsPostPaidDesktop["ImageId"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ImageName"].isNull())
			postPaidDesktopsObject.imageName = valuePostPaidDesktopsPostPaidDesktop["ImageName"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["SystemDiskSize"].isNull())
			postPaidDesktopsObject.systemDiskSize = std::stoi(valuePostPaidDesktopsPostPaidDesktop["SystemDiskSize"].asString());
		if(!valuePostPaidDesktopsPostPaidDesktop["OsType"].isNull())
			postPaidDesktopsObject.osType = valuePostPaidDesktopsPostPaidDesktop["OsType"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["GpuDriverVersion"].isNull())
			postPaidDesktopsObject.gpuDriverVersion = valuePostPaidDesktopsPostPaidDesktop["GpuDriverVersion"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["DiskType"].isNull())
			postPaidDesktopsObject.diskType = valuePostPaidDesktopsPostPaidDesktop["DiskType"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["MemberEniIp"].isNull())
			postPaidDesktopsObject.memberEniIp = valuePostPaidDesktopsPostPaidDesktop["MemberEniIp"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["PrimaryEniIp"].isNull())
			postPaidDesktopsObject.primaryEniIp = valuePostPaidDesktopsPostPaidDesktop["PrimaryEniIp"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["ProtocolType"].isNull())
			postPaidDesktopsObject.protocolType = valuePostPaidDesktopsPostPaidDesktop["ProtocolType"].asString();
		if(!valuePostPaidDesktopsPostPaidDesktop["FotaVersion"].isNull())
			postPaidDesktopsObject.fotaVersion = valuePostPaidDesktopsPostPaidDesktop["FotaVersion"].asString();
		auto allEndUserIds1 = value["EndUserIds"]["endUserIds"];
		for (auto value : allEndUserIds1)
			postPaidDesktopsObject.endUserIds1.push_back(value.asString());
		auto allEndUserNames2 = value["EndUserNames"]["endUserNames"];
		for (auto value : allEndUserNames2)
			postPaidDesktopsObject.endUserNames2.push_back(value.asString());
		auto allManagementFlags3 = value["ManagementFlags"]["managementFlags"];
		for (auto value : allManagementFlags3)
			postPaidDesktopsObject.managementFlags3.push_back(value.asString());
		postPaidDesktops_.push_back(postPaidDesktopsObject);
	}
	if(!value["PostPaidDesktopsCount"].isNull())
		postPaidDesktopsCount_ = std::stoi(value["PostPaidDesktopsCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PaidDesktopsCount"].isNull())
		paidDesktopsCount_ = std::stoi(value["PaidDesktopsCount"].asString());
	if(!value["PostPaidDesktopsTotalAmount"].isNull())
		postPaidDesktopsTotalAmount_ = std::stoi(value["PostPaidDesktopsTotalAmount"].asString());
	if(!value["OnlinePrePaidDesktopsCount"].isNull())
		onlinePrePaidDesktopsCount_ = std::stoi(value["OnlinePrePaidDesktopsCount"].asString());
	if(!value["RunningPrePaidDesktopsCount"].isNull())
		runningPrePaidDesktopsCount_ = std::stoi(value["RunningPrePaidDesktopsCount"].asString());
	if(!value["StopedPrePaidDesktopsCount"].isNull())
		stopedPrePaidDesktopsCount_ = std::stoi(value["StopedPrePaidDesktopsCount"].asString());

}

std::vector<DescribeDesktopsInGroupResult::PaidDesktop> DescribeDesktopsInGroupResult::getPaidDesktops()const
{
	return paidDesktops_;
}

int DescribeDesktopsInGroupResult::getStopedPrePaidDesktopsCount()const
{
	return stopedPrePaidDesktopsCount_;
}

int DescribeDesktopsInGroupResult::getPaidDesktopsCount()const
{
	return paidDesktopsCount_;
}

std::string DescribeDesktopsInGroupResult::getNextToken()const
{
	return nextToken_;
}

int DescribeDesktopsInGroupResult::getPostPaidDesktopsTotalAmount()const
{
	return postPaidDesktopsTotalAmount_;
}

int DescribeDesktopsInGroupResult::getPostPaidDesktopsCount()const
{
	return postPaidDesktopsCount_;
}

int DescribeDesktopsInGroupResult::getRunningPrePaidDesktopsCount()const
{
	return runningPrePaidDesktopsCount_;
}

std::vector<DescribeDesktopsInGroupResult::PostPaidDesktop> DescribeDesktopsInGroupResult::getPostPaidDesktops()const
{
	return postPaidDesktops_;
}

int DescribeDesktopsInGroupResult::getOnlinePrePaidDesktopsCount()const
{
	return onlinePrePaidDesktopsCount_;
}

