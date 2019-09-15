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

#include <alibabacloud/aegis/model/DescribeSuspEventQuaraFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
	auto allQuaraFiles = value["QuaraFiles"]["QuaraFile"];
	for (auto value : allQuaraFiles)
	{
		QuaraFile quaraFilesObject;
		if(!value["Path"].isNull())
			quaraFilesObject.path = value["Path"].asString();
		if(!value["EventName"].isNull())
			quaraFilesObject.eventName = value["EventName"].asString();
		if(!value["Id"].isNull())
			quaraFilesObject.id = std::stoi(value["Id"].asString());
		if(!value["EventType"].isNull())
			quaraFilesObject.eventType = value["EventType"].asString();
		if(!value["Tag"].isNull())
			quaraFilesObject.tag = value["Tag"].asString();
		if(!value["Uuid"].isNull())
			quaraFilesObject.uuid = value["Uuid"].asString();
		if(!value["InstanceName"].isNull())
			quaraFilesObject.instanceName = value["InstanceName"].asString();
		if(!value["InternetIp"].isNull())
			quaraFilesObject.internetIp = value["InternetIp"].asString();
		if(!value["Ip"].isNull())
			quaraFilesObject.ip = value["Ip"].asString();
		if(!value["Status"].isNull())
			quaraFilesObject.status = value["Status"].asString();
		if(!value["Md5"].isNull())
			quaraFilesObject.md5 = value["Md5"].asString();
		if(!value["ModifyTime"].isNull())
			quaraFilesObject.modifyTime = value["ModifyTime"].asString();
		quaraFiles_.push_back(quaraFilesObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

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

int DescribeSuspEventQuaraFilesResult::getCount()const
{
	return count_;
}

