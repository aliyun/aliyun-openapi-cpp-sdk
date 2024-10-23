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

#include <alibabacloud/ims/model/ListSAMLProvidersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

ListSAMLProvidersResult::ListSAMLProvidersResult() :
	ServiceResult()
{}

ListSAMLProvidersResult::ListSAMLProvidersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSAMLProvidersResult::~ListSAMLProvidersResult()
{}

void ListSAMLProvidersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSAMLProvidersNode = value["SAMLProviders"]["SAMLProvider"];
	for (auto valueSAMLProvidersSAMLProvider : allSAMLProvidersNode)
	{
		SAMLProvider sAMLProvidersObject;
		if(!valueSAMLProvidersSAMLProvider["UpdateDate"].isNull())
			sAMLProvidersObject.updateDate = valueSAMLProvidersSAMLProvider["UpdateDate"].asString();
		if(!valueSAMLProvidersSAMLProvider["Description"].isNull())
			sAMLProvidersObject.description = valueSAMLProvidersSAMLProvider["Description"].asString();
		if(!valueSAMLProvidersSAMLProvider["SAMLProviderName"].isNull())
			sAMLProvidersObject.sAMLProviderName = valueSAMLProvidersSAMLProvider["SAMLProviderName"].asString();
		if(!valueSAMLProvidersSAMLProvider["CreateDate"].isNull())
			sAMLProvidersObject.createDate = valueSAMLProvidersSAMLProvider["CreateDate"].asString();
		if(!valueSAMLProvidersSAMLProvider["Arn"].isNull())
			sAMLProvidersObject.arn = valueSAMLProvidersSAMLProvider["Arn"].asString();
		sAMLProviders_.push_back(sAMLProvidersObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListSAMLProvidersResult::SAMLProvider> ListSAMLProvidersResult::getSAMLProviders()const
{
	return sAMLProviders_;
}

bool ListSAMLProvidersResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListSAMLProvidersResult::getMarker()const
{
	return marker_;
}

