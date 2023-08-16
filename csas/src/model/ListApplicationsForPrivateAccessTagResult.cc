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

#include <alibabacloud/csas/model/ListApplicationsForPrivateAccessTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListApplicationsForPrivateAccessTagResult::ListApplicationsForPrivateAccessTagResult() :
	ServiceResult()
{}

ListApplicationsForPrivateAccessTagResult::ListApplicationsForPrivateAccessTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsForPrivateAccessTagResult::~ListApplicationsForPrivateAccessTagResult()
{}

void ListApplicationsForPrivateAccessTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["tag"];
	for (auto valueTagstag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagstag["TagId"].isNull())
			tagsObject.tagId = valueTagstag["TagId"].asString();
		auto allApplicationsNode = valueTagstag["Applications"]["application"];
		for (auto valueTagstagApplicationsapplication : allApplicationsNode)
		{
			Tag::Application applicationsObject;
			if(!valueTagstagApplicationsapplication["ApplicationId"].isNull())
				applicationsObject.applicationId = valueTagstagApplicationsapplication["ApplicationId"].asString();
			if(!valueTagstagApplicationsapplication["Name"].isNull())
				applicationsObject.name = valueTagstagApplicationsapplication["Name"].asString();
			if(!valueTagstagApplicationsapplication["Description"].isNull())
				applicationsObject.description = valueTagstagApplicationsapplication["Description"].asString();
			if(!valueTagstagApplicationsapplication["Protocol"].isNull())
				applicationsObject.protocol = valueTagstagApplicationsapplication["Protocol"].asString();
			if(!valueTagstagApplicationsapplication["Status"].isNull())
				applicationsObject.status = valueTagstagApplicationsapplication["Status"].asString();
			if(!valueTagstagApplicationsapplication["CreateTime"].isNull())
				applicationsObject.createTime = valueTagstagApplicationsapplication["CreateTime"].asString();
			auto allPortRangesNode = valueTagstagApplicationsapplication["PortRanges"]["portRange"];
			for (auto valueTagstagApplicationsapplicationPortRangesportRange : allPortRangesNode)
			{
				Tag::Application::PortRange portRangesObject;
				if(!valueTagstagApplicationsapplicationPortRangesportRange["Begin"].isNull())
					portRangesObject.begin = std::stoi(valueTagstagApplicationsapplicationPortRangesportRange["Begin"].asString());
				if(!valueTagstagApplicationsapplicationPortRangesportRange["End"].isNull())
					portRangesObject.end = std::stoi(valueTagstagApplicationsapplicationPortRangesportRange["End"].asString());
				applicationsObject.portRanges.push_back(portRangesObject);
			}
			auto allAddresses = value["Addresses"]["address"];
			for (auto value : allAddresses)
				applicationsObject.addresses.push_back(value.asString());
			tagsObject.applications.push_back(applicationsObject);
		}
		tags_.push_back(tagsObject);
	}

}

std::vector<ListApplicationsForPrivateAccessTagResult::Tag> ListApplicationsForPrivateAccessTagResult::getTags()const
{
	return tags_;
}

