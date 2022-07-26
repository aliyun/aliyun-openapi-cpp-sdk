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

#include <alibabacloud/oos/model/GetInventorySchemaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

GetInventorySchemaResult::GetInventorySchemaResult() :
	ServiceResult()
{}

GetInventorySchemaResult::GetInventorySchemaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInventorySchemaResult::~GetInventorySchemaResult()
{}

void GetInventorySchemaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSchemasNode = value["Schemas"]["Schema"];
	for (auto valueSchemasSchema : allSchemasNode)
	{
		Schema schemasObject;
		if(!valueSchemasSchema["Version"].isNull())
			schemasObject.version = valueSchemasSchema["Version"].asString();
		if(!valueSchemasSchema["TypeName"].isNull())
			schemasObject.typeName = valueSchemasSchema["TypeName"].asString();
		auto allAttributesNode = valueSchemasSchema["Attributes"]["Attribute"];
		for (auto valueSchemasSchemaAttributesAttribute : allAttributesNode)
		{
			Schema::Attribute attributesObject;
			if(!valueSchemasSchemaAttributesAttribute["Name"].isNull())
				attributesObject.name = valueSchemasSchemaAttributesAttribute["Name"].asString();
			if(!valueSchemasSchemaAttributesAttribute["DataType"].isNull())
				attributesObject.dataType = valueSchemasSchemaAttributesAttribute["DataType"].asString();
			schemasObject.attributes.push_back(attributesObject);
		}
		schemas_.push_back(schemasObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();

}

std::string GetInventorySchemaResult::getNextToken()const
{
	return nextToken_;
}

std::string GetInventorySchemaResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<GetInventorySchemaResult::Schema> GetInventorySchemaResult::getSchemas()const
{
	return schemas_;
}

