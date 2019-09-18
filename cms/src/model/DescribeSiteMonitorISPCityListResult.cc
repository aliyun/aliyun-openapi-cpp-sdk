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

#include <alibabacloud/cms/model/DescribeSiteMonitorISPCityListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSiteMonitorISPCityListResult::DescribeSiteMonitorISPCityListResult() :
	ServiceResult()
{}

DescribeSiteMonitorISPCityListResult::DescribeSiteMonitorISPCityListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSiteMonitorISPCityListResult::~DescribeSiteMonitorISPCityListResult()
{}

void DescribeSiteMonitorISPCityListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspCityList = value["IspCityList"]["IspCity"];
	for (auto value : allIspCityList)
	{
		IspCity ispCityListObject;
		if(!value["Isp"].isNull())
			ispCityListObject.isp = value["Isp"].asString();
		if(!value["City"].isNull())
			ispCityListObject.city = value["City"].asString();
		if(!value["IspName.zh_CN"].isNull())
			ispCityListObject.ispNamezh_CN = value["IspName.zh_CN"].asString();
		if(!value["CityName.zh_CN"].isNull())
			ispCityListObject.cityNamezh_CN = value["CityName.zh_CN"].asString();
		if(!value["Region.zh_CN"].isNull())
			ispCityListObject.regionzh_CN = value["Region.zh_CN"].asString();
		if(!value["Country.zh_CN"].isNull())
			ispCityListObject.countryzh_CN = value["Country.zh_CN"].asString();
		ispCityList_.push_back(ispCityListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DescribeSiteMonitorISPCityListResult::getMessage()const
{
	return message_;
}

std::string DescribeSiteMonitorISPCityListResult::getCode()const
{
	return code_;
}

std::vector<DescribeSiteMonitorISPCityListResult::IspCity> DescribeSiteMonitorISPCityListResult::getIspCityList()const
{
	return ispCityList_;
}

std::string DescribeSiteMonitorISPCityListResult::getSuccess()const
{
	return success_;
}

