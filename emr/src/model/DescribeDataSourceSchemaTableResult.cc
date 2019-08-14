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

#include <alibabacloud/emr/model/DescribeDataSourceSchemaTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeDataSourceSchemaTableResult::DescribeDataSourceSchemaTableResult() :
	ServiceResult()
{}

DescribeDataSourceSchemaTableResult::DescribeDataSourceSchemaTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSourceSchemaTableResult::~DescribeDataSourceSchemaTableResult()
{}

void DescribeDataSourceSchemaTableResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto schemaNode = value["Schema"];
	if(!schemaNode["DbType"].isNull())
		schema_.dbType = schemaNode["DbType"].asString();
	if(!schemaNode["DbVersion"].isNull())
		schema_.dbVersion = schemaNode["DbVersion"].asString();
	if(!schemaNode["DbName"].isNull())
		schema_.dbName = schemaNode["DbName"].asString();
	if(!schemaNode["TableName"].isNull())
		schema_.tableName = schemaNode["TableName"].asString();
	auto allFields = value["Fields"]["Field"];
	for (auto value : allFields)
	{
		Schema::Field fieldObject;
		if(!value["Type"].isNull())
			fieldObject.type = value["Type"].asString();
		if(!value["Length"].isNull())
			fieldObject.length = value["Length"].asString();
		if(!value["Name"].isNull())
			fieldObject.name = value["Name"].asString();
		if(!value["Index"].isNull())
			fieldObject.index = std::stoi(value["Index"].asString());
		if(!value["RawType"].isNull())
			fieldObject.rawType = value["RawType"].asString();
		if(!value["AssignType"].isNull())
			fieldObject.assignType = value["AssignType"].asString();
		if(!value["AssignValue"].isNull())
			fieldObject.assignValue = value["AssignValue"].asString();
		if(!value["PartitionKey"].isNull())
			fieldObject.partitionKey = value["PartitionKey"].asString() == "true";
		schema_.fields.push_back(fieldObject);
	}
	if(!value["DataSourceId"].isNull())
		dataSourceId_ = value["DataSourceId"].asString();

}

DescribeDataSourceSchemaTableResult::Schema DescribeDataSourceSchemaTableResult::getSchema()const
{
	return schema_;
}

std::string DescribeDataSourceSchemaTableResult::getDataSourceId()const
{
	return dataSourceId_;
}

