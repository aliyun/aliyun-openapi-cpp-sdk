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
	auto allSoftwaresNode = value["Softwares"]["SoftwareInfo"];
	for (auto valueSoftwaresSoftwareInfo : allSoftwaresNode)
	{
		SoftwareInfo softwaresObject;
		if(!valueSoftwaresSoftwareInfo["EhpcVersion"].isNull())
			softwaresObject.ehpcVersion = valueSoftwaresSoftwareInfo["EhpcVersion"].asString();
		if(!valueSoftwaresSoftwareInfo["OsTag"].isNull())
			softwaresObject.osTag = valueSoftwaresSoftwareInfo["OsTag"].asString();
		if(!valueSoftwaresSoftwareInfo["SchedulerType"].isNull())
			softwaresObject.schedulerType = valueSoftwaresSoftwareInfo["SchedulerType"].asString();
		if(!valueSoftwaresSoftwareInfo["SchedulerVersion"].isNull())
			softwaresObject.schedulerVersion = valueSoftwaresSoftwareInfo["SchedulerVersion"].asString();
		if(!valueSoftwaresSoftwareInfo["AccountType"].isNull())
			softwaresObject.accountType = valueSoftwaresSoftwareInfo["AccountType"].asString();
		if(!valueSoftwaresSoftwareInfo["AccountVersion"].isNull())
			softwaresObject.accountVersion = valueSoftwaresSoftwareInfo["AccountVersion"].asString();
		auto allApplicationsNode = valueSoftwaresSoftwareInfo["Applications"]["ApplicationInfo"];
		for (auto valueSoftwaresSoftwareInfoApplicationsApplicationInfo : allApplicationsNode)
		{
			SoftwareInfo::ApplicationInfo applicationsObject;
			if(!valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Tag"].isNull())
				applicationsObject.tag = valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Tag"].asString();
			if(!valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Name"].isNull())
				applicationsObject.name = valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Name"].asString();
			if(!valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Version"].isNull())
				applicationsObject.version = valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Version"].asString();
			if(!valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Required"].isNull())
				applicationsObject.required = valueSoftwaresSoftwareInfoApplicationsApplicationInfo["Required"].asString() == "true";
			softwaresObject.applications.push_back(applicationsObject);
		}
		softwares_.push_back(softwaresObject);
	}

}

std::vector<ListSoftwaresResult::SoftwareInfo> ListSoftwaresResult::getSoftwares()const
{
	return softwares_;
}

