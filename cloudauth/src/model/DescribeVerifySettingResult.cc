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

#include <alibabacloud/cloudauth/model/DescribeVerifySettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeVerifySettingResult::DescribeVerifySettingResult() :
	ServiceResult()
{}

DescribeVerifySettingResult::DescribeVerifySettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVerifySettingResult::~DescribeVerifySettingResult()
{}

void DescribeVerifySettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVerifySettingListNode = value["VerifySettingList"]["VerifySetting"];
	for (auto valueVerifySettingListVerifySetting : allVerifySettingListNode)
	{
		VerifySetting verifySettingListObject;
		if(!valueVerifySettingListVerifySetting["BizType"].isNull())
			verifySettingListObject.bizType = valueVerifySettingListVerifySetting["BizType"].asString();
		if(!valueVerifySettingListVerifySetting["BizName"].isNull())
			verifySettingListObject.bizName = valueVerifySettingListVerifySetting["BizName"].asString();
		if(!valueVerifySettingListVerifySetting["Solution"].isNull())
			verifySettingListObject.solution = valueVerifySettingListVerifySetting["Solution"].asString();
		auto allStepList = value["StepList"]["Step"];
		for (auto value : allStepList)
			verifySettingListObject.stepList.push_back(value.asString());
		verifySettingList_.push_back(verifySettingListObject);
	}

}

std::vector<DescribeVerifySettingResult::VerifySetting> DescribeVerifySettingResult::getVerifySettingList()const
{
	return verifySettingList_;
}

