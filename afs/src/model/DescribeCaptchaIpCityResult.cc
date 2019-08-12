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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCaptchaCities = value["CaptchaCities"]["CaptchaCitie"];
	for (auto value : allCaptchaCities)
	{
		CaptchaCitie captchaCitiesObject;
		if(!value["Location"].isNull())
			captchaCitiesObject.location = value["Location"].asString();
		if(!value["Lat"].isNull())
			captchaCitiesObject.lat = value["Lat"].asString();
		if(!value["Lng"].isNull())
			captchaCitiesObject.lng = value["Lng"].asString();
		if(!value["Pv"].isNull())
			captchaCitiesObject.pv = std::stoi(value["Pv"].asString());
		captchaCities_.push_back(captchaCitiesObject);
	}
	auto allCaptchaIps = value["CaptchaIps"]["CaptchaIp"];
	for (auto value : allCaptchaIps)
	{
		CaptchaIp captchaIpsObject;
		if(!value["Ip"].isNull())
			captchaIpsObject.ip = value["Ip"].asString();
		if(!value["Value"].isNull())
			captchaIpsObject.value = std::stoi(value["Value"].asString());
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

