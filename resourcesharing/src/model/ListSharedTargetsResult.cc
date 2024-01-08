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

#include <alibabacloud/resourcesharing/model/ListSharedTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

ListSharedTargetsResult::ListSharedTargetsResult() :
	ServiceResult()
{}

ListSharedTargetsResult::ListSharedTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSharedTargetsResult::~ListSharedTargetsResult()
{}

void ListSharedTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSharedTargetsNode = value["SharedTargets"]["SharedTarget"];
	for (auto valueSharedTargetsSharedTarget : allSharedTargetsNode)
	{
		SharedTarget sharedTargetsObject;
		if(!valueSharedTargetsSharedTarget["TargetId"].isNull())
			sharedTargetsObject.targetId = valueSharedTargetsSharedTarget["TargetId"].asString();
		if(!valueSharedTargetsSharedTarget["UpdateTime"].isNull())
			sharedTargetsObject.updateTime = valueSharedTargetsSharedTarget["UpdateTime"].asString();
		if(!valueSharedTargetsSharedTarget["CreateTime"].isNull())
			sharedTargetsObject.createTime = valueSharedTargetsSharedTarget["CreateTime"].asString();
		if(!valueSharedTargetsSharedTarget["ResourceShareId"].isNull())
			sharedTargetsObject.resourceShareId = valueSharedTargetsSharedTarget["ResourceShareId"].asString();
		if(!valueSharedTargetsSharedTarget["External"].isNull())
			sharedTargetsObject.external = valueSharedTargetsSharedTarget["External"].asString() == "true";
		if(!valueSharedTargetsSharedTarget["TargetProperty"].isNull())
			sharedTargetsObject.targetProperty = valueSharedTargetsSharedTarget["TargetProperty"].asString();
		sharedTargets_.push_back(sharedTargetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListSharedTargetsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListSharedTargetsResult::SharedTarget> ListSharedTargetsResult::getSharedTargets()const
{
	return sharedTargets_;
}

