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

#include <alibabacloud/dcdn/model/CreateDcdnCertificateSigningRequestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

CreateDcdnCertificateSigningRequestResult::CreateDcdnCertificateSigningRequestResult() :
	ServiceResult()
{}

CreateDcdnCertificateSigningRequestResult::CreateDcdnCertificateSigningRequestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDcdnCertificateSigningRequestResult::~CreateDcdnCertificateSigningRequestResult()
{}

void CreateDcdnCertificateSigningRequestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["PubMd5"].isNull())
		pubMd5_ = value["PubMd5"].asString();
	if(!value["Csr"].isNull())
		csr_ = value["Csr"].asString();
	if(!value["CommonName"].isNull())
		commonName_ = value["CommonName"].asString();

}

std::string CreateDcdnCertificateSigningRequestResult::getPubMd5()const
{
	return pubMd5_;
}

std::string CreateDcdnCertificateSigningRequestResult::getCsr()const
{
	return csr_;
}

std::string CreateDcdnCertificateSigningRequestResult::getCommonName()const
{
	return commonName_;
}

