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

#include <alibabacloud/eas/model/ListResourceServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListResourceServicesResult::ListResourceServicesResult() :
	ServiceResult()
{}

ListResourceServicesResult::ListResourceServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceServicesResult::~ListResourceServicesResult()
{}

void ListResourceServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServicesNode = value["Services"]["ServicesItem"];
	for (auto valueServicesServicesItem : allServicesNode)
	{
		ServicesItem servicesObject;
		if(!valueServicesServicesItem["RequestId"].isNull())
			servicesObject.requestId = valueServicesServicesItem["RequestId"].asString();
		if(!valueServicesServicesItem["Region"].isNull())
			servicesObject.region = valueServicesServicesItem["Region"].asString();
		if(!valueServicesServicesItem["CallerUid"].isNull())
			servicesObject.callerUid = valueServicesServicesItem["CallerUid"].asString();
		if(!valueServicesServicesItem["ParentUid"].isNull())
			servicesObject.parentUid = valueServicesServicesItem["ParentUid"].asString();
		if(!valueServicesServicesItem["CurrentVersion"].isNull())
			servicesObject.currentVersion = std::stoi(valueServicesServicesItem["CurrentVersion"].asString());
		if(!valueServicesServicesItem["Cpu"].isNull())
			servicesObject.cpu = std::stoi(valueServicesServicesItem["Cpu"].asString());
		if(!valueServicesServicesItem["Gpu"].isNull())
			servicesObject.gpu = std::stoi(valueServicesServicesItem["Gpu"].asString());
		if(!valueServicesServicesItem["Image"].isNull())
			servicesObject.image = valueServicesServicesItem["Image"].asString();
		if(!valueServicesServicesItem["PendingInstance"].isNull())
			servicesObject.pendingInstance = std::stoi(valueServicesServicesItem["PendingInstance"].asString());
		if(!valueServicesServicesItem["RunningInstance"].isNull())
			servicesObject.runningInstance = std::stoi(valueServicesServicesItem["RunningInstance"].asString());
		if(!valueServicesServicesItem["TotalInstance"].isNull())
			servicesObject.totalInstance = std::stoi(valueServicesServicesItem["TotalInstance"].asString());
		if(!valueServicesServicesItem["InternetEndpoint"].isNull())
			servicesObject.internetEndpoint = valueServicesServicesItem["InternetEndpoint"].asString();
		if(!valueServicesServicesItem["IntranetEndpoint"].isNull())
			servicesObject.intranetEndpoint = valueServicesServicesItem["IntranetEndpoint"].asString();
		if(!valueServicesServicesItem["LatestVersion"].isNull())
			servicesObject.latestVersion = std::stoi(valueServicesServicesItem["LatestVersion"].asString());
		if(!valueServicesServicesItem["Memory"].isNull())
			servicesObject.memory = std::stoi(valueServicesServicesItem["Memory"].asString());
		if(!valueServicesServicesItem["Message"].isNull())
			servicesObject.message = valueServicesServicesItem["Message"].asString();
		if(!valueServicesServicesItem["Namespace"].isNull())
			servicesObject._namespace = valueServicesServicesItem["Namespace"].asString();
		if(!valueServicesServicesItem["Reason"].isNull())
			servicesObject.reason = valueServicesServicesItem["Reason"].asString();
		if(!valueServicesServicesItem["Resource"].isNull())
			servicesObject.resource = valueServicesServicesItem["Resource"].asString();
		if(!valueServicesServicesItem["ResourceAlias"].isNull())
			servicesObject.resourceAlias = valueServicesServicesItem["ResourceAlias"].asString();
		if(!valueServicesServicesItem["ServiceConfig"].isNull())
			servicesObject.serviceConfig = valueServicesServicesItem["ServiceConfig"].asString();
		if(!valueServicesServicesItem["ServiceName"].isNull())
			servicesObject.serviceName = valueServicesServicesItem["ServiceName"].asString();
		if(!valueServicesServicesItem["ServiceGroup"].isNull())
			servicesObject.serviceGroup = valueServicesServicesItem["ServiceGroup"].asString();
		if(!valueServicesServicesItem["Status"].isNull())
			servicesObject.status = valueServicesServicesItem["Status"].asString();
		if(!valueServicesServicesItem["CreateTime"].isNull())
			servicesObject.createTime = valueServicesServicesItem["CreateTime"].asString();
		if(!valueServicesServicesItem["UpdateTime"].isNull())
			servicesObject.updateTime = valueServicesServicesItem["UpdateTime"].asString();
		if(!valueServicesServicesItem["Weight"].isNull())
			servicesObject.weight = std::stoi(valueServicesServicesItem["Weight"].asString());
		if(!valueServicesServicesItem["ServiceId"].isNull())
			servicesObject.serviceId = valueServicesServicesItem["ServiceId"].asString();
		if(!valueServicesServicesItem["ServiceUid"].isNull())
			servicesObject.serviceUid = valueServicesServicesItem["ServiceUid"].asString();
		if(!valueServicesServicesItem["AccessToken"].isNull())
			servicesObject.accessToken = valueServicesServicesItem["AccessToken"].asString();
		if(!valueServicesServicesItem["Source"].isNull())
			servicesObject.source = valueServicesServicesItem["Source"].asString();
		if(!valueServicesServicesItem["ExtraData"].isNull())
			servicesObject.extraData = valueServicesServicesItem["ExtraData"].asString();
		if(!valueServicesServicesItem["Role"].isNull())
			servicesObject.role = valueServicesServicesItem["Role"].asString();
		if(!valueServicesServicesItem["RoleAttrs"].isNull())
			servicesObject.roleAttrs = valueServicesServicesItem["RoleAttrs"].asString();
		if(!valueServicesServicesItem["SafetyLock"].isNull())
			servicesObject.safetyLock = valueServicesServicesItem["SafetyLock"].asString();
		auto allLabelsNode = valueServicesServicesItem["Labels"]["LabelsItem"];
		for (auto valueServicesServicesItemLabelsLabelsItem : allLabelsNode)
		{
			ServicesItem::LabelsItem labelsObject;
			if(!valueServicesServicesItemLabelsLabelsItem["LabelKey"].isNull())
				labelsObject.labelKey = valueServicesServicesItemLabelsLabelsItem["LabelKey"].asString();
			if(!valueServicesServicesItemLabelsLabelsItem["LabelValue"].isNull())
				labelsObject.labelValue = valueServicesServicesItemLabelsLabelsItem["LabelValue"].asString();
			servicesObject.labels.push_back(labelsObject);
		}
		services_.push_back(servicesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListResourceServicesResult::ServicesItem> ListResourceServicesResult::getServices()const
{
	return services_;
}

int ListResourceServicesResult::getTotalCount()const
{
	return totalCount_;
}

int ListResourceServicesResult::getPageSize()const
{
	return pageSize_;
}

int ListResourceServicesResult::getPageNumber()const
{
	return pageNumber_;
}

