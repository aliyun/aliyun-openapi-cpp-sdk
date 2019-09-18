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
	auto allServiceVersionsList = value["ServiceVersionsList"]["ServiceVersion"];
	for (auto value : allServiceVersionsList)
	{
		Data::Service::ServiceVersion serviceVersionObject;
		if(!value["Active"].isNull())
			serviceVersionObject.active = value["Active"].asString() == "true";
		if(!value["AllVisiable"].isNull())
			serviceVersionObject.allVisiable = value["AllVisiable"].asString() == "true";
		if(!value["Id"].isNull())
			serviceVersionObject.id = std::stol(value["Id"].asString());
		if(!value["OldVersion"].isNull())
			serviceVersionObject.oldVersion = value["OldVersion"].asString();
		if(!value["OttFlag"].isNull())
			serviceVersionObject.ottFlag = value["OttFlag"].asString() == "true";
		if(!value["SSL"].isNull())
			serviceVersionObject.sSL = value["SSL"].asString() == "true";
		if(!value["Scope"].isNull())
			serviceVersionObject.scope = value["Scope"].asString();
		if(!value["ServiceVersion"].isNull())
			serviceVersionObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["SkipAuth"].isNull())
			serviceVersionObject.skipAuth = value["SkipAuth"].asString() == "true";
		if(!value["StatisticName"].isNull())
			serviceVersionObject.statisticName = value["StatisticName"].asString();
		if(!value["Status"].isNull())
			serviceVersionObject.status = std::stoi(value["Status"].asString());
		if(!value["ValidConsumeTypes"].isNull())
			serviceVersionObject.validConsumeTypes = value["ValidConsumeTypes"].asString() == "true";
		if(!value["ValidProvideType"].isNull())
			serviceVersionObject.validProvideType = value["ValidProvideType"].asString() == "true";
		data_.service.serviceVersionsList.push_back(serviceVersionObject);
	}
	auto allVisiableGroupList = value["VisiableGroupList"]["VisiableGroup"];
	for (auto value : allVisiableGroupList)
	{
		Data::Service::VisiableGroup visiableGroupObject;
		if(!value["Id"].isNull())
			visiableGroupObject.id = std::stol(value["Id"].asString());
		if(!value["GroupId"].isNull())
			visiableGroupObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["UserId"].isNull())
			visiableGroupObject.userId = value["UserId"].asString();
		if(!value["ServiceId"].isNull())
			visiableGroupObject.serviceId = std::stol(value["ServiceId"].asString());
		if(!value["CreateTime"].isNull())
			visiableGroupObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["ModifiedTime"].isNull())
			visiableGroupObject.modifiedTime = std::stol(value["ModifiedTime"].asString());
		if(!value["Status"].isNull())
			visiableGroupObject.status = std::stoi(value["Status"].asString());
		data_.service.visiableGroupList.push_back(visiableGroupObject);
	}
	auto routeConfNode = serviceNode["RouteConf"];
	if(!routeConfNode["ServiceRouteStrategy"].isNull())
		data_.service.routeConf.serviceRouteStrategy = routeConfNode["ServiceRouteStrategy"].asString();
	auto importConfNode = routeConfNode["ImportConf"];
	if(!importConfNode["AccessEndpointJSON"].isNull())
		data_.service.routeConf.importConf.accessEndpointJSON = importConfNode["AccessEndpointJSON"].asString();
	if(!importConfNode["ProvideType"].isNull())
		data_.service.routeConf.importConf.provideType = importConfNode["ProvideType"].asString();
	auto allInputParameterMap = value["InputParameterMap"]["InputParameter"];
	for (auto value : allInputParameterMap)
	{
		Data::Service::RouteConf::ImportConf::InputParameter inputParameterObject;
		if(!value["CatType"].isNull())
			inputParameterObject.catType = std::stoi(value["CatType"].asString());
		if(!value["Depth"].isNull())
			inputParameterObject.depth = std::stoi(value["Depth"].asString());
		if(!value["ExtType"].isNull())
			inputParameterObject.extType = std::stoi(value["ExtType"].asString());
		if(!value["MapStyle"].isNull())
			inputParameterObject.mapStyle = std::stoi(value["MapStyle"].asString());
		if(!value["Optional"].isNull())
			inputParameterObject.optional = value["Optional"].asString() == "true";
		if(!value["OriginalName"].isNull())
			inputParameterObject.originalName = value["OriginalName"].asString();
		if(!value["ParamType"].isNull())
			inputParameterObject.paramType = value["ParamType"].asString();
		if(!value["PassMethod"].isNull())
			inputParameterObject.passMethod = value["PassMethod"].asString();
		if(!value["TargetName"].isNull())
			inputParameterObject.targetName = value["TargetName"].asString();
		data_.service.routeConf.importConf.inputParameterMap.push_back(inputParameterObject);
	}
	auto allOutputParameterMap = value["OutputParameterMap"]["OutputParameter"];
	for (auto value : allOutputParameterMap)
	{
		Data::Service::RouteConf::ImportConf::OutputParameter outputParameterObject;
		if(!value["CatType"].isNull())
			outputParameterObject.catType = std::stoi(value["CatType"].asString());
		if(!value["Depth"].isNull())
			outputParameterObject.depth = std::stoi(value["Depth"].asString());
		if(!value["ExtType"].isNull())
			outputParameterObject.extType = std::stoi(value["ExtType"].asString());
		if(!value["MapStyle"].isNull())
			outputParameterObject.mapStyle = std::stoi(value["MapStyle"].asString());
		if(!value["Optional"].isNull())
			outputParameterObject.optional = value["Optional"].asString() == "true";
		if(!value["OriginalName"].isNull())
			outputParameterObject.originalName = value["OriginalName"].asString();
		if(!value["ParamType"].isNull())
			outputParameterObject.paramType = value["ParamType"].asString();
		if(!value["PassMethod"].isNull())
			outputParameterObject.passMethod = value["PassMethod"].asString();
		if(!value["TargetName"].isNull())
			outputParameterObject.targetName = value["TargetName"].asString();
		data_.service.routeConf.importConf.outputParameterMap.push_back(outputParameterObject);
	}
	auto importConfsNode = routeConfNode["ImportConfs"];
	if(!importConfsNode["AccessEndpointJSON"].isNull())
		data_.service.routeConf.importConfs.accessEndpointJSON = importConfsNode["AccessEndpointJSON"].asString();
	if(!importConfsNode["ProvideType"].isNull())
		data_.service.routeConf.importConfs.provideType = importConfsNode["ProvideType"].asString();
	auto allInputParameterMap1 = value["InputParameterMap"]["InputParameter"];
	for (auto value : allInputParameterMap1)
	{
		Data::Service::RouteConf::ImportConfs::InputParameter3 inputParameter3Object;
		if(!value["CatType"].isNull())
			inputParameter3Object.catType = std::stoi(value["CatType"].asString());
		if(!value["Depth"].isNull())
			inputParameter3Object.depth = std::stoi(value["Depth"].asString());
		if(!value["ExtType"].isNull())
			inputParameter3Object.extType = std::stoi(value["ExtType"].asString());
		if(!value["MapStyle"].isNull())
			inputParameter3Object.mapStyle = std::stoi(value["MapStyle"].asString());
		if(!value["Optional"].isNull())
			inputParameter3Object.optional = value["Optional"].asString() == "true";
		if(!value["OriginalName"].isNull())
			inputParameter3Object.originalName = value["OriginalName"].asString();
		if(!value["ParamType"].isNull())
			inputParameter3Object.paramType = value["ParamType"].asString();
		if(!value["PassMethod"].isNull())
			inputParameter3Object.passMethod = value["PassMethod"].asString();
		if(!value["TargetName"].isNull())
			inputParameter3Object.targetName = value["TargetName"].asString();
		data_.service.routeConf.importConfs.inputParameterMap1.push_back(inputParameter3Object);
	}
	auto allOutputParameterMap2 = value["OutputParameterMap"]["OutputParameter"];
	for (auto value : allOutputParameterMap2)
	{
		Data::Service::RouteConf::ImportConfs::OutputParameter4 outputParameter4Object;
		if(!value["CatType"].isNull())
			outputParameter4Object.catType = std::stoi(value["CatType"].asString());
		if(!value["Depth"].isNull())
			outputParameter4Object.depth = std::stoi(value["Depth"].asString());
		if(!value["ExtType"].isNull())
			outputParameter4Object.extType = std::stoi(value["ExtType"].asString());
		if(!value["MapStyle"].isNull())
			outputParameter4Object.mapStyle = std::stoi(value["MapStyle"].asString());
		if(!value["Optional"].isNull())
			outputParameter4Object.optional = value["Optional"].asString() == "true";
		if(!value["OriginalName"].isNull())
			outputParameter4Object.originalName = value["OriginalName"].asString();
		if(!value["ParamType"].isNull())
			outputParameter4Object.paramType = value["ParamType"].asString();
		if(!value["PassMethod"].isNull())
			outputParameter4Object.passMethod = value["PassMethod"].asString();
		if(!value["TargetName"].isNull())
			outputParameter4Object.targetName = value["TargetName"].asString();
		data_.service.routeConf.importConfs.outputParameterMap2.push_back(outputParameter4Object);
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

