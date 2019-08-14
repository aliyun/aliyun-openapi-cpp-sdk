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

#include <alibabacloud/imm/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListProjectsResult::ListProjectsResult() :
	ServiceResult()
{}

ListProjectsResult::ListProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectsResult::~ListProjectsResult()
{}

void ListProjectsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allProjects = value["Projects"]["ProjectsItem"];
	for (auto value : allProjects)
	{
		ProjectsItem projectsObject;
		if(!value["Project"].isNull())
			projectsObject.project = value["Project"].asString();
		if(!value["Endpoint"].isNull())
			projectsObject.endpoint = value["Endpoint"].asString();
		if(!value["ServiceRole"].isNull())
			projectsObject.serviceRole = value["ServiceRole"].asString();
		if(!value["CreateTime"].isNull())
			projectsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			projectsObject.modifyTime = value["ModifyTime"].asString();
		if(!value["CU"].isNull())
			projectsObject.cU = std::stoi(value["CU"].asString());
		if(!value["Type"].isNull())
			projectsObject.type = value["Type"].asString();
		if(!value["BillingType"].isNull())
			projectsObject.billingType = value["BillingType"].asString();
		projects_.push_back(projectsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListProjectsResult::ProjectsItem> ListProjectsResult::getProjects()const
{
	return projects_;
}

std::string ListProjectsResult::getNextMarker()const
{
	return nextMarker_;
}

