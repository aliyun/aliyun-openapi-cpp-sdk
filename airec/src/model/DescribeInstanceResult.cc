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

#include <alibabacloud/airec/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["chargeType"].isNull())
		result_.chargeType = resultNode["chargeType"].asString();
	if(!resultNode["commodityCode"].isNull())
		result_.commodityCode = resultNode["commodityCode"].asString();
	if(!resultNode["dataSetVersion"].isNull())
		result_.dataSetVersion = resultNode["dataSetVersion"].asString();
	if(!resultNode["expiredTime"].isNull())
		result_.expiredTime = resultNode["expiredTime"].asString();
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = resultNode["gmtCreate"].asString();
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = resultNode["gmtModified"].asString();
	if(!resultNode["industry"].isNull())
		result_.industry = resultNode["industry"].asString();
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["lockMode"].isNull())
		result_.lockMode = resultNode["lockMode"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["regionId"].isNull())
		result_.regionId = resultNode["regionId"].asString();
	if(!resultNode["scene"].isNull())
		result_.scene = resultNode["scene"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeInstanceResult::getMessage()const
{
	return message_;
}

std::string DescribeInstanceResult::getRequestId()const
{
	return requestId_;
}

std::string DescribeInstanceResult::getCode()const
{
	return code_;
}

DescribeInstanceResult::Result DescribeInstanceResult::getResult()const
{
	return result_;
}

