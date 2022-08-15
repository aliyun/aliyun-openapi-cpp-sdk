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

#include <alibabacloud/hitsdb/model/GetLindormInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

GetLindormInstanceListResult::GetLindormInstanceListResult() :
	ServiceResult()
{}

GetLindormInstanceListResult::GetLindormInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLindormInstanceListResult::~GetLindormInstanceListResult()
{}

void GetLindormInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["LindormInstanceSummary"];
	for (auto valueInstanceListLindormInstanceSummary : allInstanceListNode)
	{
		LindormInstanceSummary instanceListObject;
		if(!valueInstanceListLindormInstanceSummary["VpcId"].isNull())
			instanceListObject.vpcId = valueInstanceListLindormInstanceSummary["VpcId"].asString();
		if(!valueInstanceListLindormInstanceSummary["EngineType"].isNull())
			instanceListObject.engineType = valueInstanceListLindormInstanceSummary["EngineType"].asString();
		if(!valueInstanceListLindormInstanceSummary["ExpireTime"].isNull())
			instanceListObject.expireTime = valueInstanceListLindormInstanceSummary["ExpireTime"].asString();
		if(!valueInstanceListLindormInstanceSummary["CreateTime"].isNull())
			instanceListObject.createTime = valueInstanceListLindormInstanceSummary["CreateTime"].asString();
		if(!valueInstanceListLindormInstanceSummary["PayType"].isNull())
			instanceListObject.payType = valueInstanceListLindormInstanceSummary["PayType"].asString();
		if(!valueInstanceListLindormInstanceSummary["AliUid"].isNull())
			instanceListObject.aliUid = std::stol(valueInstanceListLindormInstanceSummary["AliUid"].asString());
		if(!valueInstanceListLindormInstanceSummary["InstanceStorage"].isNull())
			instanceListObject.instanceStorage = valueInstanceListLindormInstanceSummary["InstanceStorage"].asString();
		if(!valueInstanceListLindormInstanceSummary["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListLindormInstanceSummary["InstanceId"].asString();
		if(!valueInstanceListLindormInstanceSummary["NetworkType"].isNull())
			instanceListObject.networkType = valueInstanceListLindormInstanceSummary["NetworkType"].asString();
		if(!valueInstanceListLindormInstanceSummary["ServiceType"].isNull())
			instanceListObject.serviceType = valueInstanceListLindormInstanceSummary["ServiceType"].asString();
		if(!valueInstanceListLindormInstanceSummary["RegionId"].isNull())
			instanceListObject.regionId = valueInstanceListLindormInstanceSummary["RegionId"].asString();
		if(!valueInstanceListLindormInstanceSummary["CreateMilliseconds"].isNull())
			instanceListObject.createMilliseconds = std::stol(valueInstanceListLindormInstanceSummary["CreateMilliseconds"].asString());
		if(!valueInstanceListLindormInstanceSummary["InstanceAlias"].isNull())
			instanceListObject.instanceAlias = valueInstanceListLindormInstanceSummary["InstanceAlias"].asString();
		if(!valueInstanceListLindormInstanceSummary["ZoneId"].isNull())
			instanceListObject.zoneId = valueInstanceListLindormInstanceSummary["ZoneId"].asString();
		if(!valueInstanceListLindormInstanceSummary["InstanceStatus"].isNull())
			instanceListObject.instanceStatus = valueInstanceListLindormInstanceSummary["InstanceStatus"].asString();
		if(!valueInstanceListLindormInstanceSummary["ExpiredMilliseconds"].isNull())
			instanceListObject.expiredMilliseconds = std::stol(valueInstanceListLindormInstanceSummary["ExpiredMilliseconds"].asString());
		if(!valueInstanceListLindormInstanceSummary["EnableStream"].isNull())
			instanceListObject.enableStream = valueInstanceListLindormInstanceSummary["EnableStream"].asString() == "true";
		if(!valueInstanceListLindormInstanceSummary["EnableCompute"].isNull())
			instanceListObject.enableCompute = valueInstanceListLindormInstanceSummary["EnableCompute"].asString() == "true";
		if(!valueInstanceListLindormInstanceSummary["ResourceGroupId"].isNull())
			instanceListObject.resourceGroupId = valueInstanceListLindormInstanceSummary["ResourceGroupId"].asString();
		auto allTagsNode = valueInstanceListLindormInstanceSummary["Tags"]["Tag"];
		for (auto valueInstanceListLindormInstanceSummaryTagsTag : allTagsNode)
		{
			LindormInstanceSummary::Tag tagsObject;
			if(!valueInstanceListLindormInstanceSummaryTagsTag["Key"].isNull())
				tagsObject.key = valueInstanceListLindormInstanceSummaryTagsTag["Key"].asString();
			if(!valueInstanceListLindormInstanceSummaryTagsTag["Value"].isNull())
				tagsObject.value = valueInstanceListLindormInstanceSummaryTagsTag["Value"].asString();
			instanceListObject.tags.push_back(tagsObject);
		}
		instanceList_.push_back(instanceListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int GetLindormInstanceListResult::getPageSize()const
{
	return pageSize_;
}

int GetLindormInstanceListResult::getPageNumber()const
{
	return pageNumber_;
}

int GetLindormInstanceListResult::getTotal()const
{
	return total_;
}

std::vector<GetLindormInstanceListResult::LindormInstanceSummary> GetLindormInstanceListResult::getInstanceList()const
{
	return instanceList_;
}

