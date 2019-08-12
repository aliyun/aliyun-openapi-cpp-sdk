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

#include <alibabacloud/afs/model/DescribeCaptchaMinResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeCaptchaMinResult::DescribeCaptchaMinResult() :
	ServiceResult()
{}

DescribeCaptchaMinResult::DescribeCaptchaMinResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCaptchaMinResult::~DescribeCaptchaMinResult()
{}

void DescribeCaptchaMinResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCaptchaMins = value["CaptchaMins"]["CaptchaMin"];
	for (auto value : allCaptchaMins)
	{
		CaptchaMin captchaMinsObject;
		if(!value["Time"].isNull())
			captchaMinsObject.time = value["Time"].asString();
		if(!value["Pass"].isNull())
			captchaMinsObject.pass = value["Pass"].asString();
		if(!value["Interception"].isNull())
			captchaMinsObject.interception = value["Interception"].asString();
		captchaMins_.push_back(captchaMinsObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeCaptchaMinResult::CaptchaMin> DescribeCaptchaMinResult::getCaptchaMins()const
{
	return captchaMins_;
}

std::string DescribeCaptchaMinResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeCaptchaMinResult::getHasData()const
{
	return hasData_;
}

