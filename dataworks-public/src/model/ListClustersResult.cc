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

#include <alibabacloud/dataworks-public/model/ListClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

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
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allClustersNode = dataNode["Clusters"]["ClustersItem"];
	for (auto dataNodeClustersClustersItem : allClustersNode)
	{
		Data::ClustersItem clustersItemObject;
		if(!dataNodeClustersClustersItem["ClusterId"].isNull())
			clustersItemObject.clusterId = std::stol(dataNodeClustersClustersItem["ClusterId"].asString());
		if(!dataNodeClustersClustersItem["ClusterBizId"].isNull())
			clustersItemObject.clusterBizId = dataNodeClustersClustersItem["ClusterBizId"].asString();
		data_.clusters.push_back(clustersItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int ListClustersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListClustersResult::Data ListClustersResult::getData()const
{
	return data_;
}

std::string ListClustersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListClustersResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListClustersResult::getSuccess()const
{
	return success_;
}

