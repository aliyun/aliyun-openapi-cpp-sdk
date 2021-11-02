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

#include <alibabacloud/foas/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListTagResourcesResult::ListTagResourcesResult() :
	ServiceResult()
{}

ListTagResourcesResult::ListTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagResourcesResult::~ListTagResourcesResult()
{}

void ListTagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allTagResourcesNode = dataNode["TagResources"]["TagResource"];
	for (auto dataNodeTagResourcesTagResource : allTagResourcesNode)
	{
		Data::TagResource tagResourceObject;
		if(!dataNodeTagResourcesTagResource["ResourceType"].isNull())
			tagResourceObject.resourceType = dataNodeTagResourcesTagResource["ResourceType"].asString();
		if(!dataNodeTagResourcesTagResource["TagKey"].isNull())
			tagResourceObject.tagKey = dataNodeTagResourcesTagResource["TagKey"].asString();
		if(!dataNodeTagResourcesTagResource["TagValue"].isNull())
			tagResourceObject.tagValue = dataNodeTagResourcesTagResource["TagValue"].asString();
		if(!dataNodeTagResourcesTagResource["ResourceId"].isNull())
			tagResourceObject.resourceId = dataNodeTagResourcesTagResource["ResourceId"].asString();
		data_.tagResources.push_back(tagResourceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListTagResourcesResult::getMessage()const
{
	return message_;
}

int ListTagResourcesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListTagResourcesResult::Data ListTagResourcesResult::getData()const
{
	return data_;
}

std::string ListTagResourcesResult::getCode()const
{
	return code_;
}

bool ListTagResourcesResult::getSuccess()const
{
	return success_;
}

