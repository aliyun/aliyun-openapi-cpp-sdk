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

#include <alibabacloud/hitsdb/model/DescribeHiTSDBInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

DescribeHiTSDBInstanceListResult::DescribeHiTSDBInstanceListResult() :
	ServiceResult()
{}

DescribeHiTSDBInstanceListResult::DescribeHiTSDBInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHiTSDBInstanceListResult::~DescribeHiTSDBInstanceListResult()
{}

void DescribeHiTSDBInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstance["InstanceId"].asString();
		if(!valueInstanceListInstance["InstanceAlias"].isNull())
			instanceListObject.instanceAlias = valueInstanceListInstance["InstanceAlias"].asString();
		if(!valueInstanceListInstance["InstanceDescription"].isNull())
			instanceListObject.instanceDescription = valueInstanceListInstance["InstanceDescription"].asString();
		if(!valueInstanceListInstance["UserId"].isNull())
			instanceListObject.userId = valueInstanceListInstance["UserId"].asString();
		if(!valueInstanceListInstance["RegionId"].isNull())
			instanceListObject.regionId = valueInstanceListInstance["RegionId"].asString();
		if(!valueInstanceListInstance["ZoneId"].isNull())
			instanceListObject.zoneId = valueInstanceListInstance["ZoneId"].asString();
		if(!valueInstanceListInstance["InstanceStatus"].isNull())
			instanceListObject.instanceStatus = valueInstanceListInstance["InstanceStatus"].asString();
		if(!valueInstanceListInstance["ChargeType"].isNull())
			instanceListObject.chargeType = valueInstanceListInstance["ChargeType"].asString();
		if(!valueInstanceListInstance["NetworkType"].isNull())
			instanceListObject.networkType = valueInstanceListInstance["NetworkType"].asString();
		if(!valueInstanceListInstance["GmtCreated"].isNull())
			instanceListObject.gmtCreated = valueInstanceListInstance["GmtCreated"].asString();
		if(!valueInstanceListInstance["GmtExpire"].isNull())
			instanceListObject.gmtExpire = valueInstanceListInstance["GmtExpire"].asString();
		if(!valueInstanceListInstance["InstanceClass"].isNull())
			instanceListObject.instanceClass = valueInstanceListInstance["InstanceClass"].asString();
		if(!valueInstanceListInstance["InstanceStorage"].isNull())
			instanceListObject.instanceStorage = valueInstanceListInstance["InstanceStorage"].asString();
		if(!valueInstanceListInstance["InstanceTps"].isNull())
			instanceListObject.instanceTps = valueInstanceListInstance["InstanceTps"].asString();
		if(!valueInstanceListInstance["LockMode"].isNull())
			instanceListObject.lockMode = valueInstanceListInstance["LockMode"].asString();
		if(!valueInstanceListInstance["EngineType"].isNull())
			instanceListObject.engineType = valueInstanceListInstance["EngineType"].asString();
		if(!valueInstanceListInstance["MaxSeriesPerDatabase"].isNull())
			instanceListObject.maxSeriesPerDatabase = valueInstanceListInstance["MaxSeriesPerDatabase"].asString();
		if(!valueInstanceListInstance["VpcId"].isNull())
			instanceListObject.vpcId = valueInstanceListInstance["VpcId"].asString();
		if(!valueInstanceListInstance["VswitchId"].isNull())
			instanceListObject.vswitchId = valueInstanceListInstance["VswitchId"].asString();
		if(!valueInstanceListInstance["Status"].isNull())
			instanceListObject.status = valueInstanceListInstance["Status"].asString();
		if(!valueInstanceListInstance["PaymentType"].isNull())
			instanceListObject.paymentType = valueInstanceListInstance["PaymentType"].asString();
		if(!valueInstanceListInstance["CreateTime"].isNull())
			instanceListObject.createTime = std::stol(valueInstanceListInstance["CreateTime"].asString());
		if(!valueInstanceListInstance["ExpiredTime"].isNull())
			instanceListObject.expiredTime = std::stol(valueInstanceListInstance["ExpiredTime"].asString());
		instanceList_.push_back(instanceListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeHiTSDBInstanceListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHiTSDBInstanceListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeHiTSDBInstanceListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeHiTSDBInstanceListResult::Instance> DescribeHiTSDBInstanceListResult::getInstanceList()const
{
	return instanceList_;
}

