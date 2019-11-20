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

#include <alibabacloud/csb/model/FindServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindServiceListResult::FindServiceListResult() :
	ServiceResult()
{}

FindServiceListResult::FindServiceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindServiceListResult::~FindServiceListResult()
{}

void FindServiceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allServiceListNode = dataNode["ServiceList"]["Service"];
	for (auto dataNodeServiceListService : allServiceListNode)
	{
		Data::Service serviceObject;
		if(!dataNodeServiceListService["Alias"].isNull())
			serviceObject.alias = dataNodeServiceListService["Alias"].asString();
		if(!dataNodeServiceListService["AllVisiable"].isNull())
			serviceObject.allVisiable = dataNodeServiceListService["AllVisiable"].asString() == "true";
		if(!dataNodeServiceListService["CreateTime"].isNull())
			serviceObject.createTime = std::stol(dataNodeServiceListService["CreateTime"].asString());
		if(!dataNodeServiceListService["CsbId"].isNull())
			serviceObject.csbId = std::stol(dataNodeServiceListService["CsbId"].asString());
		if(!dataNodeServiceListService["Description"].isNull())
			serviceObject.description = dataNodeServiceListService["Description"].asString();
		if(!dataNodeServiceListService["Id"].isNull())
			serviceObject.id = std::stol(dataNodeServiceListService["Id"].asString());
		if(!dataNodeServiceListService["InterfaceName"].isNull())
			serviceObject.interfaceName = dataNodeServiceListService["InterfaceName"].asString();
		if(!dataNodeServiceListService["ModifiedTime"].isNull())
			serviceObject.modifiedTime = std::stol(dataNodeServiceListService["ModifiedTime"].asString());
		if(!dataNodeServiceListService["OrderInfo"].isNull())
			serviceObject.orderInfo = dataNodeServiceListService["OrderInfo"].asString();
		if(!dataNodeServiceListService["OwnerId"].isNull())
			serviceObject.ownerId = dataNodeServiceListService["OwnerId"].asString();
		if(!dataNodeServiceListService["PrincipalName"].isNull())
			serviceObject.principalName = dataNodeServiceListService["PrincipalName"].asString();
		if(!dataNodeServiceListService["ProjectId"].isNull())
			serviceObject.projectId = std::stol(dataNodeServiceListService["ProjectId"].asString());
		if(!dataNodeServiceListService["ProjectName"].isNull())
			serviceObject.projectName = dataNodeServiceListService["ProjectName"].asString();
		if(!dataNodeServiceListService["Scope"].isNull())
			serviceObject.scope = dataNodeServiceListService["Scope"].asString();
		if(!dataNodeServiceListService["ServiceName"].isNull())
			serviceObject.serviceName = dataNodeServiceListService["ServiceName"].asString();
		if(!dataNodeServiceListService["ServiceVersion"].isNull())
			serviceObject.serviceVersion = dataNodeServiceListService["ServiceVersion"].asString();
		if(!dataNodeServiceListService["SkipAuth"].isNull())
			serviceObject.skipAuth = dataNodeServiceListService["SkipAuth"].asString() == "true";
		if(!dataNodeServiceListService["StatisticName"].isNull())
			serviceObject.statisticName = dataNodeServiceListService["StatisticName"].asString();
		if(!dataNodeServiceListService["Status"].isNull())
			serviceObject.status = std::stoi(dataNodeServiceListService["Status"].asString());
		if(!dataNodeServiceListService["UserId"].isNull())
			serviceObject.userId = dataNodeServiceListService["UserId"].asString();
		if(!dataNodeServiceListService["CasTargets"].isNull())
			serviceObject.casTargets = dataNodeServiceListService["CasTargets"].asString();
		if(!dataNodeServiceListService["RouteConfJson"].isNull())
			serviceObject.routeConfJson = dataNodeServiceListService["RouteConfJson"].asString();
		data_.serviceList.push_back(serviceObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string FindServiceListResult::getMessage()const
{
	return message_;
}

FindServiceListResult::Data FindServiceListResult::getData()const
{
	return data_;
}

int FindServiceListResult::getCode()const
{
	return code_;
}

