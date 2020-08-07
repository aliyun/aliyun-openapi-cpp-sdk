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

#include <alibabacloud/csb/model/GetServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

GetServiceResult::GetServiceResult() :
	ServiceResult()
{}

GetServiceResult::GetServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceResult::~GetServiceResult()
{}

void GetServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto serviceNode = dataNode["Service"];
	if(!serviceNode["AccessParamsJSON"].isNull())
		data_.service.accessParamsJSON = serviceNode["AccessParamsJSON"].asString();
	if(!serviceNode["Active"].isNull())
		data_.service.active = serviceNode["Active"].asString() == "true";
	if(!serviceNode["Alias"].isNull())
		data_.service.alias = serviceNode["Alias"].asString();
	if(!serviceNode["AllVisiable"].isNull())
		data_.service.allVisiable = serviceNode["AllVisiable"].asString() == "true";
	if(!serviceNode["ApproveUserId"].isNull())
		data_.service.approveUserId = serviceNode["ApproveUserId"].asString();
	if(!serviceNode["CasTargets"].isNull())
		data_.service.casTargets = serviceNode["CasTargets"].asString();
	if(!serviceNode["ConsumeTypesJSON"].isNull())
		data_.service.consumeTypesJSON = serviceNode["ConsumeTypesJSON"].asString();
	if(!serviceNode["CreateTime"].isNull())
		data_.service.createTime = std::stol(serviceNode["CreateTime"].asString());
	if(!serviceNode["CsbId"].isNull())
		data_.service.csbId = std::stol(serviceNode["CsbId"].asString());
	if(!serviceNode["ErrDefJSON"].isNull())
		data_.service.errDefJSON = serviceNode["ErrDefJSON"].asString();
	if(!serviceNode["Id"].isNull())
		data_.service.id = std::stol(serviceNode["Id"].asString());
	if(!serviceNode["InterfaceName"].isNull())
		data_.service.interfaceName = serviceNode["InterfaceName"].asString();
	if(!serviceNode["IpBlackStr"].isNull())
		data_.service.ipBlackStr = serviceNode["IpBlackStr"].asString();
	if(!serviceNode["IpWhiteStr"].isNull())
		data_.service.ipWhiteStr = serviceNode["IpWhiteStr"].asString();
	if(!serviceNode["ModelVersion"].isNull())
		data_.service.modelVersion = serviceNode["ModelVersion"].asString();
	if(!serviceNode["ModifiedTime"].isNull())
		data_.service.modifiedTime = std::stol(serviceNode["ModifiedTime"].asString());
	if(!serviceNode["OldVersion"].isNull())
		data_.service.oldVersion = serviceNode["OldVersion"].asString();
	if(!serviceNode["OpenRestfulPath"].isNull())
		data_.service.openRestfulPath = serviceNode["OpenRestfulPath"].asString();
	if(!serviceNode["OttFlag"].isNull())
		data_.service.ottFlag = serviceNode["OttFlag"].asString() == "true";
	if(!serviceNode["OwnerId"].isNull())
		data_.service.ownerId = serviceNode["OwnerId"].asString();
	if(!serviceNode["PolicyHandler"].isNull())
		data_.service.policyHandler = serviceNode["PolicyHandler"].asString();
	if(!serviceNode["PrincipalName"].isNull())
		data_.service.principalName = serviceNode["PrincipalName"].asString();
	if(!serviceNode["ProjectId"].isNull())
		data_.service.projectId = std::stol(serviceNode["ProjectId"].asString());
	if(!serviceNode["ProjectName"].isNull())
		data_.service.projectName = serviceNode["ProjectName"].asString();
	if(!serviceNode["ProvideType"].isNull())
		data_.service.provideType = serviceNode["ProvideType"].asString();
	if(!serviceNode["RouteConfJson"].isNull())
		data_.service.routeConfJson = serviceNode["RouteConfJson"].asString();
	if(!serviceNode["SSL"].isNull())
		data_.service.sSL = serviceNode["SSL"].asString() == "true";
	if(!serviceNode["Scope"].isNull())
		data_.service.scope = serviceNode["Scope"].asString();
	if(!serviceNode["ServiceName"].isNull())
		data_.service.serviceName = serviceNode["ServiceName"].asString();
	if(!serviceNode["ServiceOpenRestfulPath"].isNull())
		data_.service.serviceOpenRestfulPath = serviceNode["ServiceOpenRestfulPath"].asString();
	if(!serviceNode["ServiceProviderType"].isNull())
		data_.service.serviceProviderType = serviceNode["ServiceProviderType"].asString();
	if(!serviceNode["ServiceVersion"].isNull())
		data_.service.serviceVersion = serviceNode["ServiceVersion"].asString();
	if(!serviceNode["SkipAuth"].isNull())
		data_.service.skipAuth = serviceNode["SkipAuth"].asString() == "true";
	if(!serviceNode["StatisticName"].isNull())
		data_.service.statisticName = serviceNode["StatisticName"].asString();
	if(!serviceNode["Status"].isNull())
		data_.service.status = std::stoi(serviceNode["Status"].asString());
	if(!serviceNode["UserId"].isNull())
		data_.service.userId = serviceNode["UserId"].asString();
	if(!serviceNode["ValidConsumeTypes"].isNull())
		data_.service.validConsumeTypes = serviceNode["ValidConsumeTypes"].asString() == "true";
	if(!serviceNode["ValidProvideType"].isNull())
		data_.service.validProvideType = serviceNode["ValidProvideType"].asString() == "true";
	if(!serviceNode["Qps"].isNull())
		data_.service.qps = std::stoi(serviceNode["Qps"].asString());
	auto allServiceVersionsListNode = serviceNode["ServiceVersionsList"]["ServiceVersion"];
	for (auto serviceNodeServiceVersionsListServiceVersion : allServiceVersionsListNode)
	{
		Data::Service::ServiceVersion serviceVersionObject;
		if(!serviceNodeServiceVersionsListServiceVersion["Active"].isNull())
			serviceVersionObject.active = serviceNodeServiceVersionsListServiceVersion["Active"].asString() == "true";
		if(!serviceNodeServiceVersionsListServiceVersion["AllVisiable"].isNull())
			serviceVersionObject.allVisiable = serviceNodeServiceVersionsListServiceVersion["AllVisiable"].asString() == "true";
		if(!serviceNodeServiceVersionsListServiceVersion["Id"].isNull())
			serviceVersionObject.id = std::stol(serviceNodeServiceVersionsListServiceVersion["Id"].asString());
		if(!serviceNodeServiceVersionsListServiceVersion["OldVersion"].isNull())
			serviceVersionObject.oldVersion = serviceNodeServiceVersionsListServiceVersion["OldVersion"].asString();
		if(!serviceNodeServiceVersionsListServiceVersion["OttFlag"].isNull())
			serviceVersionObject.ottFlag = serviceNodeServiceVersionsListServiceVersion["OttFlag"].asString() == "true";
		if(!serviceNodeServiceVersionsListServiceVersion["SSL"].isNull())
			serviceVersionObject.sSL = serviceNodeServiceVersionsListServiceVersion["SSL"].asString() == "true";
		if(!serviceNodeServiceVersionsListServiceVersion["Scope"].isNull())
			serviceVersionObject.scope = serviceNodeServiceVersionsListServiceVersion["Scope"].asString();
		if(!serviceNodeServiceVersionsListServiceVersion["ServiceVersion"].isNull())
			serviceVersionObject.serviceVersion = serviceNodeServiceVersionsListServiceVersion["ServiceVersion"].asString();
		if(!serviceNodeServiceVersionsListServiceVersion["SkipAuth"].isNull())
			serviceVersionObject.skipAuth = serviceNodeServiceVersionsListServiceVersion["SkipAuth"].asString() == "true";
		if(!serviceNodeServiceVersionsListServiceVersion["StatisticName"].isNull())
			serviceVersionObject.statisticName = serviceNodeServiceVersionsListServiceVersion["StatisticName"].asString();
		if(!serviceNodeServiceVersionsListServiceVersion["Status"].isNull())
			serviceVersionObject.status = std::stoi(serviceNodeServiceVersionsListServiceVersion["Status"].asString());
		if(!serviceNodeServiceVersionsListServiceVersion["ValidConsumeTypes"].isNull())
			serviceVersionObject.validConsumeTypes = serviceNodeServiceVersionsListServiceVersion["ValidConsumeTypes"].asString() == "true";
		if(!serviceNodeServiceVersionsListServiceVersion["ValidProvideType"].isNull())
			serviceVersionObject.validProvideType = serviceNodeServiceVersionsListServiceVersion["ValidProvideType"].asString() == "true";
		data_.service.serviceVersionsList.push_back(serviceVersionObject);
	}
	auto allVisiableGroupListNode = serviceNode["VisiableGroupList"]["VisiableGroup"];
	for (auto serviceNodeVisiableGroupListVisiableGroup : allVisiableGroupListNode)
	{
		Data::Service::VisiableGroup visiableGroupObject;
		if(!serviceNodeVisiableGroupListVisiableGroup["Id"].isNull())
			visiableGroupObject.id = std::stol(serviceNodeVisiableGroupListVisiableGroup["Id"].asString());
		if(!serviceNodeVisiableGroupListVisiableGroup["GroupId"].isNull())
			visiableGroupObject.groupId = std::stol(serviceNodeVisiableGroupListVisiableGroup["GroupId"].asString());
		if(!serviceNodeVisiableGroupListVisiableGroup["UserId"].isNull())
			visiableGroupObject.userId = serviceNodeVisiableGroupListVisiableGroup["UserId"].asString();
		if(!serviceNodeVisiableGroupListVisiableGroup["ServiceId"].isNull())
			visiableGroupObject.serviceId = std::stol(serviceNodeVisiableGroupListVisiableGroup["ServiceId"].asString());
		if(!serviceNodeVisiableGroupListVisiableGroup["CreateTime"].isNull())
			visiableGroupObject.createTime = std::stol(serviceNodeVisiableGroupListVisiableGroup["CreateTime"].asString());
		if(!serviceNodeVisiableGroupListVisiableGroup["ModifiedTime"].isNull())
			visiableGroupObject.modifiedTime = std::stol(serviceNodeVisiableGroupListVisiableGroup["ModifiedTime"].asString());
		if(!serviceNodeVisiableGroupListVisiableGroup["Status"].isNull())
			visiableGroupObject.status = std::stoi(serviceNodeVisiableGroupListVisiableGroup["Status"].asString());
		data_.service.visiableGroupList.push_back(visiableGroupObject);
	}
		auto allCasServTargets = serviceNode["CasServTargets"]["CasServTarget"];
		for (auto value : allCasServTargets)
			data_.service.casServTargets.push_back(value.asString());
		auto allConsumeTypes = serviceNode["ConsumeTypes"]["ConsumeType"];
		for (auto value : allConsumeTypes)
			data_.service.consumeTypes.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetServiceResult::getMessage()const
{
	return message_;
}

GetServiceResult::Data GetServiceResult::getData()const
{
	return data_;
}

int GetServiceResult::getCode()const
{
	return code_;
}

