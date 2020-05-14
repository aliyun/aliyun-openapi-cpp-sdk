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

#include <alibabacloud/democenter/model/DescribeDemoAccessTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DemoCenter;
using namespace AlibabaCloud::DemoCenter::Model;

DescribeDemoAccessTokenResult::DescribeDemoAccessTokenResult() :
	ServiceResult()
{}

DescribeDemoAccessTokenResult::DescribeDemoAccessTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDemoAccessTokenResult::~DescribeDemoAccessTokenResult()
{}

void DescribeDemoAccessTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DemoAccessToken"].isNull())
		demoAccessToken_ = value["DemoAccessToken"].asString();
	if(!value["ExpiredDate"].isNull())
		expiredDate_ = value["ExpiredDate"].asString();
	if(!value["OpenUserId"].isNull())
		openUserId_ = value["OpenUserId"].asString();
	if(!value["DemoTrialPage"].isNull())
		demoTrialPage_ = value["DemoTrialPage"].asString();
	if(!value["DemoDetailPage"].isNull())
		demoDetailPage_ = value["DemoDetailPage"].asString();
	if(!value["Edition"].isNull())
		edition_ = value["Edition"].asString();

}

std::string DescribeDemoAccessTokenResult::getDemoTrialPage()const
{
	return demoTrialPage_;
}

std::string DescribeDemoAccessTokenResult::getDemoDetailPage()const
{
	return demoDetailPage_;
}

std::string DescribeDemoAccessTokenResult::getExpiredDate()const
{
	return expiredDate_;
}

std::string DescribeDemoAccessTokenResult::getDemoAccessToken()const
{
	return demoAccessToken_;
}

std::string DescribeDemoAccessTokenResult::getOpenUserId()const
{
	return openUserId_;
}

std::string DescribeDemoAccessTokenResult::getEdition()const
{
	return edition_;
}

