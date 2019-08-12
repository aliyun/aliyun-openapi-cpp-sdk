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

#include <alibabacloud/rtc/model/DescribeRtcUserCntDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRtcUserCntDataResult::DescribeRtcUserCntDataResult() :
	ServiceResult()
{}

DescribeRtcUserCntDataResult::DescribeRtcUserCntDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcUserCntDataResult::~DescribeRtcUserCntDataResult()
{}

void DescribeRtcUserCntDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUserCntDataPerInterval = value["UserCntDataPerInterval"]["UserCntModule"];
	for (auto value : allUserCntDataPerInterval)
	{
		UserCntModule userCntDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			userCntDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["ActiveUserCnt"].isNull())
			userCntDataPerIntervalObject.activeUserCnt = std::stol(value["ActiveUserCnt"].asString());
		userCntDataPerInterval_.push_back(userCntDataPerIntervalObject);
	}

}

std::vector<DescribeRtcUserCntDataResult::UserCntModule> DescribeRtcUserCntDataResult::getUserCntDataPerInterval()const
{
	return userCntDataPerInterval_;
}

