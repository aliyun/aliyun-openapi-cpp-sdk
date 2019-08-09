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

#include <alibabacloud/ehpc/model/ListContainerAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListContainerAppsResult::ListContainerAppsResult() :
	ServiceResult()
{}

ListContainerAppsResult::ListContainerAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListContainerAppsResult::~ListContainerAppsResult()
{}

void ListContainerAppsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allContainerApps = value["ContainerApps"]["ContainerAppsItem"];
	for (auto value : allContainerApps)
	{
		ContainerAppsItem containerAppsObject;
		if(!value["Id"].isNull())
			containerAppsObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			containerAppsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			containerAppsObject.description = value["Description"].asString();
		if(!value["Repository"].isNull())
			containerAppsObject.repository = value["Repository"].asString();
		if(!value["ImageTag"].isNull())
			containerAppsObject.imageTag = value["ImageTag"].asString();
		if(!value["CreateTime"].isNull())
			containerAppsObject.createTime = value["CreateTime"].asString();
		if(!value["Type"].isNull())
			containerAppsObject.type = value["Type"].asString();
		containerApps_.push_back(containerAppsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListContainerAppsResult::ContainerAppsItem> ListContainerAppsResult::getContainerApps()const
{
	return containerApps_;
}

int ListContainerAppsResult::getTotalCount()const
{
	return totalCount_;
}

int ListContainerAppsResult::getPageSize()const
{
	return pageSize_;
}

int ListContainerAppsResult::getPageNumber()const
{
	return pageNumber_;
}

