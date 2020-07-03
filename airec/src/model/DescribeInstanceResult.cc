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
	auto resultNode = value["Result"];
	if(!resultNode["InstanceId"].isNull())
		result_.instanceId = resultNode["InstanceId"].asString();
	if(!resultNode["ChargeType"].isNull())
		result_.chargeType = resultNode["ChargeType"].asString();
	if(!resultNode["RegionId"].isNull())
		result_.regionId = resultNode["RegionId"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["Type"].isNull())
		result_.type = resultNode["Type"].asString();
	if(!resultNode["ExpiredTime"].isNull())
		result_.expiredTime = resultNode["ExpiredTime"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = resultNode["Status"].asString();
	if(!resultNode["Industry"].isNull())
		result_.industry = resultNode["Industry"].asString();
	if(!resultNode["Scene"].isNull())
		result_.scene = resultNode["Scene"].asString();
	if(!resultNode["DataSetVersion"].isNull())
		result_.dataSetVersion = resultNode["DataSetVersion"].asString();
	if(!resultNode["CommodityCode"].isNull())
		result_.commodityCode = resultNode["CommodityCode"].asString();
	if(!resultNode["LockMode"].isNull())
		result_.lockMode = resultNode["LockMode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeInstanceResult::getMessage()const
{
	return message_;
}

std::string DescribeInstanceResult::getCode()const
{
	return code_;
}

DescribeInstanceResult::Result DescribeInstanceResult::getResult()const
{
	return result_;
}

