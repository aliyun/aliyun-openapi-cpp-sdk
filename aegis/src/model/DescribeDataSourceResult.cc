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

#include <alibabacloud/aegis/model/DescribeDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeDataSourceResult::DescribeDataSourceResult() :
	ServiceResult()
{}

DescribeDataSourceResult::DescribeDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSourceResult::~DescribeDataSourceResult()
{}

void DescribeDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMetaDatas = value["MetaDatas"]["Data"];
	for (auto value : allMetaDatas)
	{
		Data metaDatasObject;
		if(!value["DataSourceId"].isNull())
			metaDatasObject.dataSourceId = std::stoi(value["DataSourceId"].asString());
		if(!value["DateSourceName"].isNull())
			metaDatasObject.dateSourceName = value["DateSourceName"].asString();
		if(!value["Description"].isNull())
			metaDatasObject.description = value["Description"].asString();
		auto allMetaDataFields = value["MetaDataFields"]["MetaDataField"];
		for (auto value : allMetaDataFields)
		{
			Data::MetaDataField metaDataFieldsObject;
			if(!value["FiledName"].isNull())
				metaDataFieldsObject.filedName = value["FiledName"].asString();
			if(!value["Filed"].isNull())
				metaDataFieldsObject.filed = value["Filed"].asString();
			if(!value["ValueType"].isNull())
				metaDataFieldsObject.valueType = value["ValueType"].asString();
			if(!value["Sample"].isNull())
				metaDataFieldsObject.sample = value["Sample"].asString();
			auto allOperatorList = value["OperatorList"]["Operator"];
			for (auto value : allOperatorList)
			{
				Data::MetaDataField::_Operator operatorListObject;
				if(!value["Name"].isNull())
					operatorListObject.name = value["Name"].asString();
				if(!value["Description"].isNull())
					operatorListObject.description = value["Description"].asString();
				metaDataFieldsObject.operatorList.push_back(operatorListObject);
			}
			metaDatasObject.metaDataFields.push_back(metaDataFieldsObject);
		}
		metaDatas_.push_back(metaDatasObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeDataSourceResult::Data> DescribeDataSourceResult::getMetaDatas()const
{
	return metaDatas_;
}

int DescribeDataSourceResult::getCount()const
{
	return count_;
}

bool DescribeDataSourceResult::getSuccess()const
{
	return success_;
}

