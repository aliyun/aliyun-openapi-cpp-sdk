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

#include <alibabacloud/sas/model/DescribeInstanceRebootStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeInstanceRebootStatusResult::DescribeInstanceRebootStatusResult() :
	ServiceResult()
{}

DescribeInstanceRebootStatusResult::DescribeInstanceRebootStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceRebootStatusResult::~DescribeInstanceRebootStatusResult()
{}

void DescribeInstanceRebootStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRebootStatusesNode = value["RebootStatuses"]["RebootStatus"];
	for (auto valueRebootStatusesRebootStatus : allRebootStatusesNode)
	{
		RebootStatus rebootStatusesObject;
		if(!valueRebootStatusesRebootStatus["Uuid"].isNull())
			rebootStatusesObject.uuid = valueRebootStatusesRebootStatus["Uuid"].asString();
		if(!valueRebootStatusesRebootStatus["RebootStatus"].isNull())
			rebootStatusesObject.rebootStatus = std::stoi(valueRebootStatusesRebootStatus["RebootStatus"].asString());
		if(!valueRebootStatusesRebootStatus["Code"].isNull())
			rebootStatusesObject.code = valueRebootStatusesRebootStatus["Code"].asString();
		if(!valueRebootStatusesRebootStatus["Msg"].isNull())
			rebootStatusesObject.msg = valueRebootStatusesRebootStatus["Msg"].asString();
		rebootStatuses_.push_back(rebootStatusesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstanceRebootStatusResult::RebootStatus> DescribeInstanceRebootStatusResult::getRebootStatuses()const
{
	return rebootStatuses_;
}

int DescribeInstanceRebootStatusResult::getTotalCount()const
{
	return totalCount_;
}

