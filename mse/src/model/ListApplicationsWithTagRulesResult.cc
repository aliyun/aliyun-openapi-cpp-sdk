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

#include <alibabacloud/mse/model/ListApplicationsWithTagRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListApplicationsWithTagRulesResult::ListApplicationsWithTagRulesResult() :
	ServiceResult()
{}

ListApplicationsWithTagRulesResult::ListApplicationsWithTagRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsWithTagRulesResult::~ListApplicationsWithTagRulesResult()
{}

void ListApplicationsWithTagRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["ApplicationList"];
	for (auto dataNodeResultApplicationList : allResultNode)
	{
		Data::ApplicationList applicationListObject;
		if(!dataNodeResultApplicationList["Namespace"].isNull())
			applicationListObject._namespace = dataNodeResultApplicationList["Namespace"].asString();
		if(!dataNodeResultApplicationList["AppName"].isNull())
			applicationListObject.appName = dataNodeResultApplicationList["AppName"].asString();
		if(!dataNodeResultApplicationList["AppId"].isNull())
			applicationListObject.appId = dataNodeResultApplicationList["AppId"].asString();
		if(!dataNodeResultApplicationList["RouteStatus"].isNull())
			applicationListObject.routeStatus = std::stol(dataNodeResultApplicationList["RouteStatus"].asString());
		auto allRouteRulesNode = dataNodeResultApplicationList["RouteRules"]["RouteRule"];
		for (auto dataNodeResultApplicationListRouteRulesRouteRule : allRouteRulesNode)
		{
			Data::ApplicationList::RouteRule routeRulesObject;
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Status"].isNull())
				routeRulesObject.status = std::stoi(dataNodeResultApplicationListRouteRulesRouteRule["Status"].asString());
			if(!dataNodeResultApplicationListRouteRulesRouteRule["InstanceNum"].isNull())
				routeRulesObject.instanceNum = std::stoi(dataNodeResultApplicationListRouteRulesRouteRule["InstanceNum"].asString());
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Remove"].isNull())
				routeRulesObject.remove = dataNodeResultApplicationListRouteRulesRouteRule["Remove"].asString() == "true";
			if(!dataNodeResultApplicationListRouteRulesRouteRule["CarryData"].isNull())
				routeRulesObject.carryData = dataNodeResultApplicationListRouteRulesRouteRule["CarryData"].asString() == "true";
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Tag"].isNull())
				routeRulesObject.tag = dataNodeResultApplicationListRouteRulesRouteRule["Tag"].asString();
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Name"].isNull())
				routeRulesObject.name = dataNodeResultApplicationListRouteRulesRouteRule["Name"].asString();
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Rules"].isNull())
				routeRulesObject.rules = dataNodeResultApplicationListRouteRulesRouteRule["Rules"].asString();
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Id"].isNull())
				routeRulesObject.id = std::stol(dataNodeResultApplicationListRouteRulesRouteRule["Id"].asString());
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Rate"].isNull())
				routeRulesObject.rate = std::stoi(dataNodeResultApplicationListRouteRulesRouteRule["Rate"].asString());
			if(!dataNodeResultApplicationListRouteRulesRouteRule["GmtModified"].isNull())
				routeRulesObject.gmtModified = dataNodeResultApplicationListRouteRulesRouteRule["GmtModified"].asString();
			if(!dataNodeResultApplicationListRouteRulesRouteRule["Enable"].isNull())
				routeRulesObject.enable = dataNodeResultApplicationListRouteRulesRouteRule["Enable"].asString() == "true";
			applicationListObject.routeRules.push_back(routeRulesObject);
		}
		data_.result.push_back(applicationListObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListApplicationsWithTagRulesResult::getMessage()const
{
	return message_;
}

int ListApplicationsWithTagRulesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListApplicationsWithTagRulesResult::Data ListApplicationsWithTagRulesResult::getData()const
{
	return data_;
}

bool ListApplicationsWithTagRulesResult::getSuccess()const
{
	return success_;
}

