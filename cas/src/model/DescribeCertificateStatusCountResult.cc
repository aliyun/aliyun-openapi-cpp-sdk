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

#include <alibabacloud/cas/model/DescribeCertificateStatusCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCertificateStatusCountResult::DescribeCertificateStatusCountResult() :
	ServiceResult()
{}

DescribeCertificateStatusCountResult::DescribeCertificateStatusCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateStatusCountResult::~DescribeCertificateStatusCountResult()
{}

void DescribeCertificateStatusCountResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Payed"].isNull())
		payed_ = std::stoi(value["Payed"].asString());
	if(!value["Checking"].isNull())
		checking_ = std::stoi(value["Checking"].asString());
	if(!value["CheckedFail"].isNull())
		checkedFail_ = std::stoi(value["CheckedFail"].asString());
	if(!value["Issued"].isNull())
		issued_ = std::stoi(value["Issued"].asString());
	if(!value["Revoked"].isNull())
		revoked_ = std::stoi(value["Revoked"].asString());
	if(!value["Closed"].isNull())
		closed_ = std::stoi(value["Closed"].asString());
	if(!value["WillExpired"].isNull())
		willExpired_ = std::stoi(value["WillExpired"].asString());
	if(!value["Expired"].isNull())
		expired_ = std::stoi(value["Expired"].asString());
	if(!value["RevokeChecking"].isNull())
		revokeChecking_ = std::stoi(value["RevokeChecking"].asString());

}

int DescribeCertificateStatusCountResult::getPayed()const
{
	return payed_;
}

int DescribeCertificateStatusCountResult::getRevoked()const
{
	return revoked_;
}

int DescribeCertificateStatusCountResult::getClosed()const
{
	return closed_;
}

int DescribeCertificateStatusCountResult::getWillExpired()const
{
	return willExpired_;
}

int DescribeCertificateStatusCountResult::getIssued()const
{
	return issued_;
}

int DescribeCertificateStatusCountResult::getExpired()const
{
	return expired_;
}

int DescribeCertificateStatusCountResult::getCheckedFail()const
{
	return checkedFail_;
}

int DescribeCertificateStatusCountResult::getChecking()const
{
	return checking_;
}

int DescribeCertificateStatusCountResult::getRevokeChecking()const
{
	return revokeChecking_;
}

