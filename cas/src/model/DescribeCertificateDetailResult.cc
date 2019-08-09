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

#include <alibabacloud/cas/model/DescribeCertificateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCertificateDetailResult::DescribeCertificateDetailResult() :
	ServiceResult()
{}

DescribeCertificateDetailResult::DescribeCertificateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateDetailResult::~DescribeCertificateDetailResult()
{}

void DescribeCertificateDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["SourceType"].isNull())
		sourceType_ = value["SourceType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["Year"].isNull())
		year_ = std::stoi(value["Year"].asString());
	if(!value["BeforeDate"].isNull())
		beforeDate_ = std::stol(value["BeforeDate"].asString());
	if(!value["AfterDate"].isNull())
		afterDate_ = std::stol(value["AfterDate"].asString());
	if(!value["FingerPrint"].isNull())
		fingerPrint_ = value["FingerPrint"].asString();
	if(!value["Domains"].isNull())
		domains_ = value["Domains"].asString();
	if(!value["StatusCode"].isNull())
		statusCode_ = value["StatusCode"].asString();
	if(!value["BrandName"].isNull())
		brandName_ = value["BrandName"].asString();
	if(!value["CertType"].isNull())
		certType_ = value["CertType"].asString();
	if(!value["RemainingDays"].isNull())
		remainingDays_ = std::stoi(value["RemainingDays"].asString());
	if(!value["AccessDownload"].isNull())
		accessDownload_ = std::stoi(value["AccessDownload"].asString());

}

long DescribeCertificateDetailResult::getAfterDate()const
{
	return afterDate_;
}

std::string DescribeCertificateDetailResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeCertificateDetailResult::getSourceType()const
{
	return sourceType_;
}

std::string DescribeCertificateDetailResult::getFingerPrint()const
{
	return fingerPrint_;
}

std::string DescribeCertificateDetailResult::getCertType()const
{
	return certType_;
}

int DescribeCertificateDetailResult::getRemainingDays()const
{
	return remainingDays_;
}

long DescribeCertificateDetailResult::getOrderId()const
{
	return orderId_;
}

std::string DescribeCertificateDetailResult::getStatusCode()const
{
	return statusCode_;
}

std::string DescribeCertificateDetailResult::getName()const
{
	return name_;
}

std::string DescribeCertificateDetailResult::getDomains()const
{
	return domains_;
}

std::string DescribeCertificateDetailResult::getBrandName()const
{
	return brandName_;
}

int DescribeCertificateDetailResult::getYear()const
{
	return year_;
}

int DescribeCertificateDetailResult::getAccessDownload()const
{
	return accessDownload_;
}

long DescribeCertificateDetailResult::getId()const
{
	return id_;
}

long DescribeCertificateDetailResult::getBeforeDate()const
{
	return beforeDate_;
}

