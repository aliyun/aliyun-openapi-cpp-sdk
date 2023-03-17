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

#include <alibabacloud/ens/model/GetOssUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

GetOssUsageDataResult::GetOssUsageDataResult() :
	ServiceResult()
{}

GetOssUsageDataResult::GetOssUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOssUsageDataResult::~GetOssUsageDataResult()
{}

void GetOssUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsageListNode = value["UsageList"]["UsageListItem"];
	for (auto valueUsageListUsageListItem : allUsageListNode)
	{
		UsageListItem usageListObject;
		if(!valueUsageListUsageListItem["LanRxBw"].isNull())
			usageListObject.lanRxBw = std::stol(valueUsageListUsageListItem["LanRxBw"].asString());
		if(!valueUsageListUsageListItem["LanTxBw"].isNull())
			usageListObject.lanTxBw = std::stol(valueUsageListUsageListItem["LanTxBw"].asString());
		if(!valueUsageListUsageListItem["Point"].isNull())
			usageListObject.point = std::stol(valueUsageListUsageListItem["Point"].asString());
		if(!valueUsageListUsageListItem["PointTs"].isNull())
			usageListObject.pointTs = valueUsageListUsageListItem["PointTs"].asString();
		if(!valueUsageListUsageListItem["StorageUsageByte"].isNull())
			usageListObject.storageUsageByte = std::stol(valueUsageListUsageListItem["StorageUsageByte"].asString());
		if(!valueUsageListUsageListItem["WanRxBw"].isNull())
			usageListObject.wanRxBw = std::stol(valueUsageListUsageListItem["WanRxBw"].asString());
		if(!valueUsageListUsageListItem["WanTxBw"].isNull())
			usageListObject.wanTxBw = std::stol(valueUsageListUsageListItem["WanTxBw"].asString());
		usageList_.push_back(usageListObject);
	}

}

std::vector<GetOssUsageDataResult::UsageListItem> GetOssUsageDataResult::getUsageList()const
{
	return usageList_;
}

