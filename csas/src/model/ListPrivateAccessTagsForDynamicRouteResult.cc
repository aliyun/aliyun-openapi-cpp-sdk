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

#include <alibabacloud/csas/model/ListPrivateAccessTagsForDynamicRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPrivateAccessTagsForDynamicRouteResult::ListPrivateAccessTagsForDynamicRouteResult() :
	ServiceResult()
{}

ListPrivateAccessTagsForDynamicRouteResult::ListPrivateAccessTagsForDynamicRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivateAccessTagsForDynamicRouteResult::~ListPrivateAccessTagsForDynamicRouteResult()
{}

void ListPrivateAccessTagsForDynamicRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDynamicRoutesNode = value["DynamicRoutes"]["dynamicRoute"];
	for (auto valueDynamicRoutesdynamicRoute : allDynamicRoutesNode)
	{
		DynamicRoute dynamicRoutesObject;
		if(!valueDynamicRoutesdynamicRoute["DynamicRouteId"].isNull())
			dynamicRoutesObject.dynamicRouteId = valueDynamicRoutesdynamicRoute["DynamicRouteId"].asString();
		auto allTagsNode = valueDynamicRoutesdynamicRoute["Tags"]["tag"];
		for (auto valueDynamicRoutesdynamicRouteTagstag : allTagsNode)
		{
			DynamicRoute::Tag tagsObject;
			if(!valueDynamicRoutesdynamicRouteTagstag["TagId"].isNull())
				tagsObject.tagId = valueDynamicRoutesdynamicRouteTagstag["TagId"].asString();
			if(!valueDynamicRoutesdynamicRouteTagstag["Name"].isNull())
				tagsObject.name = valueDynamicRoutesdynamicRouteTagstag["Name"].asString();
			if(!valueDynamicRoutesdynamicRouteTagstag["Description"].isNull())
				tagsObject.description = valueDynamicRoutesdynamicRouteTagstag["Description"].asString();
			if(!valueDynamicRoutesdynamicRouteTagstag["TagType"].isNull())
				tagsObject.tagType = valueDynamicRoutesdynamicRouteTagstag["TagType"].asString();
			if(!valueDynamicRoutesdynamicRouteTagstag["CreateTime"].isNull())
				tagsObject.createTime = valueDynamicRoutesdynamicRouteTagstag["CreateTime"].asString();
			dynamicRoutesObject.tags.push_back(tagsObject);
		}
		dynamicRoutes_.push_back(dynamicRoutesObject);
	}

}

std::vector<ListPrivateAccessTagsForDynamicRouteResult::DynamicRoute> ListPrivateAccessTagsForDynamicRouteResult::getDynamicRoutes()const
{
	return dynamicRoutes_;
}

