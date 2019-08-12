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

#include <alibabacloud/emr/model/DescribeDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeDataSourceResult::DescribeDataSourceResult() :
	ServiceResult()
{}

DescribeDataSourceResult::DescribeDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSourceResult::~DescribeDataSourceResult()
{}

void DescribeDataSourceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CategoryId"].isNull())
		categoryId_ = value["CategoryId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["SourceType"].isNull())
		sourceType_ = value["SourceType"].asString();
	if(!value["CreateFrom"].isNull())
		createFrom_ = value["CreateFrom"].asString();
	if(!value["Conf"].isNull())
		conf_ = value["Conf"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["Creator"].isNull())
		creator_ = value["Creator"].asString();
	if(!value["Modifier"].isNull())
		modifier_ = value["Modifier"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());

}

std::string DescribeDataSourceResult::getCategoryId()const
{
	return categoryId_;
}

std::string DescribeDataSourceResult::getStatus()const
{
	return status_;
}

std::string DescribeDataSourceResult::getDescription()const
{
	return description_;
}

std::string DescribeDataSourceResult::getConf()const
{
	return conf_;
}

std::string DescribeDataSourceResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeDataSourceResult::getSourceType()const
{
	return sourceType_;
}

long DescribeDataSourceResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeDataSourceResult::getCreator()const
{
	return creator_;
}

std::string DescribeDataSourceResult::getCreateFrom()const
{
	return createFrom_;
}

std::string DescribeDataSourceResult::getName()const
{
	return name_;
}

long DescribeDataSourceResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeDataSourceResult::getId()const
{
	return id_;
}

std::string DescribeDataSourceResult::getModifier()const
{
	return modifier_;
}

