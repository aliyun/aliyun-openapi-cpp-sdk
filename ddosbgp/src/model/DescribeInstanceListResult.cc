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

#include <alibabacloud/ddosbgp/model/DescribeInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribeInstanceListResult::DescribeInstanceListResult() :
	ServiceResult()
{}

DescribeInstanceListResult::DescribeInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceListResult::~DescribeInstanceListResult()
{}

void DescribeInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["Status"].isNull())
			instanceListObject.status = valueInstanceListInstance["Status"].asString();
		if(!valueInstanceListInstance["IpType"].isNull())
			instanceListObject.ipType = valueInstanceListInstance["IpType"].asString();
		if(!valueInstanceListInstance["AutoRenewal"].isNull())
			instanceListObject.autoRenewal = valueInstanceListInstance["AutoRenewal"].asString() == "true";
		if(!valueInstanceListInstance["Remark"].isNull())
			instanceListObject.remark = valueInstanceListInstance["Remark"].asString();
		if(!valueInstanceListInstance["ExpireTime"].isNull())
			instanceListObject.expireTime = std::stol(valueInstanceListInstance["ExpireTime"].asString());
		if(!valueInstanceListInstance["Product"].isNull())
			instanceListObject.product = valueInstanceListInstance["Product"].asString();
		if(!valueInstanceListInstance["GmtCreate"].isNull())
			instanceListObject.gmtCreate = std::stol(valueInstanceListInstance["GmtCreate"].asString());
		if(!valueInstanceListInstance["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstance["InstanceId"].asString();
		if(!valueInstanceListInstance["InstanceType"].isNull())
			instanceListObject.instanceType = valueInstanceListInstance["InstanceType"].asString();
		if(!valueInstanceListInstance["BlackholdingCount"].isNull())
			instanceListObject.blackholdingCount = valueInstanceListInstance["BlackholdingCount"].asString();
		if(!valueInstanceListInstance["CoverageType"].isNull())
			instanceListObject.coverageType = std::stoi(valueInstanceListInstance["CoverageType"].asString());
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeInstanceListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeInstanceListResult::Instance> DescribeInstanceListResult::getInstanceList()const
{
	return instanceList_;
}

