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

#include <alibabacloud/emr/model/ListDataSourceSchemaTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListDataSourceSchemaTableResult::ListDataSourceSchemaTableResult() :
	ServiceResult()
{}

ListDataSourceSchemaTableResult::ListDataSourceSchemaTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceSchemaTableResult::~ListDataSourceSchemaTableResult()
{}

void ListDataSourceSchemaTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSchemaList = value["SchemaList"]["Schema"];
	for (auto value : allSchemaList)
	{
		Schema schemaListObject;
		if(!value["DbType"].isNull())
			schemaListObject.dbType = value["DbType"].asString();
		if(!value["DbVersion"].isNull())
			schemaListObject.dbVersion = value["DbVersion"].asString();
		if(!value["DbName"].isNull())
			schemaListObject.dbName = value["DbName"].asString();
		if(!value["TableName"].isNull())
			schemaListObject.tableName = value["TableName"].asString();
		auto allFields = value["Fields"]["Field"];
		for (auto value : allFields)
		{
			Schema::Field fieldsObject;
			if(!value["Type"].isNull())
				fieldsObject.type = value["Type"].asString();
			if(!value["Name"].isNull())
				fieldsObject.name = value["Name"].asString();
			if(!value["Index"].isNull())
				fieldsObject.index = std::stoi(value["Index"].asString());
			if(!value["RawType"].isNull())
				fieldsObject.rawType = value["RawType"].asString();
			if(!value["AssignType"].isNull())
				fieldsObject.assignType = value["AssignType"].asString();
			if(!value["AssignValue"].isNull())
				fieldsObject.assignValue = value["AssignValue"].asString();
			schemaListObject.fields.push_back(fieldsObject);
		}
		schemaList_.push_back(schemaListObject);
	}
	if(!value["DataSourceId"].isNull())
		dataSourceId_ = value["DataSourceId"].asString();

}

std::vector<ListDataSourceSchemaTableResult::Schema> ListDataSourceSchemaTableResult::getSchemaList()const
{
	return schemaList_;
}

std::string ListDataSourceSchemaTableResult::getDataSourceId()const
{
	return dataSourceId_;
}

