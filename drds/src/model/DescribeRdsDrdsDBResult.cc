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

#include <alibabacloud/drds/model/DescribeRdsDrdsDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRdsDrdsDBResult::DescribeRdsDrdsDBResult() :
	ServiceResult()
{}

DescribeRdsDrdsDBResult::DescribeRdsDrdsDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsDrdsDBResult::~DescribeRdsDrdsDBResult()
{}

void DescribeRdsDrdsDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRdsDrdsDbsNode = value["RdsDrdsDbs"]["RdsDrdsDb"];
	for (auto valueRdsDrdsDbsRdsDrdsDb : allRdsDrdsDbsNode)
	{
		RdsDrdsDb rdsDrdsDbsObject;
		if(!valueRdsDrdsDbsRdsDrdsDb["RdsId"].isNull())
			rdsDrdsDbsObject.rdsId = valueRdsDrdsDbsRdsDrdsDb["RdsId"].asString();
		auto allDBList = value["DBList"]["DB"];
		for (auto value : allDBList)
			rdsDrdsDbsObject.dBList.push_back(value.asString());
		rdsDrdsDbs_.push_back(rdsDrdsDbsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRdsDrdsDBResult::RdsDrdsDb> DescribeRdsDrdsDBResult::getRdsDrdsDbs()const
{
	return rdsDrdsDbs_;
}

bool DescribeRdsDrdsDBResult::getSuccess()const
{
	return success_;
}

