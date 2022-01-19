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

#include <alibabacloud/mse/model/ListSSLCertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListSSLCertResult::ListSSLCertResult() :
	ServiceResult()
{}

ListSSLCertResult::ListSSLCertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSSLCertResult::~ListSSLCertResult()
{}

void ListSSLCertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Domains"];
	for (auto valueDataDomains : allDataNode)
	{
		Domains dataObject;
		if(!valueDataDomains["CertIdentifier"].isNull())
			dataObject.certIdentifier = valueDataDomains["CertIdentifier"].asString();
		if(!valueDataDomains["CertName"].isNull())
			dataObject.certName = valueDataDomains["CertName"].asString();
		if(!valueDataDomains["CommonName"].isNull())
			dataObject.commonName = valueDataDomains["CommonName"].asString();
		if(!valueDataDomains["Sans"].isNull())
			dataObject.sans = valueDataDomains["Sans"].asString();
		if(!valueDataDomains["BeforeDate"].isNull())
			dataObject.beforeDate = valueDataDomains["BeforeDate"].asString();
		if(!valueDataDomains["AfterDate"].isNull())
			dataObject.afterDate = valueDataDomains["AfterDate"].asString();
		if(!valueDataDomains["Algorithm"].isNull())
			dataObject.algorithm = valueDataDomains["Algorithm"].asString();
		if(!valueDataDomains["Issuer"].isNull())
			dataObject.issuer = valueDataDomains["Issuer"].asString();
		if(!valueDataDomains["GmtBefore"].isNull())
			dataObject.gmtBefore = valueDataDomains["GmtBefore"].asString();
		if(!valueDataDomains["GmtAfter"].isNull())
			dataObject.gmtAfter = valueDataDomains["GmtAfter"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListSSLCertResult::getMessage()const
{
	return message_;
}

int ListSSLCertResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListSSLCertResult::Domains> ListSSLCertResult::getData()const
{
	return data_;
}

int ListSSLCertResult::getCode()const
{
	return code_;
}

bool ListSSLCertResult::getSuccess()const
{
	return success_;
}

