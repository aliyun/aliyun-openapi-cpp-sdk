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

#include <alibabacloud/csb/model/FindApproveServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindApproveServiceListResult::FindApproveServiceListResult() :
	ServiceResult()
{}

FindApproveServiceListResult::FindApproveServiceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindApproveServiceListResult::~FindApproveServiceListResult()
{}

void FindApproveServiceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allServiceList = value["ServiceList"]["Service"];
	for (auto value : allServiceList)
	{
		Data::Service serviceObject;
		if(!value["AllVisiable"].isNull())
			serviceObject.allVisiable = value["AllVisiable"].asString() == "true";
		if(!value["CasTargets"].isNull())
			serviceObject.casTargets = value["CasTargets"].asString();
		if(!value["CreateTime"].isNull())
			serviceObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["CsbId"].isNull())
			serviceObject.csbId = std::stol(value["CsbId"].asString());
		if(!value["Id"].isNull())
			serviceObject.id = std::stol(value["Id"].asString());
		if(!value["InterfaceName"].isNull())
			serviceObject.interfaceName = value["InterfaceName"].asString();
		if(!value["ModifiedTime"].isNull())
			serviceObject.modifiedTime = std::stol(value["ModifiedTime"].asString());
		if(!value["OwnerId"].isNull())
			serviceObject.ownerId = value["OwnerId"].asString();
		if(!value["PrincipalName"].isNull())
			serviceObject.principalName = value["PrincipalName"].asString();
		if(!value["ProjectId"].isNull())
			serviceObject.projectId = std::stol(value["ProjectId"].asString());
		if(!value["ProjectName"].isNull())
			serviceObject.projectName = value["ProjectName"].asString();
		if(!value["Qps"].isNull())
			serviceObject.qps = std::stoi(value["Qps"].asString());
		if(!value["Scope"].isNull())
			serviceObject.scope = value["Scope"].asString();
		if(!value["ServiceName"].isNull())
			serviceObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceVersion"].isNull())
			serviceObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["SkipAuth"].isNull())
			serviceObject.skipAuth = value["SkipAuth"].asString() == "true";
		if(!value["StatisticName"].isNull())
			serviceObject.statisticName = value["StatisticName"].asString();
		if(!value["Status"].isNull())
			serviceObject.status = std::stoi(value["Status"].asString());
		if(!value["UserId"].isNull())
			serviceObject.userId = value["UserId"].asString();
		data_.serviceList.push_back(serviceObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindApproveServiceListResult::getMessage()const
{
	return message_;
}

FindApproveServiceListResult::Data FindApproveServiceListResult::getData()const
{
	return data_;
}

int FindApproveServiceListResult::getCode()const
{
	return code_;
}

