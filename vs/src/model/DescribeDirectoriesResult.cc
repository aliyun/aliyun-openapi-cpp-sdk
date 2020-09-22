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

#include <alibabacloud/vs/model/DescribeDirectoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeDirectoriesResult::DescribeDirectoriesResult() :
	ServiceResult()
{}

DescribeDirectoriesResult::DescribeDirectoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDirectoriesResult::~DescribeDirectoriesResult()
{}

void DescribeDirectoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDirectoriesNode = value["Directories"]["Directory"];
	for (auto valueDirectoriesDirectory : allDirectoriesNode)
	{
		Directory directoriesObject;
		if(!valueDirectoriesDirectory["Id"].isNull())
			directoriesObject.id = valueDirectoriesDirectory["Id"].asString();
		if(!valueDirectoriesDirectory["Name"].isNull())
			directoriesObject.name = valueDirectoriesDirectory["Name"].asString();
		if(!valueDirectoriesDirectory["Description"].isNull())
			directoriesObject.description = valueDirectoriesDirectory["Description"].asString();
		if(!valueDirectoriesDirectory["GroupId"].isNull())
			directoriesObject.groupId = valueDirectoriesDirectory["GroupId"].asString();
		if(!valueDirectoriesDirectory["ParentId"].isNull())
			directoriesObject.parentId = valueDirectoriesDirectory["ParentId"].asString();
		if(!valueDirectoriesDirectory["CreatedTime"].isNull())
			directoriesObject.createdTime = valueDirectoriesDirectory["CreatedTime"].asString();
		directories_.push_back(directoriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeDirectoriesResult::Directory> DescribeDirectoriesResult::getDirectories()const
{
	return directories_;
}

long DescribeDirectoriesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDirectoriesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDirectoriesResult::getPageNum()const
{
	return pageNum_;
}

long DescribeDirectoriesResult::getPageCount()const
{
	return pageCount_;
}

