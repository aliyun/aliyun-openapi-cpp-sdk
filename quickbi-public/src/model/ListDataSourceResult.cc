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

#include <alibabacloud/quickbi-public/model/ListDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListDataSourceResult::ListDataSourceResult() :
	ServiceResult()
{}

ListDataSourceResult::ListDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceResult::~ListDataSourceResult()
{}

void ListDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["CreatorId"].isNull())
			resultObject.creatorId = valueResultData["CreatorId"].asString();
		if(!valueResultData["CreatorName"].isNull())
			resultObject.creatorName = valueResultData["CreatorName"].asString();
		if(!valueResultData["DatasourceId"].isNull())
			resultObject.datasourceId = valueResultData["DatasourceId"].asString();
		if(!valueResultData["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultData["GmtCreate"].asString();
		if(!valueResultData["GmtModified"].isNull())
			resultObject.gmtModified = valueResultData["GmtModified"].asString();
		if(!valueResultData["ShowName"].isNull())
			resultObject.showName = valueResultData["ShowName"].asString();
		if(!valueResultData["DsType"].isNull())
			resultObject.dsType = valueResultData["DsType"].asString();
		if(!valueResultData["ParentDsType"].isNull())
			resultObject.parentDsType = valueResultData["ParentDsType"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListDataSourceResult::getSuccess()const
{
	return success_;
}

std::vector<ListDataSourceResult::Data> ListDataSourceResult::getResult()const
{
	return result_;
}

