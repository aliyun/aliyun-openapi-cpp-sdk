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

#include <alibabacloud/sas/model/GetAssetsPropertyDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetAssetsPropertyDetailResult::GetAssetsPropertyDetailResult() :
	ServiceResult()
{}

GetAssetsPropertyDetailResult::GetAssetsPropertyDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAssetsPropertyDetailResult::~GetAssetsPropertyDetailResult()
{}

void GetAssetsPropertyDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertysNode = value["Propertys"]["Property"];
	for (auto valuePropertysProperty : allPropertysNode)
	{
		Property propertysObject;
		if(!valuePropertysProperty["ModuleName"].isNull())
			propertysObject.moduleName = valuePropertysProperty["ModuleName"].asString();
		if(!valuePropertysProperty["Size"].isNull())
			propertysObject.size = std::stoi(valuePropertysProperty["Size"].asString());
		if(!valuePropertysProperty["Filepath"].isNull())
			propertysObject.filepath = valuePropertysProperty["Filepath"].asString();
		if(!valuePropertysProperty["UsedByCount"].isNull())
			propertysObject.usedByCount = std::stoi(valuePropertysProperty["UsedByCount"].asString());
		if(!valuePropertysProperty["Path"].isNull())
			propertysObject.path = valuePropertysProperty["Path"].asString();
		if(!valuePropertysProperty["ServerType"].isNull())
			propertysObject.serverType = valuePropertysProperty["ServerType"].asString();
		if(!valuePropertysProperty["Port"].isNull())
			propertysObject.port = valuePropertysProperty["Port"].asString();
		if(!valuePropertysProperty["Pid"].isNull())
			propertysObject.pid = valuePropertysProperty["Pid"].asString();
		if(!valuePropertysProperty["ListenIp"].isNull())
			propertysObject.listenIp = valuePropertysProperty["ListenIp"].asString();
		if(!valuePropertysProperty["ListenStatus"].isNull())
			propertysObject.listenStatus = valuePropertysProperty["ListenStatus"].asString();
		if(!valuePropertysProperty["ListenProtocol"].isNull())
			propertysObject.listenProtocol = valuePropertysProperty["ListenProtocol"].asString();
		if(!valuePropertysProperty["ProcessStarted"].isNull())
			propertysObject.processStarted = std::stol(valuePropertysProperty["ProcessStarted"].asString());
		if(!valuePropertysProperty["ProcessStartedTime"].isNull())
			propertysObject.processStartedTime = valuePropertysProperty["ProcessStartedTime"].asString();
		if(!valuePropertysProperty["WebPath"].isNull())
			propertysObject.webPath = valuePropertysProperty["WebPath"].asString();
		if(!valuePropertysProperty["Domain"].isNull())
			propertysObject.domain = valuePropertysProperty["Domain"].asString();
		if(!valuePropertysProperty["User"].isNull())
			propertysObject.user = valuePropertysProperty["User"].asString();
		if(!valuePropertysProperty["PathMode"].isNull())
			propertysObject.pathMode = valuePropertysProperty["PathMode"].asString();
		if(!valuePropertysProperty["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysProperty["InstanceId"].asString();
		if(!valuePropertysProperty["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysProperty["IntranetIp"].asString();
		if(!valuePropertysProperty["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysProperty["InternetIp"].asString();
		if(!valuePropertysProperty["Ip"].isNull())
			propertysObject.ip = valuePropertysProperty["Ip"].asString();
		if(!valuePropertysProperty["Uuid"].isNull())
			propertysObject.uuid = valuePropertysProperty["Uuid"].asString();
		if(!valuePropertysProperty["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysProperty["InstanceName"].asString();
		if(!valuePropertysProperty["RegionId"].isNull())
			propertysObject.regionId = valuePropertysProperty["RegionId"].asString();
		if(!valuePropertysProperty["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysProperty["CreateTimestamp"].asString());
		if(!valuePropertysProperty["Id"].isNull())
			propertysObject.id = std::stol(valuePropertysProperty["Id"].asString());
		if(!valuePropertysProperty["ImageName"].isNull())
			propertysObject.imageName = valuePropertysProperty["ImageName"].asString();
		if(!valuePropertysProperty["ContainerName"].isNull())
			propertysObject.containerName = valuePropertysProperty["ContainerName"].asString();
		if(!valuePropertysProperty["RuntimeEnvVersion"].isNull())
			propertysObject.runtimeEnvVersion = valuePropertysProperty["RuntimeEnvVersion"].asString();
		propertys_.push_back(propertysObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<GetAssetsPropertyDetailResult::Property> GetAssetsPropertyDetailResult::getPropertys()const
{
	return propertys_;
}

GetAssetsPropertyDetailResult::PageInfo GetAssetsPropertyDetailResult::getPageInfo()const
{
	return pageInfo_;
}

