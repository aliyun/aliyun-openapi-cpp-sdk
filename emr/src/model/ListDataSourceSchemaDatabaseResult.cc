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

#include <alibabacloud/emr/model/ListDataSourceSchemaDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListDataSourceSchemaDatabaseResult::ListDataSourceSchemaDatabaseResult() :
	ServiceResult()
{}

ListDataSourceSchemaDatabaseResult::ListDataSourceSchemaDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceSchemaDatabaseResult::~ListDataSourceSchemaDatabaseResult()
{}

void ListDataSourceSchemaDatabaseResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSchemaList = value["SchemaList"]["Schema"];
	for (auto value : allSchemaList)
	{
		Schema schemaListObject;
		if(!value["DbName"].isNull())
			schemaListObject.dbName = value["DbName"].asString();
		if(!value["DbVersion"].isNull())
			schemaListObject.dbVersion = value["DbVersion"].asString();
		if(!value["DbType"].isNull())
			schemaListObject.dbType = value["DbType"].asString();
		schemaList_.push_back(schemaListObject);
	}
	if(!value["DataSourceId"].isNull())
		dataSourceId_ = value["DataSourceId"].asString();

}

std::vector<ListDataSourceSchemaDatabaseResult::Schema> ListDataSourceSchemaDatabaseResult::getSchemaList()const
{
	return schemaList_;
}

std::string ListDataSourceSchemaDatabaseResult::getDataSourceId()const
{
	return dataSourceId_;
}

