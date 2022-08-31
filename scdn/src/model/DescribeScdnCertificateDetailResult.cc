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

#include <alibabacloud/scdn/model/DescribeScdnCertificateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnCertificateDetailResult::DescribeScdnCertificateDetailResult() :
	ServiceResult()
{}

DescribeScdnCertificateDetailResult::DescribeScdnCertificateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnCertificateDetailResult::~DescribeScdnCertificateDetailResult()
{}

void DescribeScdnCertificateDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CertName"].isNull())
		certName_ = value["CertName"].asString();
	if(!value["Key"].isNull())
		key_ = value["Key"].asString();
	if(!value["Cert"].isNull())
		cert_ = value["Cert"].asString();
	if(!value["CertId"].isNull())
		certId_ = std::stol(value["CertId"].asString());

}

long DescribeScdnCertificateDetailResult::getCertId()const
{
	return certId_;
}

std::string DescribeScdnCertificateDetailResult::getCertName()const
{
	return certName_;
}

std::string DescribeScdnCertificateDetailResult::getCert()const
{
	return cert_;
}

std::string DescribeScdnCertificateDetailResult::getKey()const
{
	return key_;
}

