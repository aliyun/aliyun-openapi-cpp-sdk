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

#include <alibabacloud/emr/model/DescribeClusterServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterServiceResult::DescribeClusterServiceResult() :
	ServiceResult()
{}

DescribeClusterServiceResult::DescribeClusterServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterServiceResult::~DescribeClusterServiceResult()
{}

void DescribeClusterServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto serviceInfoNode = value["ServiceInfo"];
	if(!serviceInfoNode["ServiceName"].isNull())
		serviceInfo_.serviceName = serviceInfoNode["ServiceName"].asString();
	if(!serviceInfoNode["ServiceVersion"].isNull())
		serviceInfo_.serviceVersion = serviceInfoNode["ServiceVersion"].asString();
	if(!serviceInfoNode["ServiceStatus"].isNull())
		serviceInfo_.serviceStatus = serviceInfoNode["ServiceStatus"].asString();
	if(!serviceInfoNode["NeedRestartInfo"].isNull())
		serviceInfo_.needRestartInfo = serviceInfoNode["NeedRestartInfo"].asString();
	if(!serviceInfoNode["NeedRestartNum"].isNull())
		serviceInfo_.needRestartNum = std::stoi(serviceInfoNode["NeedRestartNum"].asString());
	auto allServiceActionListNode = serviceInfoNode["ServiceActionList"]["ServiceAction"];
	for (auto serviceInfoNodeServiceActionListServiceAction : allServiceActionListNode)
	{
		ServiceInfo::ServiceAction serviceActionObject;
		if(!serviceInfoNodeServiceActionListServiceAction["ServiceName"].isNull())
			serviceActionObject.serviceName = serviceInfoNodeServiceActionListServiceAction["ServiceName"].asString();
		if(!serviceInfoNodeServiceActionListServiceAction["ComponentName"].isNull())
			serviceActionObject.componentName = serviceInfoNodeServiceActionListServiceAction["ComponentName"].asString();
		if(!serviceInfoNodeServiceActionListServiceAction["ActionName"].isNull())
			serviceActionObject.actionName = serviceInfoNodeServiceActionListServiceAction["ActionName"].asString();
		if(!serviceInfoNodeServiceActionListServiceAction["Command"].isNull())
			serviceActionObject.command = serviceInfoNodeServiceActionListServiceAction["Command"].asString();
		if(!serviceInfoNodeServiceActionListServiceAction["DisplayName"].isNull())
			serviceActionObject.displayName = serviceInfoNodeServiceActionListServiceAction["DisplayName"].asString();
		serviceInfo_.serviceActionList.push_back(serviceActionObject);
	}
	auto allClusterServiceSummaryListNode = serviceInfoNode["ClusterServiceSummaryList"]["ClusterServiceSummary"];
	for (auto serviceInfoNodeClusterServiceSummaryListClusterServiceSummary : allClusterServiceSummaryListNode)
	{
		ServiceInfo::ClusterServiceSummary clusterServiceSummaryObject;
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Key"].isNull())
			clusterServiceSummaryObject.key = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Key"].asString();
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["DisplayName"].isNull())
			clusterServiceSummaryObject.displayName = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["DisplayName"].asString();
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Value"].isNull())
			clusterServiceSummaryObject.value = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Value"].asString();
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["DesiredStoppedValue"].isNull())
			clusterServiceSummaryObject.desiredStoppedValue = std::stoi(serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["DesiredStoppedValue"].asString());
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Status"].isNull())
			clusterServiceSummaryObject.status = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Status"].asString();
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Type"].isNull())
			clusterServiceSummaryObject.type = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Type"].asString();
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Category"].isNull())
			clusterServiceSummaryObject.category = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["Category"].asString();
		if(!serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["AlertInfo"].isNull())
			clusterServiceSummaryObject.alertInfo = serviceInfoNodeClusterServiceSummaryListClusterServiceSummary["AlertInfo"].asString();
		serviceInfo_.clusterServiceSummaryList.push_back(clusterServiceSummaryObject);
	}
		auto allNeedRestartHostIdList = serviceInfoNode["NeedRestartHostIdList"]["Service"];
		for (auto value : allNeedRestartHostIdList)
			serviceInfo_.needRestartHostIdList.push_back(value.asString());
		auto allNeedRestartComponentNameList = serviceInfoNode["NeedRestartComponentNameList"]["Service"];
		for (auto value : allNeedRestartComponentNameList)
			serviceInfo_.needRestartComponentNameList.push_back(value.asString());

}

DescribeClusterServiceResult::ServiceInfo DescribeClusterServiceResult::getServiceInfo()const
{
	return serviceInfo_;
}

