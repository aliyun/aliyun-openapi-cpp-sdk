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
	auto allIspCityListNode = value["IspCityList"]["IspCity"];
	for (auto valueIspCityListIspCity : allIspCityListNode)
	{
		IspCity ispCityListObject;
		if(!valueIspCityListIspCity["CityName.en"].isNull())
			ispCityListObject.cityNameen = valueIspCityListIspCity["CityName.en"].asString();
		if(!valueIspCityListIspCity["IPV4ProbeCount"].isNull())
			ispCityListObject.iPV4ProbeCount = valueIspCityListIspCity["IPV4ProbeCount"].asString();
		if(!valueIspCityListIspCity["City"].isNull())
			ispCityListObject.city = valueIspCityListIspCity["City"].asString();
		if(!valueIspCityListIspCity["Isp"].isNull())
			ispCityListObject.isp = valueIspCityListIspCity["Isp"].asString();
		if(!valueIspCityListIspCity["CityName.zh_CN"].isNull())
			ispCityListObject.cityNamezh_CN = valueIspCityListIspCity["CityName.zh_CN"].asString();
		if(!valueIspCityListIspCity["Region.zh_CN"].isNull())
			ispCityListObject.regionzh_CN = valueIspCityListIspCity["Region.zh_CN"].asString();
		if(!valueIspCityListIspCity["IspName.zh_CN"].isNull())
			ispCityListObject.ispNamezh_CN = valueIspCityListIspCity["IspName.zh_CN"].asString();
		if(!valueIspCityListIspCity["Country.en"].isNull())
			ispCityListObject.countryen = valueIspCityListIspCity["Country.en"].asString();
		if(!valueIspCityListIspCity["APIProbeCount"].isNull())
			ispCityListObject.aPIProbeCount = valueIspCityListIspCity["APIProbeCount"].asString();
		if(!valueIspCityListIspCity["IPV6ProbeCount"].isNull())
			ispCityListObject.iPV6ProbeCount = valueIspCityListIspCity["IPV6ProbeCount"].asString();
		if(!valueIspCityListIspCity["Region"].isNull())
			ispCityListObject.region = valueIspCityListIspCity["Region"].asString();
		if(!valueIspCityListIspCity["Country"].isNull())
			ispCityListObject.country = valueIspCityListIspCity["Country"].asString();
		if(!valueIspCityListIspCity["IspName.en"].isNull())
			ispCityListObject.ispNameen = valueIspCityListIspCity["IspName.en"].asString();
		if(!valueIspCityListIspCity["Region.en"].isNull())
			ispCityListObject.regionen = valueIspCityListIspCity["Region.en"].asString();
		if(!valueIspCityListIspCity["Country.zh_CN"].isNull())
			ispCityListObject.countryzh_CN = valueIspCityListIspCity["Country.zh_CN"].asString();
		if(!valueIspCityListIspCity["Area.zh_CN"].isNull())
			ispCityListObject.areazh_CN = valueIspCityListIspCity["Area.zh_CN"].asString();
		if(!valueIspCityListIspCity["Area.en"].isNull())
			ispCityListObject.areaen = valueIspCityListIspCity["Area.en"].asString();
		auto allIPPool = value["IPPool"]["IPPool"];
		for (auto value : allIPPool)
			ispCityListObject.iPPool.push_back(value.asString());
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

