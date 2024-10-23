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

#include <alibabacloud/ims/model/ListOIDCProvidersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

ListOIDCProvidersResult::ListOIDCProvidersResult() :
	ServiceResult()
{}

ListOIDCProvidersResult::ListOIDCProvidersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOIDCProvidersResult::~ListOIDCProvidersResult()
{}

void ListOIDCProvidersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOIDCProvidersNode = value["OIDCProviders"]["OIDCProvider"];
	for (auto valueOIDCProvidersOIDCProvider : allOIDCProvidersNode)
	{
		OIDCProvider oIDCProvidersObject;
		if(!valueOIDCProvidersOIDCProvider["UpdateDate"].isNull())
			oIDCProvidersObject.updateDate = valueOIDCProvidersOIDCProvider["UpdateDate"].asString();
		if(!valueOIDCProvidersOIDCProvider["Description"].isNull())
			oIDCProvidersObject.description = valueOIDCProvidersOIDCProvider["Description"].asString();
		if(!valueOIDCProvidersOIDCProvider["OIDCProviderName"].isNull())
			oIDCProvidersObject.oIDCProviderName = valueOIDCProvidersOIDCProvider["OIDCProviderName"].asString();
		if(!valueOIDCProvidersOIDCProvider["CreateDate"].isNull())
			oIDCProvidersObject.createDate = valueOIDCProvidersOIDCProvider["CreateDate"].asString();
		if(!valueOIDCProvidersOIDCProvider["Arn"].isNull())
			oIDCProvidersObject.arn = valueOIDCProvidersOIDCProvider["Arn"].asString();
		if(!valueOIDCProvidersOIDCProvider["IssuerUrl"].isNull())
			oIDCProvidersObject.issuerUrl = valueOIDCProvidersOIDCProvider["IssuerUrl"].asString();
		if(!valueOIDCProvidersOIDCProvider["Fingerprints"].isNull())
			oIDCProvidersObject.fingerprints = valueOIDCProvidersOIDCProvider["Fingerprints"].asString();
		if(!valueOIDCProvidersOIDCProvider["ClientIds"].isNull())
			oIDCProvidersObject.clientIds = valueOIDCProvidersOIDCProvider["ClientIds"].asString();
		if(!valueOIDCProvidersOIDCProvider["GmtCreate"].isNull())
			oIDCProvidersObject.gmtCreate = valueOIDCProvidersOIDCProvider["GmtCreate"].asString();
		if(!valueOIDCProvidersOIDCProvider["GmtModified"].isNull())
			oIDCProvidersObject.gmtModified = valueOIDCProvidersOIDCProvider["GmtModified"].asString();
		if(!valueOIDCProvidersOIDCProvider["IssuanceLimitTime"].isNull())
			oIDCProvidersObject.issuanceLimitTime = std::stol(valueOIDCProvidersOIDCProvider["IssuanceLimitTime"].asString());
		oIDCProviders_.push_back(oIDCProvidersObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListOIDCProvidersResult::OIDCProvider> ListOIDCProvidersResult::getOIDCProviders()const
{
	return oIDCProviders_;
}

bool ListOIDCProvidersResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListOIDCProvidersResult::getMarker()const
{
	return marker_;
}

