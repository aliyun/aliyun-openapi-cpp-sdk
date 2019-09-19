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

#include <alibabacloud/yundun-ds/model/DescribeDataCountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataCountsResult::DescribeDataCountsResult() :
	ServiceResult()
{}

DescribeDataCountsResult::DescribeDataCountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataCountsResult::~DescribeDataCountsResult()
{}

void DescribeDataCountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataCountListNode = value["DataCountList"]["DataCount"];
	for (auto valueDataCountListDataCount : allDataCountListNode)
	{
		DataCount dataCountListObject;
		if(!valueDataCountListDataCount["ProductId"].isNull())
			dataCountListObject.productId = std::stol(valueDataCountListDataCount["ProductId"].asString());
		if(!valueDataCountListDataCount["ProductCode"].isNull())
			dataCountListObject.productCode = valueDataCountListDataCount["ProductCode"].asString();
		auto instanceNode = value["Instance"];
		if(!instanceNode["TotalCount"].isNull())
			dataCountListObject.instance.totalCount = std::stol(instanceNode["TotalCount"].asString());
		if(!instanceNode["Count"].isNull())
			dataCountListObject.instance.count = std::stol(instanceNode["Count"].asString());
		if(!instanceNode["SensitiveCount"].isNull())
			dataCountListObject.instance.sensitiveCount = std::stol(instanceNode["SensitiveCount"].asString());
		if(!instanceNode["LastCount"].isNull())
			dataCountListObject.instance.lastCount = std::stol(instanceNode["LastCount"].asString());
		if(!instanceNode["LastSensitiveCount"].isNull())
			dataCountListObject.instance.lastSensitiveCount = std::stol(instanceNode["LastSensitiveCount"].asString());
		auto tableNode = value["Table"];
		if(!tableNode["TotalCount"].isNull())
			dataCountListObject.table.totalCount = std::stol(tableNode["TotalCount"].asString());
		if(!tableNode["Count"].isNull())
			dataCountListObject.table.count = std::stol(tableNode["Count"].asString());
		if(!tableNode["SensitiveCount"].isNull())
			dataCountListObject.table.sensitiveCount = std::stol(tableNode["SensitiveCount"].asString());
		if(!tableNode["LastCount"].isNull())
			dataCountListObject.table.lastCount = std::stol(tableNode["LastCount"].asString());
		if(!tableNode["LastSensitiveCount"].isNull())
			dataCountListObject.table.lastSensitiveCount = std::stol(tableNode["LastSensitiveCount"].asString());
		auto packageNode = value["Package"];
		if(!packageNode["TotalCount"].isNull())
			dataCountListObject.package.totalCount = std::stol(packageNode["TotalCount"].asString());
		if(!packageNode["Count"].isNull())
			dataCountListObject.package.count = std::stol(packageNode["Count"].asString());
		if(!packageNode["SensitiveCount"].isNull())
			dataCountListObject.package.sensitiveCount = std::stol(packageNode["SensitiveCount"].asString());
		if(!packageNode["LastCount"].isNull())
			dataCountListObject.package.lastCount = std::stol(packageNode["LastCount"].asString());
		if(!packageNode["LastSensitiveCount"].isNull())
			dataCountListObject.package.lastSensitiveCount = std::stol(packageNode["LastSensitiveCount"].asString());
		auto columnNode = value["Column"];
		if(!columnNode["TotalCount"].isNull())
			dataCountListObject.column.totalCount = std::stol(columnNode["TotalCount"].asString());
		if(!columnNode["Count"].isNull())
			dataCountListObject.column.count = std::stol(columnNode["Count"].asString());
		if(!columnNode["SensitiveCount"].isNull())
			dataCountListObject.column.sensitiveCount = std::stol(columnNode["SensitiveCount"].asString());
		if(!columnNode["LastCount"].isNull())
			dataCountListObject.column.lastCount = std::stol(columnNode["LastCount"].asString());
		if(!columnNode["LastSensitiveCount"].isNull())
			dataCountListObject.column.lastSensitiveCount = std::stol(columnNode["LastSensitiveCount"].asString());
		auto ossNode = value["Oss"];
		if(!ossNode["TotalCount"].isNull())
			dataCountListObject.oss.totalCount = std::stol(ossNode["TotalCount"].asString());
		if(!ossNode["Count"].isNull())
			dataCountListObject.oss.count = std::stol(ossNode["Count"].asString());
		if(!ossNode["SensitiveCount"].isNull())
			dataCountListObject.oss.sensitiveCount = std::stol(ossNode["SensitiveCount"].asString());
		if(!ossNode["LastCount"].isNull())
			dataCountListObject.oss.lastCount = std::stol(ossNode["LastCount"].asString());
		if(!ossNode["LastSensitiveCount"].isNull())
			dataCountListObject.oss.lastSensitiveCount = std::stol(ossNode["LastSensitiveCount"].asString());
		dataCountList_.push_back(dataCountListObject);
	}

}

std::vector<DescribeDataCountsResult::DataCount> DescribeDataCountsResult::getDataCountList()const
{
	return dataCountList_;
}

