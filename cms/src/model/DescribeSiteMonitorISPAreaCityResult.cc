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

#include <alibabacloud/cms/model/DescribeSiteMonitorISPAreaCityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSiteMonitorISPAreaCityResult::DescribeSiteMonitorISPAreaCityResult() :
	ServiceResult()
{}

DescribeSiteMonitorISPAreaCityResult::DescribeSiteMonitorISPAreaCityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSiteMonitorISPAreaCityResult::~DescribeSiteMonitorISPAreaCityResult()
{}

void DescribeSiteMonitorISPAreaCityResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allIspCityList = value["IspCityList"]["IspCity"];
	for (auto value : allIspCityList)
	{
		IspCity ispCityListObject;
		if(!value["City"].isNull())
			ispCityListObject.city = value["City"].asString();
		if(!value["Isp"].isNull())
			ispCityListObject.isp = value["Isp"].asString();
		if(!value["CityName"].isNull())
			ispCityListObject.cityName = value["CityName"].asString();
		if(!value["IspName"].isNull())
			ispCityListObject.ispName = value["IspName"].asString();
		if(!value["Country"].isNull())
			ispCityListObject.country = value["Country"].asString();
		if(!value["Region"].isNull())
			ispCityListObject.region = value["Region"].asString();
		ispCityList_.push_back(ispCityListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string DescribeSiteMonitorISPAreaCityResult::getMessage()const
{
	return message_;
}

std::string DescribeSiteMonitorISPAreaCityResult::getData()const
{
	return data_;
}

std::string DescribeSiteMonitorISPAreaCityResult::getCode()const
{
	return code_;
}

std::vector<DescribeSiteMonitorISPAreaCityResult::IspCity> DescribeSiteMonitorISPAreaCityResult::getIspCityList()const
{
	return ispCityList_;
}

std::string DescribeSiteMonitorISPAreaCityResult::getSuccess()const
{
	return success_;
}

