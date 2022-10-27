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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContainerAppsNode = value["ContainerApps"]["ContainerAppsItem"];
	for (auto valueContainerAppsContainerAppsItem : allContainerAppsNode)
	{
		ContainerAppsItem containerAppsObject;
		if(!valueContainerAppsContainerAppsItem["Type"].isNull())
			containerAppsObject.type = valueContainerAppsContainerAppsItem["Type"].asString();
		if(!valueContainerAppsContainerAppsItem["Description"].isNull())
			containerAppsObject.description = valueContainerAppsContainerAppsItem["Description"].asString();
		if(!valueContainerAppsContainerAppsItem["CreateTime"].isNull())
			containerAppsObject.createTime = valueContainerAppsContainerAppsItem["CreateTime"].asString();
		if(!valueContainerAppsContainerAppsItem["Repository"].isNull())
			containerAppsObject.repository = valueContainerAppsContainerAppsItem["Repository"].asString();
		if(!valueContainerAppsContainerAppsItem["ImageTag"].isNull())
			containerAppsObject.imageTag = valueContainerAppsContainerAppsItem["ImageTag"].asString();
		if(!valueContainerAppsContainerAppsItem["Name"].isNull())
			containerAppsObject.name = valueContainerAppsContainerAppsItem["Name"].asString();
		if(!valueContainerAppsContainerAppsItem["Id"].isNull())
			containerAppsObject.id = valueContainerAppsContainerAppsItem["Id"].asString();
		containerApps_.push_back(containerAppsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

