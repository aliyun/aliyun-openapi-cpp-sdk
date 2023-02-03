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

#include <alibabacloud/mse/model/GetGatewayDomainDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGatewayDomainDetailResult::GetGatewayDomainDetailResult() :
	ServiceResult()
{}

GetGatewayDomainDetailResult::GetGatewayDomainDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayDomainDetailResult::~GetGatewayDomainDetailResult()
{}

void GetGatewayDomainDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["GatewayId"].isNull())
		data_.gatewayId = std::stol(dataNode["GatewayId"].asString());
	if(!dataNode["Protocol"].isNull())
		data_.protocol = dataNode["Protocol"].asString();
	if(!dataNode["MustHttps"].isNull())
		data_.mustHttps = dataNode["MustHttps"].asString() == "true";
	if(!dataNode["CertIdentifier"].isNull())
		data_.certIdentifier = dataNode["CertIdentifier"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["CertName"].isNull())
		data_.certName = dataNode["CertName"].asString();
	if(!dataNode["CommonName"].isNull())
		data_.commonName = dataNode["CommonName"].asString();
	if(!dataNode["Sans"].isNull())
		data_.sans = dataNode["Sans"].asString();
	if(!dataNode["BeforeDate"].isNull())
		data_.beforeDate = std::stol(dataNode["BeforeDate"].asString());
	if(!dataNode["AfterDate"].isNull())
		data_.afterDate = std::stol(dataNode["AfterDate"].asString());
	if(!dataNode["Algorithm"].isNull())
		data_.algorithm = dataNode["Algorithm"].asString();
	if(!dataNode["Issuer"].isNull())
		data_.issuer = dataNode["Issuer"].asString();
	if(!dataNode["GmtBefore"].isNull())
		data_.gmtBefore = dataNode["GmtBefore"].asString();
	if(!dataNode["GmtAfter"].isNull())
		data_.gmtAfter = dataNode["GmtAfter"].asString();
	if(!dataNode["Http2"].isNull())
		data_.http2 = dataNode["Http2"].asString();
	if(!dataNode["TlsMax"].isNull())
		data_.tlsMax = dataNode["TlsMax"].asString();
	if(!dataNode["TlsMin"].isNull())
		data_.tlsMin = dataNode["TlsMin"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGatewayDomainDetailResult::getMessage()const
{
	return message_;
}

int GetGatewayDomainDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGatewayDomainDetailResult::Data GetGatewayDomainDetailResult::getData()const
{
	return data_;
}

int GetGatewayDomainDetailResult::getCode()const
{
	return code_;
}

bool GetGatewayDomainDetailResult::getSuccess()const
{
	return success_;
}

