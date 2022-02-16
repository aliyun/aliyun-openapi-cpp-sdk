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

#include <alibabacloud/emr/model/DescribeFlowCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowCategoryResult::DescribeFlowCategoryResult() :
	ServiceResult()
{}

DescribeFlowCategoryResult::DescribeFlowCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowCategoryResult::~DescribeFlowCategoryResult()
{}

void DescribeFlowCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ParentId"].isNull())
		parentId_ = value["ParentId"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["CategoryType"].isNull())
		categoryType_ = value["CategoryType"].asString();
	if(!value["ObjectType"].isNull())
		objectType_ = value["ObjectType"].asString();
	if(!value["ObjectId"].isNull())
		objectId_ = value["ObjectId"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();

}

std::string DescribeFlowCategoryResult::getParentId()const
{
	return parentId_;
}

std::string DescribeFlowCategoryResult::getObjectType()const
{
	return objectType_;
}

long DescribeFlowCategoryResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowCategoryResult::getType()const
{
	return type_;
}

std::string DescribeFlowCategoryResult::getObjectId()const
{
	return objectId_;
}

long DescribeFlowCategoryResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeFlowCategoryResult::getProjectId()const
{
	return projectId_;
}

std::string DescribeFlowCategoryResult::getId()const
{
	return id_;
}

std::string DescribeFlowCategoryResult::getCategoryType()const
{
	return categoryType_;
}

std::string DescribeFlowCategoryResult::getName()const
{
	return name_;
}

