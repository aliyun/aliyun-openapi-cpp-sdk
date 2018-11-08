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

#include <alibabacloud/mts/model/QueryAnalysisJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryAnalysisJobListRequest;

QueryAnalysisJobListRequest::QueryAnalysisJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryAnalysisJobList")
{}

QueryAnalysisJobListRequest::~QueryAnalysisJobListRequest()
{}

long QueryAnalysisJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryAnalysisJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryAnalysisJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryAnalysisJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryAnalysisJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryAnalysisJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryAnalysisJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryAnalysisJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryAnalysisJobListRequest::getAnalysisJobIds()const
{
	return analysisJobIds_;
}

void QueryAnalysisJobListRequest::setAnalysisJobIds(const std::string& analysisJobIds)
{
	analysisJobIds_ = analysisJobIds;
	setParameter("AnalysisJobIds", analysisJobIds);
}

std::string QueryAnalysisJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryAnalysisJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

