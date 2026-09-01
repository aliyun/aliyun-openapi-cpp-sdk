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

#include <alibabacloud/quickbi-public/model/ListDynamicTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListDynamicTagResult::ListDynamicTagResult() :
	ServiceResult()
{}

ListDynamicTagResult::ListDynamicTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDynamicTagResult::~ListDynamicTagResult()
{}

void ListDynamicTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["TableName"].isNull())
			resultObject.tableName = valueResultData["TableName"].asString();
		if(!valueResultData["ColumnName"].isNull())
			resultObject.columnName = valueResultData["ColumnName"].asString();
		if(!valueResultData["RelatedAttribute"].isNull())
			resultObject.relatedAttribute = std::stoi(valueResultData["RelatedAttribute"].asString());
		if(!valueResultData["ConfigName"].isNull())
			resultObject.configName = valueResultData["ConfigName"].asString();
		if(!valueResultData["DsId"].isNull())
			resultObject.dsId = valueResultData["DsId"].asString();
		if(!valueResultData["OrganizationId"].isNull())
			resultObject.organizationId = valueResultData["OrganizationId"].asString();
		if(!valueResultData["ConfigId"].isNull())
			resultObject.configId = valueResultData["ConfigId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListDynamicTagResult::getSuccess()const
{
	return success_;
}

std::vector<ListDynamicTagResult::Data> ListDynamicTagResult::getResult()const
{
	return result_;
}

