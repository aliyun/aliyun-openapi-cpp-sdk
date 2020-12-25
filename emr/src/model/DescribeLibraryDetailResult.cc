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

#include <alibabacloud/emr/model/DescribeLibraryDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeLibraryDetailResult::DescribeLibraryDetailResult() :
	ServiceResult()
{}

DescribeLibraryDetailResult::DescribeLibraryDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLibraryDetailResult::~DescribeLibraryDetailResult()
{}

void DescribeLibraryDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["LibraryVersion"].isNull())
		libraryVersion_ = value["LibraryVersion"].asString();
	if(!value["SourceType"].isNull())
		sourceType_ = value["SourceType"].asString();
	if(!value["SourceLocation"].isNull())
		sourceLocation_ = value["SourceLocation"].asString();
	if(!value["Scope"].isNull())
		scope_ = value["Scope"].asString();
	if(!value["Properties"].isNull())
		properties_ = value["Properties"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();

}

std::string DescribeLibraryDetailResult::getSourceLocation()const
{
	return sourceLocation_;
}

std::string DescribeLibraryDetailResult::getType()const
{
	return type_;
}

std::string DescribeLibraryDetailResult::getScope()const
{
	return scope_;
}

std::string DescribeLibraryDetailResult::getUserId()const
{
	return userId_;
}

long DescribeLibraryDetailResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeLibraryDetailResult::getSourceType()const
{
	return sourceType_;
}

std::string DescribeLibraryDetailResult::getLibraryVersion()const
{
	return libraryVersion_;
}

std::string DescribeLibraryDetailResult::getProperties()const
{
	return properties_;
}

std::string DescribeLibraryDetailResult::getBizId()const
{
	return bizId_;
}

std::string DescribeLibraryDetailResult::getName()const
{
	return name_;
}

