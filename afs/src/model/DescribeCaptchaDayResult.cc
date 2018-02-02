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

#include <alibabacloud/afs/model/DescribeCaptchaDayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeCaptchaDayResult::DescribeCaptchaDayResult() :
	ServiceResult()
{}

DescribeCaptchaDayResult::DescribeCaptchaDayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCaptchaDayResult::~DescribeCaptchaDayResult()
{}

void DescribeCaptchaDayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCaptchaDay = value["CaptchaDay"];
	for (auto value : allCaptchaDay)
	{
		CaptchaDay captchaDayObject;
		if(!value["Init"].isNull())
			captchaDayObject.init = std::stoi(value["Init"].asString());
		if(!value["AskForVerify"].isNull())
			captchaDayObject.askForVerify = std::stoi(value["AskForVerify"].asString());
		if(!value["DirecetStrategyInterception"].isNull())
			captchaDayObject.direcetStrategyInterception = std::stoi(value["DirecetStrategyInterception"].asString());
		if(!value["TwiceVerify"].isNull())
			captchaDayObject.twiceVerify = std::stoi(value["TwiceVerify"].asString());
		if(!value["Pass"].isNull())
			captchaDayObject.pass = std::stoi(value["Pass"].asString());
		if(!value["CheckTested"].isNull())
			captchaDayObject.checkTested = std::stoi(value["CheckTested"].asString());
		if(!value["UncheckTested"].isNull())
			captchaDayObject.uncheckTested = std::stoi(value["UncheckTested"].asString());
		if(!value["LegalSign"].isNull())
			captchaDayObject.legalSign = std::stoi(value["LegalSign"].asString());
		if(!value["MaliciousFlow"].isNull())
			captchaDayObject.maliciousFlow = std::stoi(value["MaliciousFlow"].asString());
		captchaDay_.push_back(captchaDayObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeCaptchaDayResult::CaptchaDay> DescribeCaptchaDayResult::getCaptchaDay()const
{
	return captchaDay_;
}

std::string DescribeCaptchaDayResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeCaptchaDayResult::getHasData()const
{
	return hasData_;
}

