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

#include <alibabacloud/cms/model/DescribeSiteMonitorQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSiteMonitorQuotaResult::DescribeSiteMonitorQuotaResult() :
	ServiceResult()
{}

DescribeSiteMonitorQuotaResult::DescribeSiteMonitorQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSiteMonitorQuotaResult::~DescribeSiteMonitorQuotaResult()
{}

void DescribeSiteMonitorQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SiteMonitorOperatorQuotaQuota"].isNull())
		data_.siteMonitorOperatorQuotaQuota = std::stoi(dataNode["SiteMonitorOperatorQuotaQuota"].asString());
	if(!dataNode["SecondMonitor"].isNull())
		data_.secondMonitor = dataNode["SecondMonitor"].asString() == "true";
	if(!dataNode["SiteMonitorQuotaTaskUsed"].isNull())
		data_.siteMonitorQuotaTaskUsed = std::stoi(dataNode["SiteMonitorQuotaTaskUsed"].asString());
	if(!dataNode["SiteMonitorTaskQuota"].isNull())
		data_.siteMonitorTaskQuota = std::stoi(dataNode["SiteMonitorTaskQuota"].asString());
	if(!dataNode["SiteMonitorVersion"].isNull())
		data_.siteMonitorVersion = dataNode["SiteMonitorVersion"].asString();
	if(!dataNode["SiteMonitorIdcQuota"].isNull())
		data_.siteMonitorIdcQuota = std::stoi(dataNode["SiteMonitorIdcQuota"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DescribeSiteMonitorQuotaResult::getMessage()const
{
	return message_;
}

DescribeSiteMonitorQuotaResult::Data DescribeSiteMonitorQuotaResult::getData()const
{
	return data_;
}

std::string DescribeSiteMonitorQuotaResult::getCode()const
{
	return code_;
}

std::string DescribeSiteMonitorQuotaResult::getSuccess()const
{
	return success_;
}

