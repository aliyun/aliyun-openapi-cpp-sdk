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

#include <alibabacloud/cas/model/CreateRootCACertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

CreateRootCACertificateResult::CreateRootCACertificateResult() :
	ServiceResult()
{}

CreateRootCACertificateResult::CreateRootCACertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRootCACertificateResult::~CreateRootCACertificateResult()
{}

void CreateRootCACertificateResult::parse(const std::string &payload)
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

}

std::string CreateRootCACertificateResult::getIdentifier()const
{
	return identifier_;
}

std::string CreateRootCACertificateResult::getCertificateChain()const
{
	return certificateChain_;
}

std::string CreateRootCACertificateResult::getCertificate()const
{
	return certificate_;
}

