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

#include <alibabacloud/tag/model/ListSupportResourceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

ListSupportResourceTypesResult::ListSupportResourceTypesResult() :
	ServiceResult()
{}

ListSupportResourceTypesResult::ListSupportResourceTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSupportResourceTypesResult::~ListSupportResourceTypesResult()
{}

void ListSupportResourceTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSupportResourceTypesNode = value["SupportResourceTypes"]["SupportResourceType"];
	for (auto valueSupportResourceTypesSupportResourceType : allSupportResourceTypesNode)
	{
		SupportResourceType supportResourceTypesObject;
		if(!valueSupportResourceTypesSupportResourceType["ArnTemplate"].isNull())
			supportResourceTypesObject.arnTemplate = valueSupportResourceTypesSupportResourceType["ArnTemplate"].asString();
		if(!valueSupportResourceTypesSupportResourceType["ProductCode"].isNull())
			supportResourceTypesObject.productCode = valueSupportResourceTypesSupportResourceType["ProductCode"].asString();
		if(!valueSupportResourceTypesSupportResourceType["ResourceType"].isNull())
			supportResourceTypesObject.resourceType = valueSupportResourceTypesSupportResourceType["ResourceType"].asString();
		auto allSupportItemsNode = valueSupportResourceTypesSupportResourceType["SupportItems"]["SupportItemsItem"];
		for (auto valueSupportResourceTypesSupportResourceTypeSupportItemsSupportItemsItem : allSupportItemsNode)
		{
			SupportResourceType::SupportItemsItem supportItemsObject;
			if(!valueSupportResourceTypesSupportResourceTypeSupportItemsSupportItemsItem["Support"].isNull())
				supportItemsObject.support = valueSupportResourceTypesSupportResourceTypeSupportItemsSupportItemsItem["Support"].asString() == "true";
			if(!valueSupportResourceTypesSupportResourceTypeSupportItemsSupportItemsItem["SupportCode"].isNull())
				supportItemsObject.supportCode = valueSupportResourceTypesSupportResourceTypeSupportItemsSupportItemsItem["SupportCode"].asString();
			auto allSupportDetails = value["SupportDetails"]["SupportDetails"];
			for (auto value : allSupportDetails)
				supportItemsObject.supportDetails.push_back(value.asString());
			supportResourceTypesObject.supportItems.push_back(supportItemsObject);
		}
		supportResourceTypes_.push_back(supportResourceTypesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListSupportResourceTypesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListSupportResourceTypesResult::SupportResourceType> ListSupportResourceTypesResult::getSupportResourceTypes()const
{
	return supportResourceTypes_;
}

