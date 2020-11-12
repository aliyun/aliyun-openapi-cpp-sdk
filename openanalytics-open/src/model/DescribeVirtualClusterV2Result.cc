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

#include <alibabacloud/openanalytics-open/model/DescribeVirtualClusterV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

DescribeVirtualClusterV2Result::DescribeVirtualClusterV2Result() :
	ServiceResult()
{}

DescribeVirtualClusterV2Result::DescribeVirtualClusterV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualClusterV2Result::~DescribeVirtualClusterV2Result()
{}

void DescribeVirtualClusterV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["CreatorId"].isNull())
			dataObject.creatorId = valueDataDataItem["CreatorId"].asString();
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		if(!valueDataDataItem["MaxCpu"].isNull())
			dataObject.maxCpu = std::stof(valueDataDataItem["MaxCpu"].asString());
		if(!valueDataDataItem["ChargeType"].isNull())
			dataObject.chargeType = valueDataDataItem["ChargeType"].asString();
		if(!valueDataDataItem["MinCpu"].isNull())
			dataObject.minCpu = valueDataDataItem["MinCpu"].asString();
		auto allUserNetWorkConfigListNode = valueDataDataItem["UserNetWorkConfigList"]["UserNetWorkConfigListItem"];
		for (auto valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem : allUserNetWorkConfigListNode)
		{
			DataItem::UserNetWorkConfigListItem userNetWorkConfigListObject;
			if(!valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem["SwitchId"].isNull())
				userNetWorkConfigListObject.switchId = valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem["SwitchId"].asString();
			if(!valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem["SecurityGroupId"].isNull())
				userNetWorkConfigListObject.securityGroupId = valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem["SecurityGroupId"].asString();
			if(!valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem["Id"].isNull())
				userNetWorkConfigListObject.id = std::stol(valueDataDataItemUserNetWorkConfigListUserNetWorkConfigListItem["Id"].asString());
			dataObject.userNetWorkConfigList.push_back(userNetWorkConfigListObject);
		}
		auto sparkEngineConfigNode = value["SparkEngineConfig"];
		if(!sparkEngineConfigNode["SparkModuleReleaseName"].isNull())
			dataObject.sparkEngineConfig.sparkModuleReleaseName = sparkEngineConfigNode["SparkModuleReleaseName"].asString();
		if(!sparkEngineConfigNode["DefaultExecutorSpecName"].isNull())
			dataObject.sparkEngineConfig.defaultExecutorSpecName = sparkEngineConfigNode["DefaultExecutorSpecName"].asString();
		if(!sparkEngineConfigNode["DefaultDriverSpecName"].isNull())
			dataObject.sparkEngineConfig.defaultDriverSpecName = sparkEngineConfigNode["DefaultDriverSpecName"].asString();
		if(!sparkEngineConfigNode["DefaultExecutorNumbers"].isNull())
			dataObject.sparkEngineConfig.defaultExecutorNumbers = std::stol(sparkEngineConfigNode["DefaultExecutorNumbers"].asString());
		if(!sparkEngineConfigNode["SparkVersionDescription"].isNull())
			dataObject.sparkEngineConfig.sparkVersionDescription = sparkEngineConfigNode["SparkVersionDescription"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeVirtualClusterV2Result::DataItem> DescribeVirtualClusterV2Result::getData()const
{
	return data_;
}

