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

#include <alibabacloud/polardb/model/DescribeLicenseOrderDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeLicenseOrderDetailsResult::DescribeLicenseOrderDetailsResult() :
	ServiceResult()
{}

DescribeLicenseOrderDetailsResult::DescribeLicenseOrderDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLicenseOrderDetailsResult::~DescribeLicenseOrderDetailsResult()
{}

void DescribeLicenseOrderDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ActivatedCodeCount"].isNull())
		activatedCodeCount_ = std::stoi(value["ActivatedCodeCount"].asString());
	if(!value["ActivationCodeQuota"].isNull())
		activationCodeQuota_ = std::stoi(value["ActivationCodeQuota"].asString());
	if(!value["AliyunOrderId"].isNull())
		aliyunOrderId_ = value["AliyunOrderId"].asString();
	if(!value["AllowEmptySystemIdentifier"].isNull())
		allowEmptySystemIdentifier_ = value["AllowEmptySystemIdentifier"].asString() == "true";
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["GmtCreated"].isNull())
		gmtCreated_ = value["GmtCreated"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["IsVirtualOrder"].isNull())
		isVirtualOrder_ = value["IsVirtualOrder"].asString() == "true";
	if(!value["IsVirtualOrderFrozen"].isNull())
		isVirtualOrderFrozen_ = value["IsVirtualOrderFrozen"].asString() == "true";
	if(!value["PackageType"].isNull())
		packageType_ = value["PackageType"].asString();
	if(!value["PackageValidity"].isNull())
		packageValidity_ = value["PackageValidity"].asString();
	if(!value["PurchaseChannel"].isNull())
		purchaseChannel_ = value["PurchaseChannel"].asString();
	if(!value["VirtualOrderId"].isNull())
		virtualOrderId_ = value["VirtualOrderId"].asString();

}

std::string DescribeLicenseOrderDetailsResult::getVirtualOrderId()const
{
	return virtualOrderId_;
}

int DescribeLicenseOrderDetailsResult::getActivatedCodeCount()const
{
	return activatedCodeCount_;
}

std::string DescribeLicenseOrderDetailsResult::getPackageValidity()const
{
	return packageValidity_;
}

bool DescribeLicenseOrderDetailsResult::getIsVirtualOrder()const
{
	return isVirtualOrder_;
}

std::string DescribeLicenseOrderDetailsResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeLicenseOrderDetailsResult::getGmtCreated()const
{
	return gmtCreated_;
}

bool DescribeLicenseOrderDetailsResult::getIsVirtualOrderFrozen()const
{
	return isVirtualOrderFrozen_;
}

std::string DescribeLicenseOrderDetailsResult::getPurchaseChannel()const
{
	return purchaseChannel_;
}

int DescribeLicenseOrderDetailsResult::getActivationCodeQuota()const
{
	return activationCodeQuota_;
}

std::string DescribeLicenseOrderDetailsResult::getAliyunOrderId()const
{
	return aliyunOrderId_;
}

std::string DescribeLicenseOrderDetailsResult::getPackageType()const
{
	return packageType_;
}

bool DescribeLicenseOrderDetailsResult::getAllowEmptySystemIdentifier()const
{
	return allowEmptySystemIdentifier_;
}

std::string DescribeLicenseOrderDetailsResult::getEngine()const
{
	return engine_;
}

