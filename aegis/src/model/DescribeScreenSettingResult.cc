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

#include <alibabacloud/aegis/model/DescribeScreenSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenSettingResult::DescribeScreenSettingResult() :
	ServiceResult()
{}

DescribeScreenSettingResult::DescribeScreenSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenSettingResult::~DescribeScreenSettingResult()
{}

void DescribeScreenSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["MonitorUrl"].isNull())
		monitorUrl_ = value["MonitorUrl"].asString();
	if(!value["LogoPower"].isNull())
		logoPower_ = value["LogoPower"].asString() == "true";
	if(!value["Title"].isNull())
		title_ = value["Title"].asString();
	if(!value["ScreenDataMap"].isNull())
		screenDataMap_ = value["ScreenDataMap"].asString();
	if(!value["ScreenDefault"].isNull())
		screenDefault_ = std::stoi(value["ScreenDefault"].asString());
	if(!value["ScreenId"].isNull())
		screenId_ = std::stoi(value["ScreenId"].asString());
	if(!value["LogoUrl"].isNull())
		logoUrl_ = value["LogoUrl"].asString();

}

bool DescribeScreenSettingResult::getLogoPower()const
{
	return logoPower_;
}

std::string DescribeScreenSettingResult::getMonitorUrl()const
{
	return monitorUrl_;
}

int DescribeScreenSettingResult::getScreenId()const
{
	return screenId_;
}

std::string DescribeScreenSettingResult::getLogoUrl()const
{
	return logoUrl_;
}

std::string DescribeScreenSettingResult::getScreenDataMap()const
{
	return screenDataMap_;
}

std::string DescribeScreenSettingResult::getTitle()const
{
	return title_;
}

int DescribeScreenSettingResult::getScreenDefault()const
{
	return screenDefault_;
}

bool DescribeScreenSettingResult::getSuccess()const
{
	return success_;
}

