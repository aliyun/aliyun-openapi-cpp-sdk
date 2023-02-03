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

#include <alibabacloud/mse/model/ListGatewayDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListGatewayDomainResult::ListGatewayDomainResult() :
	ServiceResult()
{}

ListGatewayDomainResult::ListGatewayDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayDomainResult::~ListGatewayDomainResult()
{}

void ListGatewayDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Domains"];
	for (auto valueDataDomains : allDataNode)
	{
		Domains dataObject;
		if(!valueDataDomains["Id"].isNull())
			dataObject.id = std::stol(valueDataDomains["Id"].asString());
		if(!valueDataDomains["Name"].isNull())
			dataObject.name = valueDataDomains["Name"].asString();
		if(!valueDataDomains["Protocol"].isNull())
			dataObject.protocol = valueDataDomains["Protocol"].asString();
		if(!valueDataDomains["MustHttps"].isNull())
			dataObject.mustHttps = valueDataDomains["MustHttps"].asString() == "true";
		if(!valueDataDomains["CertIdentifier"].isNull())
			dataObject.certIdentifier = valueDataDomains["CertIdentifier"].asString();
		if(!valueDataDomains["CertBeforeDate"].isNull())
			dataObject.certBeforeDate = valueDataDomains["CertBeforeDate"].asString();
		if(!valueDataDomains["GatewayId"].isNull())
			dataObject.gatewayId = std::stol(valueDataDomains["GatewayId"].asString());
		if(!valueDataDomains["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataDomains["GmtCreate"].asString();
		if(!valueDataDomains["GmtModified"].isNull())
			dataObject.gmtModified = valueDataDomains["GmtModified"].asString();
		if(!valueDataDomains["Status"].isNull())
			dataObject.status = std::stoi(valueDataDomains["Status"].asString());
		if(!valueDataDomains["Type"].isNull())
			dataObject.type = valueDataDomains["Type"].asString();
		if(!valueDataDomains["Http2"].isNull())
			dataObject.http2 = valueDataDomains["Http2"].asString();
		if(!valueDataDomains["TlsMax"].isNull())
			dataObject.tlsMax = valueDataDomains["TlsMax"].asString();
		if(!valueDataDomains["TlsMin"].isNull())
			dataObject.tlsMin = valueDataDomains["TlsMin"].asString();
		auto commentNode = value["Comment"];
		if(!commentNode["Status"].isNull())
			dataObject.comment.status = commentNode["Status"].asString();
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

std::string ListGatewayDomainResult::getMessage()const
{
	return message_;
}

int ListGatewayDomainResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListGatewayDomainResult::Domains> ListGatewayDomainResult::getData()const
{
	return data_;
}

int ListGatewayDomainResult::getCode()const
{
	return code_;
}

bool ListGatewayDomainResult::getSuccess()const
{
	return success_;
}

