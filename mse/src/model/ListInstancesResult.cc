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

#include <alibabacloud/mse/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["instance"];
	for (auto valueDatainstance : allDataNode)
	{
		Instance dataObject;
		if(!valueDatainstance["AppClusterId"].isNull())
			dataObject.appClusterId = valueDatainstance["AppClusterId"].asString();
		if(!valueDatainstance["AppVersion"].isNull())
			dataObject.appVersion = valueDatainstance["AppVersion"].asString();
		if(!valueDatainstance["DbPassword"].isNull())
			dataObject.dbPassword = valueDatainstance["DbPassword"].asString();
		if(!valueDatainstance["DbUrl"].isNull())
			dataObject.dbUrl = valueDatainstance["DbUrl"].asString();
		if(!valueDatainstance["DbUserName"].isNull())
			dataObject.dbUserName = valueDatainstance["DbUserName"].asString();
		if(!valueDatainstance["EndDate"].isNull())
			dataObject.endDate = std::stol(valueDatainstance["EndDate"].asString());
		if(!valueDatainstance["EnvironmentId"].isNull())
			dataObject.environmentId = std::stol(valueDatainstance["EnvironmentId"].asString());
		if(!valueDatainstance["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDatainstance["GmtCreate"].asString();
		if(!valueDatainstance["GmtModified"].isNull())
			dataObject.gmtModified = valueDatainstance["GmtModified"].asString();
		if(!valueDatainstance["Id"].isNull())
			dataObject.id = std::stol(valueDatainstance["Id"].asString());
		if(!valueDatainstance["ImageVersion"].isNull())
			dataObject.imageVersion = valueDatainstance["ImageVersion"].asString();
		if(!valueDatainstance["InstanceId"].isNull())
			dataObject.instanceId = valueDatainstance["InstanceId"].asString();
		if(!valueDatainstance["IsCreatedRedis"].isNull())
			dataObject.isCreatedRedis = valueDatainstance["IsCreatedRedis"].asString() == "true";
		if(!valueDatainstance["K8sResourceId"].isNull())
			dataObject.k8sResourceId = std::stol(valueDatainstance["K8sResourceId"].asString());
		if(!valueDatainstance["Name"].isNull())
			dataObject.name = valueDatainstance["Name"].asString();
		if(!valueDatainstance["NameServer"].isNull())
			dataObject.nameServer = valueDatainstance["NameServer"].asString();
		if(!valueDatainstance["OrderId"].isNull())
			dataObject.orderId = valueDatainstance["OrderId"].asString();
		if(!valueDatainstance["PodCidr"].isNull())
			dataObject.podCidr = valueDatainstance["PodCidr"].asString();
		if(!valueDatainstance["PrimaryUser"].isNull())
			dataObject.primaryUser = valueDatainstance["PrimaryUser"].asString();
		if(!valueDatainstance["Region"].isNull())
			dataObject.region = valueDatainstance["Region"].asString();
		if(!valueDatainstance["Replica"].isNull())
			dataObject.replica = std::stol(valueDatainstance["Replica"].asString());
		if(!valueDatainstance["SeataServerUniqueId"].isNull())
			dataObject.seataServerUniqueId = valueDatainstance["SeataServerUniqueId"].asString();
		if(!valueDatainstance["SecurityGroup"].isNull())
			dataObject.securityGroup = valueDatainstance["SecurityGroup"].asString();
		if(!valueDatainstance["Spec"].isNull())
			dataObject.spec = valueDatainstance["Spec"].asString();
		if(!valueDatainstance["StartDate"].isNull())
			dataObject.startDate = valueDatainstance["StartDate"].asString();
		if(!valueDatainstance["Status"].isNull())
			dataObject.status = std::stol(valueDatainstance["Status"].asString());
		if(!valueDatainstance["StatusDesc"].isNull())
			dataObject.statusDesc = valueDatainstance["StatusDesc"].asString();
		if(!valueDatainstance["StoreMode"].isNull())
			dataObject.storeMode = valueDatainstance["StoreMode"].asString();
		if(!valueDatainstance["Vpc"].isNull())
			dataObject.vpc = valueDatainstance["Vpc"].asString();
		if(!valueDatainstance["Vswitch"].isNull())
			dataObject.vswitch = valueDatainstance["Vswitch"].asString();
		if(!valueDatainstance["ZoneId"].isNull())
			dataObject.zoneId = valueDatainstance["ZoneId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListInstancesResult::getMessage()const
{
	return message_;
}

int ListInstancesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListInstancesResult::Instance> ListInstancesResult::getData()const
{
	return data_;
}

int ListInstancesResult::getCode()const
{
	return code_;
}

bool ListInstancesResult::getSuccess()const
{
	return success_;
}

