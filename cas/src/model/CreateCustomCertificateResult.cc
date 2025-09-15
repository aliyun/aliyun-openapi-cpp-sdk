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

#include <alibabacloud/cas/model/CreateCustomCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

CreateCustomCertificateResult::CreateCustomCertificateResult() :
	ServiceResult()
{}

CreateCustomCertificateResult::CreateCustomCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCustomCertificateResult::~CreateCustomCertificateResult()
{}

void CreateCustomCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Identifier"].isNull())
		identifier_ = value["Identifier"].asString();
	if(!value["Certificate"].isNull())
		certificate_ = value["Certificate"].asString();
	if(!value["CertificateChain"].isNull())
		certificateChain_ = value["CertificateChain"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();

}

std::string CreateCustomCertificateResult::getIdentifier()const
{
	return identifier_;
}

std::string CreateCustomCertificateResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string CreateCustomCertificateResult::getCertificateChain()const
{
	return certificateChain_;
}

std::string CreateCustomCertificateResult::getCertificate()const
{
	return certificate_;
}

