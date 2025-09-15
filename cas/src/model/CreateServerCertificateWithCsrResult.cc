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

#include <alibabacloud/cas/model/CreateServerCertificateWithCsrResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

CreateServerCertificateWithCsrResult::CreateServerCertificateWithCsrResult() :
	ServiceResult()
{}

CreateServerCertificateWithCsrResult::CreateServerCertificateWithCsrResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateServerCertificateWithCsrResult::~CreateServerCertificateWithCsrResult()
{}

void CreateServerCertificateWithCsrResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["X509Certificate"].isNull())
		x509Certificate_ = value["X509Certificate"].asString();
	if(!value["CertificateChain"].isNull())
		certificateChain_ = value["CertificateChain"].asString();
	if(!value["RootX509Certificate"].isNull())
		rootX509Certificate_ = value["RootX509Certificate"].asString();
	if(!value["ParentX509Certificate"].isNull())
		parentX509Certificate_ = value["ParentX509Certificate"].asString();
	if(!value["Identifier"].isNull())
		identifier_ = value["Identifier"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();

}

std::string CreateServerCertificateWithCsrResult::getIdentifier()const
{
	return identifier_;
}

std::string CreateServerCertificateWithCsrResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string CreateServerCertificateWithCsrResult::getParentX509Certificate()const
{
	return parentX509Certificate_;
}

std::string CreateServerCertificateWithCsrResult::getCertificateChain()const
{
	return certificateChain_;
}

std::string CreateServerCertificateWithCsrResult::getRootX509Certificate()const
{
	return rootX509Certificate_;
}

std::string CreateServerCertificateWithCsrResult::getX509Certificate()const
{
	return x509Certificate_;
}

