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

#include <alibabacloud/dbs/model/DescribeBackupPlanBillingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeBackupPlanBillingResult::DescribeBackupPlanBillingResult() :
	ServiceResult()
{}

DescribeBackupPlanBillingResult::DescribeBackupPlanBillingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPlanBillingResult::~DescribeBackupPlanBillingResult()
{}

void DescribeBackupPlanBillingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto itemNode = value["Item"];
	if(!itemNode["BuyCreateTimestamp"].isNull())
		item_.buyCreateTimestamp = std::stol(itemNode["BuyCreateTimestamp"].asString());
	if(!itemNode["FullStorageSize"].isNull())
		item_.fullStorageSize = std::stol(itemNode["FullStorageSize"].asString());
	if(!itemNode["BuyExpiredTimestamp"].isNull())
		item_.buyExpiredTimestamp = std::stol(itemNode["BuyExpiredTimestamp"].asString());
	if(!itemNode["BuySpec"].isNull())
		item_.buySpec = itemNode["BuySpec"].asString();
	if(!itemNode["QuotaEndTimestamp"].isNull())
		item_.quotaEndTimestamp = std::stol(itemNode["QuotaEndTimestamp"].asString());
	if(!itemNode["IsExpired"].isNull())
		item_.isExpired = itemNode["IsExpired"].asString() == "true";
	if(!itemNode["QuotaStartTimestamp"].isNull())
		item_.quotaStartTimestamp = std::stol(itemNode["QuotaStartTimestamp"].asString());
	if(!itemNode["TotalFreeBytes"].isNull())
		item_.totalFreeBytes = std::stol(itemNode["TotalFreeBytes"].asString());
	if(!itemNode["PaiedBytes"].isNull())
		item_.paiedBytes = std::stol(itemNode["PaiedBytes"].asString());
	if(!itemNode["UsedFullBytes"].isNull())
		item_.usedFullBytes = std::stol(itemNode["UsedFullBytes"].asString());
	if(!itemNode["IsFreeBytesUnlimited"].isNull())
		item_.isFreeBytesUnlimited = itemNode["IsFreeBytesUnlimited"].asString() == "true";
	if(!itemNode["ContStorageSize"].isNull())
		item_.contStorageSize = std::stol(itemNode["ContStorageSize"].asString());
	if(!itemNode["BuyChargeType"].isNull())
		item_.buyChargeType = itemNode["BuyChargeType"].asString();
	if(!itemNode["UsedIncrementBytes"].isNull())
		item_.usedIncrementBytes = std::stol(itemNode["UsedIncrementBytes"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

DescribeBackupPlanBillingResult::Item DescribeBackupPlanBillingResult::getItem()const
{
	return item_;
}

int DescribeBackupPlanBillingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeBackupPlanBillingResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeBackupPlanBillingResult::getSuccess()const
{
	return success_;
}

std::string DescribeBackupPlanBillingResult::getErrCode()const
{
	return errCode_;
}

