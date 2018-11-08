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

#include <alibabacloud/ehpc/model/ListSoftwaresResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListSoftwaresResult::ListSoftwaresResult() :
	ServiceResult()
{}

ListSoftwaresResult::ListSoftwaresResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSoftwaresResult::~ListSoftwaresResult()
{}

void ListSoftwaresResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSoftwares = value["Softwares"]["SoftwareInfo"];
	for (auto value : allSoftwares)
	{
		SoftwareInfo softwaresObject;
		if(!value["EhpcVersion"].isNull())
			softwaresObject.ehpcVersion = value["EhpcVersion"].asString();
		if(!value["OsTag"].isNull())
			softwaresObject.osTag = value["OsTag"].asString();
		if(!value["SchedulerType"].isNull())
			softwaresObject.schedulerType = value["SchedulerType"].asString();
		if(!value["SchedulerVersion"].isNull())
			softwaresObject.schedulerVersion = value["SchedulerVersion"].asString();
		if(!value["AccountType"].isNull())
			softwaresObject.accountType = value["AccountType"].asString();
		if(!value["AccountVersion"].isNull())
			softwaresObject.accountVersion = value["AccountVersion"].asString();
		auto allApplications = value["Applications"]["ApplicationInfo"];
		for (auto value : allApplications)
		{
			SoftwareInfo::ApplicationInfo applicationsObject;
			if(!value["Tag"].isNull())
				applicationsObject.tag = value["Tag"].asString();
			if(!value["Name"].isNull())
				applicationsObject.name = value["Name"].asString();
			if(!value["Version"].isNull())
				applicationsObject.version = value["Version"].asString();
			if(!value["Required"].isNull())
				applicationsObject.required = value["Required"].asString() == "true";
			softwaresObject.applications.push_back(applicationsObject);
		}
		softwares_.push_back(softwaresObject);
	}

}

std::vector<ListSoftwaresResult::SoftwareInfo> ListSoftwaresResult::getSoftwares()const
{
	return softwares_;
}

