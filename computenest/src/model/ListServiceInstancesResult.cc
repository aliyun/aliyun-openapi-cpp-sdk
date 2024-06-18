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

#include <alibabacloud/computenest/model/ListServiceInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

ListServiceInstancesResult::ListServiceInstancesResult() :
	ServiceResult()
{}

ListServiceInstancesResult::ListServiceInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceInstancesResult::~ListServiceInstancesResult()
{}

void ListServiceInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceInstancesNode = value["ServiceInstances"]["ServiceInstance"];
	for (auto valueServiceInstancesServiceInstance : allServiceInstancesNode)
	{
		ServiceInstance serviceInstancesObject;
		if(!valueServiceInstancesServiceInstance["Name"].isNull())
			serviceInstancesObject.name = valueServiceInstancesServiceInstance["Name"].asString();
		if(!valueServiceInstancesServiceInstance["Status"].isNull())
			serviceInstancesObject.status = valueServiceInstancesServiceInstance["Status"].asString();
		if(!valueServiceInstancesServiceInstance["Outputs"].isNull())
			serviceInstancesObject.outputs = valueServiceInstancesServiceInstance["Outputs"].asString();
		if(!valueServiceInstancesServiceInstance["UpdateTime"].isNull())
			serviceInstancesObject.updateTime = valueServiceInstancesServiceInstance["UpdateTime"].asString();
		if(!valueServiceInstancesServiceInstance["Parameters"].isNull())
			serviceInstancesObject.parameters = valueServiceInstancesServiceInstance["Parameters"].asString();
		if(!valueServiceInstancesServiceInstance["ServiceInstanceId"].isNull())
			serviceInstancesObject.serviceInstanceId = valueServiceInstancesServiceInstance["ServiceInstanceId"].asString();
		if(!valueServiceInstancesServiceInstance["CreateTime"].isNull())
			serviceInstancesObject.createTime = valueServiceInstancesServiceInstance["CreateTime"].asString();
		if(!valueServiceInstancesServiceInstance["StatusDetail"].isNull())
			serviceInstancesObject.statusDetail = valueServiceInstancesServiceInstance["StatusDetail"].asString();
		if(!valueServiceInstancesServiceInstance["Progress"].isNull())
			serviceInstancesObject.progress = std::stol(valueServiceInstancesServiceInstance["Progress"].asString());
		if(!valueServiceInstancesServiceInstance["Resources"].isNull())
			serviceInstancesObject.resources = valueServiceInstancesServiceInstance["Resources"].asString();
		if(!valueServiceInstancesServiceInstance["TemplateName"].isNull())
			serviceInstancesObject.templateName = valueServiceInstancesServiceInstance["TemplateName"].asString();
		if(!valueServiceInstancesServiceInstance["OperatedServiceInstanceId"].isNull())
			serviceInstancesObject.operatedServiceInstanceId = valueServiceInstancesServiceInstance["OperatedServiceInstanceId"].asString();
		if(!valueServiceInstancesServiceInstance["OperationStartTime"].isNull())
			serviceInstancesObject.operationStartTime = valueServiceInstancesServiceInstance["OperationStartTime"].asString();
		if(!valueServiceInstancesServiceInstance["OperationEndTime"].isNull())
			serviceInstancesObject.operationEndTime = valueServiceInstancesServiceInstance["OperationEndTime"].asString();
		if(!valueServiceInstancesServiceInstance["EnableInstanceOps"].isNull())
			serviceInstancesObject.enableInstanceOps = valueServiceInstancesServiceInstance["EnableInstanceOps"].asString() == "true";
		if(!valueServiceInstancesServiceInstance["Source"].isNull())
			serviceInstancesObject.source = valueServiceInstancesServiceInstance["Source"].asString();
		if(!valueServiceInstancesServiceInstance["EndTime"].isNull())
			serviceInstancesObject.endTime = valueServiceInstancesServiceInstance["EndTime"].asString();
		if(!valueServiceInstancesServiceInstance["ServiceType"].isNull())
			serviceInstancesObject.serviceType = valueServiceInstancesServiceInstance["ServiceType"].asString();
		if(!valueServiceInstancesServiceInstance["PayType"].isNull())
			serviceInstancesObject.payType = valueServiceInstancesServiceInstance["PayType"].asString();
		if(!valueServiceInstancesServiceInstance["MarketInstanceId"].isNull())
			serviceInstancesObject.marketInstanceId = valueServiceInstancesServiceInstance["MarketInstanceId"].asString();
		if(!valueServiceInstancesServiceInstance["ResourceGroupId"].isNull())
			serviceInstancesObject.resourceGroupId = valueServiceInstancesServiceInstance["ResourceGroupId"].asString();
		if(!valueServiceInstancesServiceInstance["BizStatus"].isNull())
			serviceInstancesObject.bizStatus = valueServiceInstancesServiceInstance["BizStatus"].asString();
		if(!valueServiceInstancesServiceInstance["OrderId"].isNull())
			serviceInstancesObject.orderId = valueServiceInstancesServiceInstance["OrderId"].asString();
		auto allTagsNode = valueServiceInstancesServiceInstance["Tags"]["Tag"];
		for (auto valueServiceInstancesServiceInstanceTagsTag : allTagsNode)
		{
			ServiceInstance::Tag tagsObject;
			if(!valueServiceInstancesServiceInstanceTagsTag["Key"].isNull())
				tagsObject.key = valueServiceInstancesServiceInstanceTagsTag["Key"].asString();
			if(!valueServiceInstancesServiceInstanceTagsTag["Value"].isNull())
				tagsObject.value = valueServiceInstancesServiceInstanceTagsTag["Value"].asString();
			serviceInstancesObject.tags.push_back(tagsObject);
		}
		auto serviceNode = value["Service"];
		if(!serviceNode["Status"].isNull())
			serviceInstancesObject.service.status = serviceNode["Status"].asString();
		if(!serviceNode["PublishTime"].isNull())
			serviceInstancesObject.service.publishTime = serviceNode["PublishTime"].asString();
		if(!serviceNode["Version"].isNull())
			serviceInstancesObject.service.version = serviceNode["Version"].asString();
		if(!serviceNode["DeployType"].isNull())
			serviceInstancesObject.service.deployType = serviceNode["DeployType"].asString();
		if(!serviceNode["ServiceId"].isNull())
			serviceInstancesObject.service.serviceId = serviceNode["ServiceId"].asString();
		if(!serviceNode["SupplierUrl"].isNull())
			serviceInstancesObject.service.supplierUrl = serviceNode["SupplierUrl"].asString();
		if(!serviceNode["ServiceType"].isNull())
			serviceInstancesObject.service.serviceType = serviceNode["ServiceType"].asString();
		if(!serviceNode["SupplierName"].isNull())
			serviceInstancesObject.service.supplierName = serviceNode["SupplierName"].asString();
		if(!serviceNode["VersionName"].isNull())
			serviceInstancesObject.service.versionName = serviceNode["VersionName"].asString();
		auto allServiceInfosNode = serviceNode["ServiceInfos"]["ServiceInfo"];
		for (auto serviceNodeServiceInfosServiceInfo : allServiceInfosNode)
		{
			ServiceInstance::Service::ServiceInfo serviceInfoObject;
			if(!serviceNodeServiceInfosServiceInfo["Locale"].isNull())
				serviceInfoObject.locale = serviceNodeServiceInfosServiceInfo["Locale"].asString();
			if(!serviceNodeServiceInfosServiceInfo["Image"].isNull())
				serviceInfoObject.image = serviceNodeServiceInfosServiceInfo["Image"].asString();
			if(!serviceNodeServiceInfosServiceInfo["Name"].isNull())
				serviceInfoObject.name = serviceNodeServiceInfosServiceInfo["Name"].asString();
			if(!serviceNodeServiceInfosServiceInfo["ShortDescription"].isNull())
				serviceInfoObject.shortDescription = serviceNodeServiceInfosServiceInfo["ShortDescription"].asString();
			serviceInstancesObject.service.serviceInfos.push_back(serviceInfoObject);
		}
		auto commodityNode = serviceNode["Commodity"];
		if(!commodityNode["SaasBoostMetadata"].isNull())
			serviceInstancesObject.service.commodity.saasBoostMetadata = commodityNode["SaasBoostMetadata"].asString();
		if(!commodityNode["Type"].isNull())
			serviceInstancesObject.service.commodity.type = commodityNode["Type"].asString();
		serviceInstances_.push_back(serviceInstancesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

long ListServiceInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListServiceInstancesResult::ServiceInstance> ListServiceInstancesResult::getServiceInstances()const
{
	return serviceInstances_;
}

std::string ListServiceInstancesResult::getNextToken()const
{
	return nextToken_;
}

int ListServiceInstancesResult::getMaxResults()const
{
	return maxResults_;
}

