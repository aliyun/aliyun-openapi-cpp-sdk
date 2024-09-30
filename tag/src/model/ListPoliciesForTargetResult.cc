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

#include <alibabacloud/tag/model/ListPoliciesForTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

ListPoliciesForTargetResult::ListPoliciesForTargetResult() :
	ServiceResult()
{}

ListPoliciesForTargetResult::ListPoliciesForTargetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPoliciesForTargetResult::~ListPoliciesForTargetResult()
{}

void ListPoliciesForTargetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["PolicyContent"].isNull())
			dataObject.policyContent = valueDataDataItem["PolicyContent"].asString();
		if(!valueDataDataItem["PolicyDesc"].isNull())
			dataObject.policyDesc = valueDataDataItem["PolicyDesc"].asString();
		if(!valueDataDataItem["PolicyId"].isNull())
			dataObject.policyId = valueDataDataItem["PolicyId"].asString();
		if(!valueDataDataItem["PolicyName"].isNull())
			dataObject.policyName = valueDataDataItem["PolicyName"].asString();
		if(!valueDataDataItem["UserType"].isNull())
			dataObject.userType = valueDataDataItem["UserType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListPoliciesForTargetResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListPoliciesForTargetResult::DataItem> ListPoliciesForTargetResult::getData()const
{
	return data_;
}

