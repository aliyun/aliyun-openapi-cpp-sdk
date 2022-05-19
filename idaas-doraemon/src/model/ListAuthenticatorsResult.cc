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

#include <alibabacloud/idaas-doraemon/model/ListAuthenticatorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

ListAuthenticatorsResult::ListAuthenticatorsResult() :
	ServiceResult()
{}

ListAuthenticatorsResult::ListAuthenticatorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthenticatorsResult::~ListAuthenticatorsResult()
{}

void ListAuthenticatorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthenticatorNode = value["Authenticator"]["AuthenticatorListDTO"];
	for (auto valueAuthenticatorAuthenticatorListDTO : allAuthenticatorNode)
	{
		AuthenticatorListDTO authenticatorObject;
		if(!valueAuthenticatorAuthenticatorListDTO["ApplicationExternalId"].isNull())
			authenticatorObject.applicationExternalId = valueAuthenticatorAuthenticatorListDTO["ApplicationExternalId"].asString();
		if(!valueAuthenticatorAuthenticatorListDTO["AuthenticatorUuid"].isNull())
			authenticatorObject.authenticatorUuid = valueAuthenticatorAuthenticatorListDTO["AuthenticatorUuid"].asString();
		if(!valueAuthenticatorAuthenticatorListDTO["CredentialId"].isNull())
			authenticatorObject.credentialId = valueAuthenticatorAuthenticatorListDTO["CredentialId"].asString();
		if(!valueAuthenticatorAuthenticatorListDTO["Type"].isNull())
			authenticatorObject.type = valueAuthenticatorAuthenticatorListDTO["Type"].asString();
		if(!valueAuthenticatorAuthenticatorListDTO["AuthenticatorName"].isNull())
			authenticatorObject.authenticatorName = valueAuthenticatorAuthenticatorListDTO["AuthenticatorName"].asString();
		if(!valueAuthenticatorAuthenticatorListDTO["RegisterTime"].isNull())
			authenticatorObject.registerTime = std::stol(valueAuthenticatorAuthenticatorListDTO["RegisterTime"].asString());
		if(!valueAuthenticatorAuthenticatorListDTO["LastVerifyTime"].isNull())
			authenticatorObject.lastVerifyTime = std::stol(valueAuthenticatorAuthenticatorListDTO["LastVerifyTime"].asString());
		authenticator_.push_back(authenticatorObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListAuthenticatorsResult::getTotalCount()const
{
	return totalCount_;
}

long ListAuthenticatorsResult::getPageSize()const
{
	return pageSize_;
}

long ListAuthenticatorsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAuthenticatorsResult::AuthenticatorListDTO> ListAuthenticatorsResult::getAuthenticator()const
{
	return authenticator_;
}

