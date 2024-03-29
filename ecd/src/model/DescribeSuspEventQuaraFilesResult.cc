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

#include <alibabacloud/ecd/model/DescribeSuspEventQuaraFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeSuspEventQuaraFilesResult::DescribeSuspEventQuaraFilesResult() :
	ServiceResult()
{}

DescribeSuspEventQuaraFilesResult::DescribeSuspEventQuaraFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventQuaraFilesResult::~DescribeSuspEventQuaraFilesResult()
{}

void DescribeSuspEventQuaraFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuaraFilesNode = value["QuaraFiles"]["QuaraFile"];
	for (auto valueQuaraFilesQuaraFile : allQuaraFilesNode)
	{
		QuaraFile quaraFilesObject;
		if(!valueQuaraFilesQuaraFile["Status"].isNull())
			quaraFilesObject.status = valueQuaraFilesQuaraFile["Status"].asString();
		if(!valueQuaraFilesQuaraFile["EventName"].isNull())
			quaraFilesObject.eventName = valueQuaraFilesQuaraFile["EventName"].asString();
		if(!valueQuaraFilesQuaraFile["EventType"].isNull())
			quaraFilesObject.eventType = valueQuaraFilesQuaraFile["EventType"].asString();
		if(!valueQuaraFilesQuaraFile["Path"].isNull())
			quaraFilesObject.path = valueQuaraFilesQuaraFile["Path"].asString();
		if(!valueQuaraFilesQuaraFile["DesktopName"].isNull())
			quaraFilesObject.desktopName = valueQuaraFilesQuaraFile["DesktopName"].asString();
		if(!valueQuaraFilesQuaraFile["Md5"].isNull())
			quaraFilesObject.md5 = valueQuaraFilesQuaraFile["Md5"].asString();
		if(!valueQuaraFilesQuaraFile["Tag"].isNull())
			quaraFilesObject.tag = valueQuaraFilesQuaraFile["Tag"].asString();
		if(!valueQuaraFilesQuaraFile["DesktopId"].isNull())
			quaraFilesObject.desktopId = valueQuaraFilesQuaraFile["DesktopId"].asString();
		if(!valueQuaraFilesQuaraFile["Id"].isNull())
			quaraFilesObject.id = std::stoi(valueQuaraFilesQuaraFile["Id"].asString());
		if(!valueQuaraFilesQuaraFile["ModifyTime"].isNull())
			quaraFilesObject.modifyTime = valueQuaraFilesQuaraFile["ModifyTime"].asString();
		quaraFiles_.push_back(quaraFilesObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSuspEventQuaraFilesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSuspEventQuaraFilesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSuspEventQuaraFilesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeSuspEventQuaraFilesResult::QuaraFile> DescribeSuspEventQuaraFilesResult::getQuaraFiles()const
{
	return quaraFiles_;
}

