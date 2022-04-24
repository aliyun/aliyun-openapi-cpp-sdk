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

#include <alibabacloud/bssopenapi/model/QueryInstanceByTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryInstanceByTagResult::QueryInstanceByTagResult() :
	ServiceResult()
{}

QueryInstanceByTagResult::QueryInstanceByTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInstanceByTagResult::~QueryInstanceByTagResult()
{}

void QueryInstanceByTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagResourceNode = value["TagResource"]["TagResourceItem"];
	for (auto valueTagResourceTagResourceItem : allTagResourceNode)
	{
		TagResourceItem tagResourceObject;
		if(!valueTagResourceTagResourceItem["ResourceId"].isNull())
			tagResourceObject.resourceId = valueTagResourceTagResourceItem["ResourceId"].asString();
		if(!valueTagResourceTagResourceItem["ResourceType"].isNull())
			tagResourceObject.resourceType = valueTagResourceTagResourceItem["ResourceType"].asString();
		auto allTagNode = valueTagResourceTagResourceItem["Tag"]["TagKeyValue"];
		for (auto valueTagResourceTagResourceItemTagTagKeyValue : allTagNode)
		{
			TagResourceItem::TagKeyValue tagObject;
			if(!valueTagResourceTagResourceItemTagTagKeyValue["Key"].isNull())
				tagObject.key = valueTagResourceTagResourceItemTagTagKeyValue["Key"].asString();
			if(!valueTagResourceTagResourceItemTagTagKeyValue["Value"].isNull())
				tagObject.value = valueTagResourceTagResourceItemTagTagKeyValue["Value"].asString();
			tagResourceObject.tag.push_back(tagObject);
		}
		tagResource_.push_back(tagResourceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryInstanceByTagResult::getMessage()const
{
	return message_;
}

std::string QueryInstanceByTagResult::getNextToken()const
{
	return nextToken_;
}

std::vector<QueryInstanceByTagResult::TagResourceItem> QueryInstanceByTagResult::getTagResource()const
{
	return tagResource_;
}

std::string QueryInstanceByTagResult::getCode()const
{
	return code_;
}

bool QueryInstanceByTagResult::getSuccess()const
{
	return success_;
}

