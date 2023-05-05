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

#include <alibabacloud/ecd/model/ListUserAdOrganizationUnitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ListUserAdOrganizationUnitsResult::ListUserAdOrganizationUnitsResult() :
	ServiceResult()
{}

ListUserAdOrganizationUnitsResult::ListUserAdOrganizationUnitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserAdOrganizationUnitsResult::~ListUserAdOrganizationUnitsResult()
{}

void ListUserAdOrganizationUnitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOUNamesNode = value["OUNames"]["ouName"];
	for (auto valueOUNamesouName : allOUNamesNode)
	{
		OuName oUNamesObject;
		if(!valueOUNamesouName["OfficeSiteId"].isNull())
			oUNamesObject.officeSiteId = valueOUNamesouName["OfficeSiteId"].asString();
		if(!valueOUNamesouName["OUName"].isNull())
			oUNamesObject.oUName = valueOUNamesouName["OUName"].asString();
		if(!valueOUNamesouName["DisplayOUName"].isNull())
			oUNamesObject.displayOUName = valueOUNamesouName["DisplayOUName"].asString();
		oUNames_.push_back(oUNamesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListUserAdOrganizationUnitsResult::OuName> ListUserAdOrganizationUnitsResult::getOUNames()const
{
	return oUNames_;
}

std::string ListUserAdOrganizationUnitsResult::getNextToken()const
{
	return nextToken_;
}

