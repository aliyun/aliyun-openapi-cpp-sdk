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

#include <alibabacloud/csas/model/ListTagsForPrivateAccessApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListTagsForPrivateAccessApplicationResult::ListTagsForPrivateAccessApplicationResult() :
	ServiceResult()
{}

ListTagsForPrivateAccessApplicationResult::ListTagsForPrivateAccessApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagsForPrivateAccessApplicationResult::~ListTagsForPrivateAccessApplicationResult()
{}

void ListTagsForPrivateAccessApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["application"];
	for (auto valueApplicationsapplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsapplication["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsapplication["ApplicationId"].asString();
		auto allTagsNode = valueApplicationsapplication["Tags"]["tag"];
		for (auto valueApplicationsapplicationTagstag : allTagsNode)
		{
			Application::Tag tagsObject;
			if(!valueApplicationsapplicationTagstag["TagId"].isNull())
				tagsObject.tagId = valueApplicationsapplicationTagstag["TagId"].asString();
			if(!valueApplicationsapplicationTagstag["Name"].isNull())
				tagsObject.name = valueApplicationsapplicationTagstag["Name"].asString();
			if(!valueApplicationsapplicationTagstag["Description"].isNull())
				tagsObject.description = valueApplicationsapplicationTagstag["Description"].asString();
			if(!valueApplicationsapplicationTagstag["TagType"].isNull())
				tagsObject.tagType = valueApplicationsapplicationTagstag["TagType"].asString();
			if(!valueApplicationsapplicationTagstag["CreateTime"].isNull())
				tagsObject.createTime = valueApplicationsapplicationTagstag["CreateTime"].asString();
			applicationsObject.tags.push_back(tagsObject);
		}
		applications_.push_back(applicationsObject);
	}

}

std::vector<ListTagsForPrivateAccessApplicationResult::Application> ListTagsForPrivateAccessApplicationResult::getApplications()const
{
	return applications_;
}

