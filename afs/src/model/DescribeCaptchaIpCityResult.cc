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

#include <alibabacloud/afs/model/DescribeCaptchaIpCityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeCaptchaIpCityResult::DescribeCaptchaIpCityResult() :
	ServiceResult()
{}

DescribeCaptchaIpCityResult::DescribeCaptchaIpCityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCaptchaIpCityResult::~DescribeCaptchaIpCityResult()
{}

void DescribeCaptchaIpCityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCaptchaCitiesNode = value["CaptchaCities"]["CaptchaCitie"];
	for (auto valueCaptchaCitiesCaptchaCitie : allCaptchaCitiesNode)
	{
		CaptchaCitie captchaCitiesObject;
		if(!valueCaptchaCitiesCaptchaCitie["Location"].isNull())
			captchaCitiesObject.location = valueCaptchaCitiesCaptchaCitie["Location"].asString();
		if(!valueCaptchaCitiesCaptchaCitie["Lat"].isNull())
			captchaCitiesObject.lat = valueCaptchaCitiesCaptchaCitie["Lat"].asString();
		if(!valueCaptchaCitiesCaptchaCitie["Lng"].isNull())
			captchaCitiesObject.lng = valueCaptchaCitiesCaptchaCitie["Lng"].asString();
		if(!valueCaptchaCitiesCaptchaCitie["Pv"].isNull())
			captchaCitiesObject.pv = std::stoi(valueCaptchaCitiesCaptchaCitie["Pv"].asString());
		captchaCities_.push_back(captchaCitiesObject);
	}
	auto allCaptchaIpsNode = value["CaptchaIps"]["CaptchaIp"];
	for (auto valueCaptchaIpsCaptchaIp : allCaptchaIpsNode)
	{
		CaptchaIp captchaIpsObject;
		if(!valueCaptchaIpsCaptchaIp["Ip"].isNull())
			captchaIpsObject.ip = valueCaptchaIpsCaptchaIp["Ip"].asString();
		if(!valueCaptchaIpsCaptchaIp["Value"].isNull())
			captchaIpsObject.value = std::stoi(valueCaptchaIpsCaptchaIp["Value"].asString());
		captchaIps_.push_back(captchaIpsObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeCaptchaIpCityResult::CaptchaIp> DescribeCaptchaIpCityResult::getCaptchaIps()const
{
	return captchaIps_;
}

std::vector<DescribeCaptchaIpCityResult::CaptchaCitie> DescribeCaptchaIpCityResult::getCaptchaCities()const
{
	return captchaCities_;
}

std::string DescribeCaptchaIpCityResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeCaptchaIpCityResult::getHasData()const
{
	return hasData_;
}

