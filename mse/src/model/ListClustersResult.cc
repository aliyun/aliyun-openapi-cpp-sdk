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

#include <alibabacloud/mse/model/ListClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListClustersResult::ListClustersResult() :
	ServiceResult()
{}

ListClustersResult::ListClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClustersResult::~ListClustersResult()
{}

void ListClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ClusterForListModel"];
	for (auto valueDataClusterForListModel : allDataNode)
	{
		ClusterForListModel dataObject;
		if(!valueDataClusterForListModel["EndDate"].isNull())
			dataObject.endDate = valueDataClusterForListModel["EndDate"].asString();
		if(!valueDataClusterForListModel["IntranetDomain"].isNull())
			dataObject.intranetDomain = valueDataClusterForListModel["IntranetDomain"].asString();
		if(!valueDataClusterForListModel["InternetDomain"].isNull())
			dataObject.internetDomain = valueDataClusterForListModel["InternetDomain"].asString();
		if(!valueDataClusterForListModel["CreateTime"].isNull())
			dataObject.createTime = valueDataClusterForListModel["CreateTime"].asString();
		if(!valueDataClusterForListModel["ChargeType"].isNull())
			dataObject.chargeType = valueDataClusterForListModel["ChargeType"].asString();
		if(!valueDataClusterForListModel["IntranetAddress"].isNull())
			dataObject.intranetAddress = valueDataClusterForListModel["IntranetAddress"].asString();
		if(!valueDataClusterForListModel["InstanceId"].isNull())
			dataObject.instanceId = valueDataClusterForListModel["InstanceId"].asString();
		if(!valueDataClusterForListModel["InternetAddress"].isNull())
			dataObject.internetAddress = valueDataClusterForListModel["InternetAddress"].asString();
		if(!valueDataClusterForListModel["ClusterAliasName"].isNull())
			dataObject.clusterAliasName = valueDataClusterForListModel["ClusterAliasName"].asString();
		if(!valueDataClusterForListModel["ClusterType"].isNull())
			dataObject.clusterType = valueDataClusterForListModel["ClusterType"].asString();
		if(!valueDataClusterForListModel["InitStatus"].isNull())
			dataObject.initStatus = valueDataClusterForListModel["InitStatus"].asString();
		if(!valueDataClusterForListModel["AppVersion"].isNull())
			dataObject.appVersion = valueDataClusterForListModel["AppVersion"].asString();
		if(!valueDataClusterForListModel["ClusterId"].isNull())
			dataObject.clusterId = valueDataClusterForListModel["ClusterId"].asString();
		if(!valueDataClusterForListModel["CanUpdate"].isNull())
			dataObject.canUpdate = valueDataClusterForListModel["CanUpdate"].asString() == "true";
		if(!valueDataClusterForListModel["VersionCode"].isNull())
			dataObject.versionCode = valueDataClusterForListModel["VersionCode"].asString();
		if(!valueDataClusterForListModel["InstanceCount"].isNull())
			dataObject.instanceCount = std::stol(valueDataClusterForListModel["InstanceCount"].asString());
		if(!valueDataClusterForListModel["ClusterName"].isNull())
			dataObject.clusterName = valueDataClusterForListModel["ClusterName"].asString();
		if(!valueDataClusterForListModel["MseVersion"].isNull())
			dataObject.mseVersion = valueDataClusterForListModel["MseVersion"].asString();
		if(!valueDataClusterForListModel["Tags"].isNull())
			dataObject.tags = valueDataClusterForListModel["Tags"].asString();
		if(!valueDataClusterForListModel["ResourceGroupId"].isNull())
			dataObject.resourceGroupId = valueDataClusterForListModel["ResourceGroupId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListClustersResult::getHttpCode()const
{
	return httpCode_;
}

int ListClustersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListClustersResult::getMessage()const
{
	return message_;
}

int ListClustersResult::getPageSize()const
{
	return pageSize_;
}

int ListClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClustersResult::ClusterForListModel> ListClustersResult::getData()const
{
	return data_;
}

std::string ListClustersResult::getErrorCode()const
{
	return errorCode_;
}

bool ListClustersResult::getSuccess()const
{
	return success_;
}

