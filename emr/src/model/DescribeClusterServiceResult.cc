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
	auto allServiceActionList = value["ServiceActionList"]["ServiceAction"];
	for (auto value : allServiceActionList)
	{
		ServiceInfo::ServiceAction serviceActionObject;
		if(!value["ServiceName"].isNull())
			serviceActionObject.serviceName = value["ServiceName"].asString();
		if(!value["ComponentName"].isNull())
			serviceActionObject.componentName = value["ComponentName"].asString();
		if(!value["ActionName"].isNull())
			serviceActionObject.actionName = value["ActionName"].asString();
		if(!value["Command"].isNull())
			serviceActionObject.command = value["Command"].asString();
		if(!value["DisplayName"].isNull())
			serviceActionObject.displayName = value["DisplayName"].asString();
		serviceInfo_.serviceActionList.push_back(serviceActionObject);
	}
	auto allClusterServiceSummaryList = value["ClusterServiceSummaryList"]["ClusterServiceSummary"];
	for (auto value : allClusterServiceSummaryList)
	{
		ServiceInfo::ClusterServiceSummary clusterServiceSummaryObject;
		if(!value["Key"].isNull())
			clusterServiceSummaryObject.key = value["Key"].asString();
		if(!value["DisplayName"].isNull())
			clusterServiceSummaryObject.displayName = value["DisplayName"].asString();
		if(!value["Value"].isNull())
			clusterServiceSummaryObject.value = value["Value"].asString();
		if(!value["DesiredStoppedValue"].isNull())
			clusterServiceSummaryObject.desiredStoppedValue = std::stoi(value["DesiredStoppedValue"].asString());
		if(!value["Status"].isNull())
			clusterServiceSummaryObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			clusterServiceSummaryObject.type = value["Type"].asString();
		if(!value["Category"].isNull())
			clusterServiceSummaryObject.category = value["Category"].asString();
		if(!value["AlertInfo"].isNull())
			clusterServiceSummaryObject.alertInfo = value["AlertInfo"].asString();
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

