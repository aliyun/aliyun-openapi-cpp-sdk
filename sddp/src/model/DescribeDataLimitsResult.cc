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

#include <alibabacloud/sddp/model/DescribeDataLimitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataLimitsResult::DescribeDataLimitsResult() :
	ServiceResult()
{}

DescribeDataLimitsResult::DescribeDataLimitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLimitsResult::~DescribeDataLimitsResult()
{}

void DescribeDataLimitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataLimitList = value["DataLimitList"]["DataLimit"];
	for (auto value : allDataLimitList)
	{
		DataLimit dataLimitListObject;
		if(!value["RegionId"].isNull())
			dataLimitListObject.regionId = value["RegionId"].asString();
		if(!value["LocalName"].isNull())
			dataLimitListObject.localName = value["LocalName"].asString();
		if(!value["ParentId"].isNull())
			dataLimitListObject.parentId = value["ParentId"].asString();
		if(!value["Id"].isNull())
			dataLimitListObject.id = std::stol(value["Id"].asString());
		if(!value["UserName"].isNull())
			dataLimitListObject.userName = value["UserName"].asString();
		if(!value["GmtCreate"].isNull())
			dataLimitListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["Connector"].isNull())
			dataLimitListObject.connector = value["Connector"].asString();
		if(!value["CheckStatus"].isNull())
			dataLimitListObject.checkStatus = std::stoi(value["CheckStatus"].asString());
		if(!value["CheckStatusName"].isNull())
			dataLimitListObject.checkStatusName = value["CheckStatusName"].asString();
		dataLimitList_.push_back(dataLimitListObject);
	}

}

std::vector<DescribeDataLimitsResult::DataLimit> DescribeDataLimitsResult::getDataLimitList()const
{
	return dataLimitList_;
}

