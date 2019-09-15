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

#include <alibabacloud/ehpc/model/ListCloudMetricProfilingsRequest.h>

using AlibabaCloud::EHPC::Model::ListCloudMetricProfilingsRequest;

ListCloudMetricProfilingsRequest::ListCloudMetricProfilingsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListCloudMetricProfilings")
{}

ListCloudMetricProfilingsRequest::~ListCloudMetricProfilingsRequest()
{}

std::string ListCloudMetricProfilingsRequest::getClusterId()const
{
	return clusterId_;
}

void ListCloudMetricProfilingsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListCloudMetricProfilingsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCloudMetricProfilingsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCloudMetricProfilingsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCloudMetricProfilingsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListCloudMetricProfilingsRequest::getRegionId()const
{
	return regionId_;
}

void ListCloudMetricProfilingsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListCloudMetricProfilingsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCloudMetricProfilingsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

