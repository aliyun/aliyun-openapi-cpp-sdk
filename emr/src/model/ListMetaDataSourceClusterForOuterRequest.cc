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

#include <alibabacloud/emr/model/ListMetaDataSourceClusterForOuterRequest.h>

using AlibabaCloud::Emr::Model::ListMetaDataSourceClusterForOuterRequest;

ListMetaDataSourceClusterForOuterRequest::ListMetaDataSourceClusterForOuterRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListMetaDataSourceClusterForOuter")
{
	setMethod(HttpRequest::Method::Post);
}

ListMetaDataSourceClusterForOuterRequest::~ListMetaDataSourceClusterForOuterRequest()
{}

long ListMetaDataSourceClusterForOuterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListMetaDataSourceClusterForOuterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListMetaDataSourceClusterForOuterRequest::getClusterId()const
{
	return clusterId_;
}

void ListMetaDataSourceClusterForOuterRequest::setClusterId(const std::vector<std::string>& clusterId)
{
	clusterId_ = clusterId;
	for(int dep1 = 0; dep1!= clusterId.size(); dep1++) {
		setParameter("ClusterId."+ std::to_string(dep1), clusterId.at(dep1));
	}
}

std::string ListMetaDataSourceClusterForOuterRequest::getUserId()const
{
	return userId_;
}

void ListMetaDataSourceClusterForOuterRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

int ListMetaDataSourceClusterForOuterRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMetaDataSourceClusterForOuterRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListMetaDataSourceClusterForOuterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListMetaDataSourceClusterForOuterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListMetaDataSourceClusterForOuterRequest::getRegionId()const
{
	return regionId_;
}

void ListMetaDataSourceClusterForOuterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> ListMetaDataSourceClusterForOuterRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListMetaDataSourceClusterForOuterRequest::setDataSourceId(const std::vector<std::string>& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	for(int dep1 = 0; dep1!= dataSourceId.size(); dep1++) {
		setParameter("DataSourceId."+ std::to_string(dep1), dataSourceId.at(dep1));
	}
}

int ListMetaDataSourceClusterForOuterRequest::getPageSize()const
{
	return pageSize_;
}

void ListMetaDataSourceClusterForOuterRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

