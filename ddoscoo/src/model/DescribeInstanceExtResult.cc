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

#include <alibabacloud/ddoscoo/model/DescribeInstanceExtResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeInstanceExtResult::DescribeInstanceExtResult() :
	ServiceResult()
{}

DescribeInstanceExtResult::DescribeInstanceExtResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceExtResult::~DescribeInstanceExtResult()
{}

void DescribeInstanceExtResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceExtSpecsNode = value["InstanceExtSpecs"]["InstanceExtSpecsItem"];
	for (auto valueInstanceExtSpecsInstanceExtSpecsItem : allInstanceExtSpecsNode)
	{
		InstanceExtSpecsItem instanceExtSpecsObject;
		if(!valueInstanceExtSpecsInstanceExtSpecsItem["InstanceId"].isNull())
			instanceExtSpecsObject.instanceId = valueInstanceExtSpecsInstanceExtSpecsItem["InstanceId"].asString();
		if(!valueInstanceExtSpecsInstanceExtSpecsItem["NormalBandwidth"].isNull())
			instanceExtSpecsObject.normalBandwidth = std::stol(valueInstanceExtSpecsInstanceExtSpecsItem["NormalBandwidth"].asString());
		if(!valueInstanceExtSpecsInstanceExtSpecsItem["FunctionVersion"].isNull())
			instanceExtSpecsObject.functionVersion = std::stol(valueInstanceExtSpecsInstanceExtSpecsItem["FunctionVersion"].asString());
		if(!valueInstanceExtSpecsInstanceExtSpecsItem["ServicePartner"].isNull())
			instanceExtSpecsObject.servicePartner = valueInstanceExtSpecsInstanceExtSpecsItem["ServicePartner"].asString();
		if(!valueInstanceExtSpecsInstanceExtSpecsItem["ProductPlan"].isNull())
			instanceExtSpecsObject.productPlan = std::stol(valueInstanceExtSpecsInstanceExtSpecsItem["ProductPlan"].asString());
		instanceExtSpecs_.push_back(instanceExtSpecsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeInstanceExtResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeInstanceExtResult::InstanceExtSpecsItem> DescribeInstanceExtResult::getInstanceExtSpecs()const
{
	return instanceExtSpecs_;
}

