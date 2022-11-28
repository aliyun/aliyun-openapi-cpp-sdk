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

#include <alibabacloud/cbn/model/ListTransitRouterCidrResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterCidrResult::ListTransitRouterCidrResult() :
	ServiceResult()
{}

ListTransitRouterCidrResult::ListTransitRouterCidrResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterCidrResult::~ListTransitRouterCidrResult()
{}

void ListTransitRouterCidrResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCidrListsNode = value["CidrLists"]["CidrListsItem"];
	for (auto valueCidrListsCidrListsItem : allCidrListsNode)
	{
		CidrListsItem cidrListsObject;
		if(!valueCidrListsCidrListsItem["TransitRouterCidrId"].isNull())
			cidrListsObject.transitRouterCidrId = valueCidrListsCidrListsItem["TransitRouterCidrId"].asString();
		if(!valueCidrListsCidrListsItem["Family"].isNull())
			cidrListsObject.family = valueCidrListsCidrListsItem["Family"].asString();
		if(!valueCidrListsCidrListsItem["Name"].isNull())
			cidrListsObject.name = valueCidrListsCidrListsItem["Name"].asString();
		if(!valueCidrListsCidrListsItem["Description"].isNull())
			cidrListsObject.description = valueCidrListsCidrListsItem["Description"].asString();
		if(!valueCidrListsCidrListsItem["Cidr"].isNull())
			cidrListsObject.cidr = valueCidrListsCidrListsItem["Cidr"].asString();
		if(!valueCidrListsCidrListsItem["PublishCidrRoute"].isNull())
			cidrListsObject.publishCidrRoute = valueCidrListsCidrListsItem["PublishCidrRoute"].asString() == "true";
		if(!valueCidrListsCidrListsItem["TransitRouterId"].isNull())
			cidrListsObject.transitRouterId = valueCidrListsCidrListsItem["TransitRouterId"].asString();
		cidrLists_.push_back(cidrListsObject);
	}

}

std::vector<ListTransitRouterCidrResult::CidrListsItem> ListTransitRouterCidrResult::getCidrLists()const
{
	return cidrLists_;
}

