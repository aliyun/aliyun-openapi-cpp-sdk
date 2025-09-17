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

#include <alibabacloud/marketplaceintl/model/DescribePushMeteringDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MarketplaceIntl;
using namespace AlibabaCloud::MarketplaceIntl::Model;

DescribePushMeteringDataResult::DescribePushMeteringDataResult() :
	ServiceResult()
{}

DescribePushMeteringDataResult::DescribePushMeteringDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePushMeteringDataResult::~DescribePushMeteringDataResult()
{}

void DescribePushMeteringDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["EndTime"].isNull())
		result_.endTime = std::stol(resultNode["EndTime"].asString());
	if(!resultNode["InstanceId"].isNull())
		result_.instanceId = resultNode["InstanceId"].asString();
	if(!resultNode["IsPushBilling"].isNull())
		result_.isPushBilling = resultNode["IsPushBilling"].asString() == "true";
	if(!resultNode["MeteringAssist"].isNull())
		result_.meteringAssist = resultNode["MeteringAssist"].asString();
	if(!resultNode["MeteringEntity"].isNull())
		result_.meteringEntity = resultNode["MeteringEntity"].asString();
	if(!resultNode["PushOrderBizId"].isNull())
		result_.pushOrderBizId = resultNode["PushOrderBizId"].asString();
	if(!resultNode["StartTime"].isNull())
		result_.startTime = std::stol(resultNode["StartTime"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ForceFatal"].isNull())
		forceFatal_ = value["ForceFatal"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribePushMeteringDataResult::getMessage()const
{
	return message_;
}

bool DescribePushMeteringDataResult::getForceFatal()const
{
	return forceFatal_;
}

std::string DescribePushMeteringDataResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribePushMeteringDataResult::getCode()const
{
	return code_;
}

bool DescribePushMeteringDataResult::getSuccess()const
{
	return success_;
}

DescribePushMeteringDataResult::Result DescribePushMeteringDataResult::getResult()const
{
	return result_;
}

