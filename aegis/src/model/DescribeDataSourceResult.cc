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
	auto allMetaDatasNode = value["MetaDatas"]["Data"];
	for (auto valueMetaDatasData : allMetaDatasNode)
	{
		Data metaDatasObject;
		if(!valueMetaDatasData["DataSourceId"].isNull())
			metaDatasObject.dataSourceId = std::stoi(valueMetaDatasData["DataSourceId"].asString());
		if(!valueMetaDatasData["DateSourceName"].isNull())
			metaDatasObject.dateSourceName = valueMetaDatasData["DateSourceName"].asString();
		if(!valueMetaDatasData["DataSourceName"].isNull())
			metaDatasObject.dataSourceName = valueMetaDatasData["DataSourceName"].asString();
		if(!valueMetaDatasData["Description"].isNull())
			metaDatasObject.description = valueMetaDatasData["Description"].asString();
		auto allMetaDataFieldsNode = allMetaDatasNode["MetaDataFields"]["MetaDataField"];
		for (auto allMetaDatasNodeMetaDataFieldsMetaDataField : allMetaDataFieldsNode)
		{
			Data::MetaDataField metaDataFieldsObject;
			if(!allMetaDatasNodeMetaDataFieldsMetaDataField["FiledName"].isNull())
				metaDataFieldsObject.filedName = allMetaDatasNodeMetaDataFieldsMetaDataField["FiledName"].asString();
			if(!allMetaDatasNodeMetaDataFieldsMetaDataField["Filed"].isNull())
				metaDataFieldsObject.filed = allMetaDatasNodeMetaDataFieldsMetaDataField["Filed"].asString();
			if(!allMetaDatasNodeMetaDataFieldsMetaDataField["ValueType"].isNull())
				metaDataFieldsObject.valueType = allMetaDatasNodeMetaDataFieldsMetaDataField["ValueType"].asString();
			if(!allMetaDatasNodeMetaDataFieldsMetaDataField["Sample"].isNull())
				metaDataFieldsObject.sample = allMetaDatasNodeMetaDataFieldsMetaDataField["Sample"].asString();
			auto allOperatorListNode = allMetaDataFieldsNode["OperatorList"]["Operator"];
			for (auto allMetaDataFieldsNodeOperatorListOperator : allOperatorListNode)
			{
				Data::MetaDataField::_Operator operatorListObject;
				if(!allMetaDataFieldsNodeOperatorListOperator["Name"].isNull())
					operatorListObject.name = allMetaDataFieldsNodeOperatorListOperator["Name"].asString();
				if(!allMetaDataFieldsNodeOperatorListOperator["Description"].isNull())
					operatorListObject.description = allMetaDataFieldsNodeOperatorListOperator["Description"].asString();
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

