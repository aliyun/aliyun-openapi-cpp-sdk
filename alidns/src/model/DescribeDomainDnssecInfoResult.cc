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

#include <alibabacloud/alidns/model/DescribeDomainDnssecInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainDnssecInfoResult::DescribeDomainDnssecInfoResult() :
	ServiceResult()
{}

DescribeDomainDnssecInfoResult::DescribeDomainDnssecInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainDnssecInfoResult::~DescribeDomainDnssecInfoResult()
{}

void DescribeDomainDnssecInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Digest"].isNull())
		digest_ = value["Digest"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["PublicKey"].isNull())
		publicKey_ = value["PublicKey"].asString();
	if(!value["DigestType"].isNull())
		digestType_ = value["DigestType"].asString();
	if(!value["DsRecord"].isNull())
		dsRecord_ = value["DsRecord"].asString();
	if(!value["KeyTag"].isNull())
		keyTag_ = value["KeyTag"].asString();
	if(!value["Flags"].isNull())
		flags_ = value["Flags"].asString();
	if(!value["Algorithm"].isNull())
		algorithm_ = value["Algorithm"].asString();

}

std::string DescribeDomainDnssecInfoResult::getStatus()const
{
	return status_;
}

std::string DescribeDomainDnssecInfoResult::getDigest()const
{
	return digest_;
}

std::string DescribeDomainDnssecInfoResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainDnssecInfoResult::getPublicKey()const
{
	return publicKey_;
}

std::string DescribeDomainDnssecInfoResult::getDigestType()const
{
	return digestType_;
}

std::string DescribeDomainDnssecInfoResult::getDsRecord()const
{
	return dsRecord_;
}

std::string DescribeDomainDnssecInfoResult::getKeyTag()const
{
	return keyTag_;
}

std::string DescribeDomainDnssecInfoResult::getFlags()const
{
	return flags_;
}

std::string DescribeDomainDnssecInfoResult::getAlgorithm()const
{
	return algorithm_;
}

