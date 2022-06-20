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

#include <alibabacloud/sas/model/DescribeVpcListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVpcListResult::DescribeVpcListResult() :
	ServiceResult()
{}

DescribeVpcListResult::DescribeVpcListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpcListResult::~DescribeVpcListResult()
{}

void DescribeVpcListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcListNode = value["VpcList"]["Vpc"];
	for (auto valueVpcListVpc : allVpcListNode)
	{
		Vpc vpcListObject;
		if(!valueVpcListVpc["Status"].isNull())
			vpcListObject.status = std::stoi(valueVpcListVpc["Status"].asString());
		if(!valueVpcListVpc["InstanceDesc"].isNull())
			vpcListObject.instanceDesc = valueVpcListVpc["InstanceDesc"].asString();
		if(!valueVpcListVpc["InstanceName"].isNull())
			vpcListObject.instanceName = valueVpcListVpc["InstanceName"].asString();
		if(!valueVpcListVpc["EcsCount"].isNull())
			vpcListObject.ecsCount = std::stoi(valueVpcListVpc["EcsCount"].asString());
		if(!valueVpcListVpc["MiddleStatus"].isNull())
			vpcListObject.middleStatus = std::stoi(valueVpcListVpc["MiddleStatus"].asString());
		if(!valueVpcListVpc["InstanceId"].isNull())
			vpcListObject.instanceId = valueVpcListVpc["InstanceId"].asString();
		if(!valueVpcListVpc["RegionId"].isNull())
			vpcListObject.regionId = valueVpcListVpc["RegionId"].asString();
		vpcList_.push_back(vpcListObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeVpcListResult::Vpc> DescribeVpcListResult::getVpcList()const
{
	return vpcList_;
}

int DescribeVpcListResult::getCount()const
{
	return count_;
}

