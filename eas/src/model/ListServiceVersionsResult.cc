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

#include <alibabacloud/eas/model/ListServiceVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListServiceVersionsResult::ListServiceVersionsResult() :
	ServiceResult()
{}

ListServiceVersionsResult::ListServiceVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceVersionsResult::~ListServiceVersionsResult()
{}

void ListServiceVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVersionsNode = value["Versions"]["versionsItem"];
	for (auto valueVersionsversionsItem : allVersionsNode)
	{
		VersionsItem versionsObject;
		if(!valueVersionsversionsItem["BuildTime"].isNull())
			versionsObject.buildTime = valueVersionsversionsItem["BuildTime"].asString();
		if(!valueVersionsversionsItem["ImageAvailable"].isNull())
			versionsObject.imageAvailable = valueVersionsversionsItem["ImageAvailable"].asString();
		if(!valueVersionsversionsItem["ImageId"].isNull())
			versionsObject.imageId = std::stoi(valueVersionsversionsItem["ImageId"].asString());
		if(!valueVersionsversionsItem["Message"].isNull())
			versionsObject.message = valueVersionsversionsItem["Message"].asString();
		if(!valueVersionsversionsItem["ServiceRunnable"].isNull())
			versionsObject.serviceRunnable = valueVersionsversionsItem["ServiceRunnable"].asString();
		versions_.push_back(versionsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListServiceVersionsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListServiceVersionsResult::VersionsItem> ListServiceVersionsResult::getVersions()const
{
	return versions_;
}

int ListServiceVersionsResult::getPageSize()const
{
	return pageSize_;
}

int ListServiceVersionsResult::getPageNumber()const
{
	return pageNumber_;
}

