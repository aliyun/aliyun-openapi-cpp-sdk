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

#include <alibabacloud/computenestsupplier/model/ListServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

ListServicesResult::ListServicesResult() :
	ServiceResult()
{}

ListServicesResult::ListServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServicesResult::~ListServicesResult()
{}

void ListServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServicesNode = value["Services"]["Service"];
	for (auto valueServicesService : allServicesNode)
	{
		Service servicesObject;
		if(!valueServicesService["Status"].isNull())
			servicesObject.status = valueServicesService["Status"].asString();
		if(!valueServicesService["DefaultVersion"].isNull())
			servicesObject.defaultVersion = valueServicesService["DefaultVersion"].asString() == "true";
		if(!valueServicesService["PublishTime"].isNull())
			servicesObject.publishTime = valueServicesService["PublishTime"].asString();
		if(!valueServicesService["Version"].isNull())
			servicesObject.version = valueServicesService["Version"].asString();
		if(!valueServicesService["DeployType"].isNull())
			servicesObject.deployType = valueServicesService["DeployType"].asString();
		if(!valueServicesService["ServiceId"].isNull())
			servicesObject.serviceId = valueServicesService["ServiceId"].asString();
		if(!valueServicesService["SupplierUrl"].isNull())
			servicesObject.supplierUrl = valueServicesService["SupplierUrl"].asString();
		if(!valueServicesService["ServiceType"].isNull())
			servicesObject.serviceType = valueServicesService["ServiceType"].asString();
		if(!valueServicesService["SupplierName"].isNull())
			servicesObject.supplierName = valueServicesService["SupplierName"].asString();
		if(!valueServicesService["CommodityCode"].isNull())
			servicesObject.commodityCode = valueServicesService["CommodityCode"].asString();
		if(!valueServicesService["CreateTime"].isNull())
			servicesObject.createTime = valueServicesService["CreateTime"].asString();
		if(!valueServicesService["UpdateTime"].isNull())
			servicesObject.updateTime = valueServicesService["UpdateTime"].asString();
		if(!valueServicesService["ShareType"].isNull())
			servicesObject.shareType = valueServicesService["ShareType"].asString();
		if(!valueServicesService["ApprovalType"].isNull())
			servicesObject.approvalType = valueServicesService["ApprovalType"].asString();
		if(!valueServicesService["VersionName"].isNull())
			servicesObject.versionName = valueServicesService["VersionName"].asString();
		if(!valueServicesService["ArtifactId"].isNull())
			servicesObject.artifactId = valueServicesService["ArtifactId"].asString();
		if(!valueServicesService["ArtifactVersion"].isNull())
			servicesObject.artifactVersion = valueServicesService["ArtifactVersion"].asString();
		if(!valueServicesService["SourceImage"].isNull())
			servicesObject.sourceImage = valueServicesService["SourceImage"].asString();
		if(!valueServicesService["RelationType"].isNull())
			servicesObject.relationType = valueServicesService["RelationType"].asString();
		if(!valueServicesService["TrialType"].isNull())
			servicesObject.trialType = valueServicesService["TrialType"].asString();
		if(!valueServicesService["TenantType"].isNull())
			servicesObject.tenantType = valueServicesService["TenantType"].asString();
		if(!valueServicesService["ResourceGroupId"].isNull())
			servicesObject.resourceGroupId = valueServicesService["ResourceGroupId"].asString();
		auto allServiceInfosNode = valueServicesService["ServiceInfos"]["ServiceInfo"];
		for (auto valueServicesServiceServiceInfosServiceInfo : allServiceInfosNode)
		{
			Service::ServiceInfo serviceInfosObject;
			if(!valueServicesServiceServiceInfosServiceInfo["Locale"].isNull())
				serviceInfosObject.locale = valueServicesServiceServiceInfosServiceInfo["Locale"].asString();
			if(!valueServicesServiceServiceInfosServiceInfo["Image"].isNull())
				serviceInfosObject.image = valueServicesServiceServiceInfosServiceInfo["Image"].asString();
			if(!valueServicesServiceServiceInfosServiceInfo["Name"].isNull())
				serviceInfosObject.name = valueServicesServiceServiceInfosServiceInfo["Name"].asString();
			if(!valueServicesServiceServiceInfosServiceInfo["ShortDescription"].isNull())
				serviceInfosObject.shortDescription = valueServicesServiceServiceInfosServiceInfo["ShortDescription"].asString();
			servicesObject.serviceInfos.push_back(serviceInfosObject);
		}
		auto allTagsNode = valueServicesService["Tags"]["Tag"];
		for (auto valueServicesServiceTagsTag : allTagsNode)
		{
			Service::Tag tagsObject;
			if(!valueServicesServiceTagsTag["Key"].isNull())
				tagsObject.key = valueServicesServiceTagsTag["Key"].asString();
			if(!valueServicesServiceTagsTag["Value"].isNull())
				tagsObject.value = valueServicesServiceTagsTag["Value"].asString();
			servicesObject.tags.push_back(tagsObject);
		}
		services_.push_back(servicesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListServicesResult::Service> ListServicesResult::getServices()const
{
	return services_;
}

std::string ListServicesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServicesResult::getNextToken()const
{
	return nextToken_;
}

int ListServicesResult::getMaxResults()const
{
	return maxResults_;
}

