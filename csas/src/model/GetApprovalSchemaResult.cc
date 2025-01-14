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

#include <alibabacloud/csas/model/GetApprovalSchemaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetApprovalSchemaResult::GetApprovalSchemaResult() :
	ServiceResult()
{}

GetApprovalSchemaResult::GetApprovalSchemaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApprovalSchemaResult::~GetApprovalSchemaResult()
{}

void GetApprovalSchemaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto schemaNode = value["Schema"];
	if(!schemaNode["CreateTime"].isNull())
		schema_.createTime = schemaNode["CreateTime"].asString();
	if(!schemaNode["SchemaId"].isNull())
		schema_.schemaId = schemaNode["SchemaId"].asString();
	if(!schemaNode["SchemaName"].isNull())
		schema_.schemaName = schemaNode["SchemaName"].asString();
	if(!schemaNode["Description"].isNull())
		schema_.description = schemaNode["Description"].asString();
	if(!schemaNode["SchemaContent"].isNull())
		schema_.schemaContent = schemaNode["SchemaContent"].asString();
	if(!schemaNode["SchemaVersion"].isNull())
		schema_.schemaVersion = std::stol(schemaNode["SchemaVersion"].asString());
	if(!schemaNode["PolicyType"].isNull())
		schema_.policyType = schemaNode["PolicyType"].asString();
	if(!schemaNode["IsDefault"].isNull())
		schema_.isDefault = schemaNode["IsDefault"].asString() == "true";

}

GetApprovalSchemaResult::Schema GetApprovalSchemaResult::getSchema()const
{
	return schema_;
}

