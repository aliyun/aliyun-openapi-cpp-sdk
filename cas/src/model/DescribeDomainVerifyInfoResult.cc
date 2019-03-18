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

#include <alibabacloud/cas/model/DescribeDomainVerifyInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeDomainVerifyInfoResult::DescribeDomainVerifyInfoResult() :
	ServiceResult()
{}

DescribeDomainVerifyInfoResult::DescribeDomainVerifyInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainVerifyInfoResult::~DescribeDomainVerifyInfoResult()
{}

void DescribeDomainVerifyInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["CheckName"].isNull())
		checkName_ = value["CheckName"].asString();
	if(!value["CheckValue"].isNull())
		checkValue_ = value["CheckValue"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();
	if(!value["CheckType"].isNull())
		checkType_ = value["CheckType"].asString();
	if(!value["CheckName1"].isNull())
		checkName1_ = value["CheckName1"].asString();
	if(!value["CheckName2"].isNull())
		checkName2_ = value["CheckName2"].asString();

}

std::string DescribeDomainVerifyInfoResult::getType()const
{
	return type_;
}

std::string DescribeDomainVerifyInfoResult::getCheckName()const
{
	return checkName_;
}

std::string DescribeDomainVerifyInfoResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::string DescribeDomainVerifyInfoResult::getCheckType()const
{
	return checkType_;
}

std::string DescribeDomainVerifyInfoResult::getCheckName1()const
{
	return checkName1_;
}

std::string DescribeDomainVerifyInfoResult::getCheckName2()const
{
	return checkName2_;
}

std::string DescribeDomainVerifyInfoResult::getCheckValue()const
{
	return checkValue_;
}

