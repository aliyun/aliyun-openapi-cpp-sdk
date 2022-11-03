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

#include <alibabacloud/cas/model/DescribeCertificateStateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCertificateStateResult::DescribeCertificateStateResult() :
	ServiceResult()
{}

DescribeCertificateStateResult::DescribeCertificateStateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateStateResult::~DescribeCertificateStateResult()
{}

void DescribeCertificateStateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["RecordType"].isNull())
		recordType_ = value["RecordType"].asString();
	if(!value["Certificate"].isNull())
		certificate_ = value["Certificate"].asString();
	if(!value["RecordDomain"].isNull())
		recordDomain_ = value["RecordDomain"].asString();
	if(!value["PrivateKey"].isNull())
		privateKey_ = value["PrivateKey"].asString();
	if(!value["ValidateType"].isNull())
		validateType_ = value["ValidateType"].asString();
	if(!value["RecordValue"].isNull())
		recordValue_ = value["RecordValue"].asString();
	if(!value["Content"].isNull())
		content_ = value["Content"].asString();
	if(!value["Uri"].isNull())
		uri_ = value["Uri"].asString();

}

std::string DescribeCertificateStateResult::getType()const
{
	return type_;
}

std::string DescribeCertificateStateResult::getPrivateKey()const
{
	return privateKey_;
}

std::string DescribeCertificateStateResult::getRecordType()const
{
	return recordType_;
}

std::string DescribeCertificateStateResult::getContent()const
{
	return content_;
}

std::string DescribeCertificateStateResult::getRecordDomain()const
{
	return recordDomain_;
}

std::string DescribeCertificateStateResult::getRecordValue()const
{
	return recordValue_;
}

std::string DescribeCertificateStateResult::getDomain()const
{
	return domain_;
}

std::string DescribeCertificateStateResult::getValidateType()const
{
	return validateType_;
}

std::string DescribeCertificateStateResult::getUri()const
{
	return uri_;
}

std::string DescribeCertificateStateResult::getCertificate()const
{
	return certificate_;
}

