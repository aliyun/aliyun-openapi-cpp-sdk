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

#include <alibabacloud/aegis/model/DescribeQuaraFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeQuaraFileResult::DescribeQuaraFileResult() :
	ServiceResult()
{}

DescribeQuaraFileResult::DescribeQuaraFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQuaraFileResult::~DescribeQuaraFileResult()
{}

void DescribeQuaraFileResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allQuaraFiles = value["QuaraFiles"]["QuaraFile"];
	for (auto value : allQuaraFiles)
	{
		QuaraFile quaraFilesObject;
		if(!value["Path"].isNull())
			quaraFilesObject.path = value["Path"].asString();
		if(!value["EventName"].isNull())
			quaraFilesObject.eventName = value["EventName"].asString();
		if(!value["Online"].isNull())
			quaraFilesObject.online = value["Online"].asString() == "true";
		if(!value["EventType"].isNull())
			quaraFilesObject.eventType = value["EventType"].asString();
		if(!value["Tag"].isNull())
			quaraFilesObject.tag = value["Tag"].asString();
		if(!value["Uuid"].isNull())
			quaraFilesObject.uuid = value["Uuid"].asString();
		if(!value["FileStatus"].isNull())
			quaraFilesObject.fileStatus = value["FileStatus"].asString();
		if(!value["Md5"].isNull())
			quaraFilesObject.md5 = value["Md5"].asString();
		quaraFiles_.push_back(quaraFilesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeQuaraFileResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeQuaraFileResult::getPageSize()const
{
	return pageSize_;
}

int DescribeQuaraFileResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeQuaraFileResult::QuaraFile> DescribeQuaraFileResult::getQuaraFiles()const
{
	return quaraFiles_;
}

