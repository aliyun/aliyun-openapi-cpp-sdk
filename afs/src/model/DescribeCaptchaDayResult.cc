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
	auto captchaDayNode = value["CaptchaDay"];
	if(!captchaDayNode["Init"].isNull())
		captchaDay_.init = std::stoi(captchaDayNode["Init"].asString());
	if(!captchaDayNode["AskForVerify"].isNull())
		captchaDay_.askForVerify = std::stoi(captchaDayNode["AskForVerify"].asString());
	if(!captchaDayNode["DirecetStrategyInterception"].isNull())
		captchaDay_.direcetStrategyInterception = std::stoi(captchaDayNode["DirecetStrategyInterception"].asString());
	if(!captchaDayNode["TwiceVerify"].isNull())
		captchaDay_.twiceVerify = std::stoi(captchaDayNode["TwiceVerify"].asString());
	if(!captchaDayNode["Pass"].isNull())
		captchaDay_.pass = std::stoi(captchaDayNode["Pass"].asString());
	if(!captchaDayNode["CheckTested"].isNull())
		captchaDay_.checkTested = std::stoi(captchaDayNode["CheckTested"].asString());
	if(!captchaDayNode["UncheckTested"].isNull())
		captchaDay_.uncheckTested = std::stoi(captchaDayNode["UncheckTested"].asString());
	if(!captchaDayNode["LegalSign"].isNull())
		captchaDay_.legalSign = std::stoi(captchaDayNode["LegalSign"].asString());
	if(!captchaDayNode["MaliciousFlow"].isNull())
		captchaDay_.maliciousFlow = std::stoi(captchaDayNode["MaliciousFlow"].asString());
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

DescribeCaptchaDayResult::CaptchaDay DescribeCaptchaDayResult::getCaptchaDay()const
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

