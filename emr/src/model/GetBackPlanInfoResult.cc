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

#include <alibabacloud/emr/model/GetBackPlanInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetBackPlanInfoResult::GetBackPlanInfoResult() :
	ServiceResult()
{}

GetBackPlanInfoResult::GetBackPlanInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBackPlanInfoResult::~GetBackPlanInfoResult()
{}

void GetBackPlanInfoResult::parse(const std::string &payload)
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
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["RootPath"].isNull())
		rootPath_ = value["RootPath"].asString();

}

std::string GetBackPlanInfoResult::getRootPath()const
{
	return rootPath_;
}

std::string GetBackPlanInfoResult::getDescription()const
{
	return description_;
}

std::string GetBackPlanInfoResult::getClusterId()const
{
	return clusterId_;
}

std::string GetBackPlanInfoResult::getId()const
{
	return id_;
}

std::string GetBackPlanInfoResult::getName()const
{
	return name_;
}

