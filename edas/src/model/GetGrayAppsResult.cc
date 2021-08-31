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

#include <alibabacloud/edas/model/GetGrayAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetGrayAppsResult::GetGrayAppsResult() :
	ServiceResult()
{}

GetGrayAppsResult::GetGrayAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGrayAppsResult::~GetGrayAppsResult()
{}

void GetGrayAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto resultNode = dataNode["Result"];
	if(!resultNode["AppId"].isNull())
		data_.result.appId = resultNode["AppId"].asString();
	if(!resultNode["ApplicationType"].isNull())
		data_.result.applicationType = resultNode["ApplicationType"].asString();
	if(!resultNode["Appname"].isNull())
		data_.result.appname = resultNode["Appname"].asString();
	if(!resultNode["DefaultGroupId"].isNull())
		data_.result.defaultGroupId = resultNode["DefaultGroupId"].asString();
	if(!resultNode["PackageVersion"].isNull())
		data_.result.packageVersion = resultNode["PackageVersion"].asString();
	if(!resultNode["RegionId"].isNull())
		data_.result.regionId = resultNode["RegionId"].asString();
	if(!resultNode["DevelopType"].isNull())
		data_.result.developType = resultNode["DevelopType"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetGrayAppsResult::getMessage()const
{
	return message_;
}

GetGrayAppsResult::Data GetGrayAppsResult::getData()const
{
	return data_;
}

int GetGrayAppsResult::getCode()const
{
	return code_;
}

