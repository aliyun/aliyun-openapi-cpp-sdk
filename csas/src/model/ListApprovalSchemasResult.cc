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

#include <alibabacloud/csas/model/ListApprovalSchemasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListApprovalSchemasResult::ListApprovalSchemasResult() :
	ServiceResult()
{}

ListApprovalSchemasResult::ListApprovalSchemasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApprovalSchemasResult::~ListApprovalSchemasResult()
{}

void ListApprovalSchemasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSchemasNode = value["Schemas"]["dataList"];
	for (auto valueSchemasdataList : allSchemasNode)
	{
		DataList schemasObject;
		if(!valueSchemasdataList["CreateTime"].isNull())
			schemasObject.createTime = valueSchemasdataList["CreateTime"].asString();
		if(!valueSchemasdataList["SchemaId"].isNull())
			schemasObject.schemaId = valueSchemasdataList["SchemaId"].asString();
		if(!valueSchemasdataList["SchemaName"].isNull())
			schemasObject.schemaName = valueSchemasdataList["SchemaName"].asString();
		if(!valueSchemasdataList["Description"].isNull())
			schemasObject.description = valueSchemasdataList["Description"].asString();
		if(!valueSchemasdataList["SchemaContent"].isNull())
			schemasObject.schemaContent = valueSchemasdataList["SchemaContent"].asString();
		if(!valueSchemasdataList["SchemaVersion"].isNull())
			schemasObject.schemaVersion = std::stol(valueSchemasdataList["SchemaVersion"].asString());
		if(!valueSchemasdataList["PolicyType"].isNull())
			schemasObject.policyType = valueSchemasdataList["PolicyType"].asString();
		if(!valueSchemasdataList["IsDefault"].isNull())
			schemasObject.isDefault = valueSchemasdataList["IsDefault"].asString() == "true";
		schemas_.push_back(schemasObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = value["TotalNum"].asString();

}

std::string ListApprovalSchemasResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListApprovalSchemasResult::DataList> ListApprovalSchemasResult::getSchemas()const
{
	return schemas_;
}

