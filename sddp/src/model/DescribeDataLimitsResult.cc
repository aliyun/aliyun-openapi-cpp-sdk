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
	auto allDataLimitListNode = value["DataLimitList"]["DataLimit"];
	for (auto valueDataLimitListDataLimit : allDataLimitListNode)
	{
		DataLimit dataLimitListObject;
		if(!valueDataLimitListDataLimit["RegionId"].isNull())
			dataLimitListObject.regionId = valueDataLimitListDataLimit["RegionId"].asString();
		if(!valueDataLimitListDataLimit["LocalName"].isNull())
			dataLimitListObject.localName = valueDataLimitListDataLimit["LocalName"].asString();
		if(!valueDataLimitListDataLimit["ParentId"].isNull())
			dataLimitListObject.parentId = valueDataLimitListDataLimit["ParentId"].asString();
		if(!valueDataLimitListDataLimit["Id"].isNull())
			dataLimitListObject.id = std::stol(valueDataLimitListDataLimit["Id"].asString());
		if(!valueDataLimitListDataLimit["UserName"].isNull())
			dataLimitListObject.userName = valueDataLimitListDataLimit["UserName"].asString();
		if(!valueDataLimitListDataLimit["GmtCreate"].isNull())
			dataLimitListObject.gmtCreate = std::stol(valueDataLimitListDataLimit["GmtCreate"].asString());
		if(!valueDataLimitListDataLimit["Connector"].isNull())
			dataLimitListObject.connector = valueDataLimitListDataLimit["Connector"].asString();
		if(!valueDataLimitListDataLimit["CheckStatus"].isNull())
			dataLimitListObject.checkStatus = std::stoi(valueDataLimitListDataLimit["CheckStatus"].asString());
		if(!valueDataLimitListDataLimit["CheckStatusName"].isNull())
			dataLimitListObject.checkStatusName = valueDataLimitListDataLimit["CheckStatusName"].asString();
		if(!valueDataLimitListDataLimit["ResourceType"].isNull())
			dataLimitListObject.resourceType = std::stol(valueDataLimitListDataLimit["ResourceType"].asString());
		if(!valueDataLimitListDataLimit["ResourceTypeCode"].isNull())
			dataLimitListObject.resourceTypeCode = valueDataLimitListDataLimit["ResourceTypeCode"].asString();
		if(!valueDataLimitListDataLimit["AuditStatus"].isNull())
			dataLimitListObject.auditStatus = std::stoi(valueDataLimitListDataLimit["AuditStatus"].asString());
		if(!valueDataLimitListDataLimit["LogStoreDay"].isNull())
			dataLimitListObject.logStoreDay = std::stoi(valueDataLimitListDataLimit["LogStoreDay"].asString());
		dataLimitList_.push_back(dataLimitListObject);
	}

}

std::vector<DescribeDataLimitsResult::DataLimit> DescribeDataLimitsResult::getDataLimitList()const
{
	return dataLimitList_;
}

