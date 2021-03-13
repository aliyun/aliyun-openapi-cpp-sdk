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

#include <alibabacloud/adb/model/CreateElasticPlanRequest.h>

using AlibabaCloud::Adb::Model::CreateElasticPlanRequest;

CreateElasticPlanRequest::CreateElasticPlanRequest() :
	RpcServiceRequest("adb", "2019-03-15", "CreateElasticPlan")
{
	setMethod(HttpRequest::Method::Post);
}

CreateElasticPlanRequest::~CreateElasticPlanRequest()
{}

long CreateElasticPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateElasticPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateElasticPlanRequest::getElasticPlanTimeStart()const
{
	return elasticPlanTimeStart_;
}

void CreateElasticPlanRequest::setElasticPlanTimeStart(const std::string& elasticPlanTimeStart)
{
	elasticPlanTimeStart_ = elasticPlanTimeStart;
	setParameter("ElasticPlanTimeStart", elasticPlanTimeStart);
}

std::string CreateElasticPlanRequest::getElasticPlanEndDay()const
{
	return elasticPlanEndDay_;
}

void CreateElasticPlanRequest::setElasticPlanEndDay(const std::string& elasticPlanEndDay)
{
	elasticPlanEndDay_ = elasticPlanEndDay;
	setParameter("ElasticPlanEndDay", elasticPlanEndDay);
}

std::string CreateElasticPlanRequest::getElasticPlanWeeklyRepeat()const
{
	return elasticPlanWeeklyRepeat_;
}

void CreateElasticPlanRequest::setElasticPlanWeeklyRepeat(const std::string& elasticPlanWeeklyRepeat)
{
	elasticPlanWeeklyRepeat_ = elasticPlanWeeklyRepeat;
	setParameter("ElasticPlanWeeklyRepeat", elasticPlanWeeklyRepeat);
}

std::string CreateElasticPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateElasticPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool CreateElasticPlanRequest::getElasticPlanEnable()const
{
	return elasticPlanEnable_;
}

void CreateElasticPlanRequest::setElasticPlanEnable(bool elasticPlanEnable)
{
	elasticPlanEnable_ = elasticPlanEnable;
	setParameter("ElasticPlanEnable", elasticPlanEnable ? "true" : "false");
}

std::string CreateElasticPlanRequest::getElasticPlanTimeEnd()const
{
	return elasticPlanTimeEnd_;
}

void CreateElasticPlanRequest::setElasticPlanTimeEnd(const std::string& elasticPlanTimeEnd)
{
	elasticPlanTimeEnd_ = elasticPlanTimeEnd;
	setParameter("ElasticPlanTimeEnd", elasticPlanTimeEnd);
}

std::string CreateElasticPlanRequest::getElasticPlanStartDay()const
{
	return elasticPlanStartDay_;
}

void CreateElasticPlanRequest::setElasticPlanStartDay(const std::string& elasticPlanStartDay)
{
	elasticPlanStartDay_ = elasticPlanStartDay;
	setParameter("ElasticPlanStartDay", elasticPlanStartDay);
}

std::string CreateElasticPlanRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateElasticPlanRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateElasticPlanRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateElasticPlanRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string CreateElasticPlanRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateElasticPlanRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateElasticPlanRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateElasticPlanRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateElasticPlanRequest::getElasticPlanName()const
{
	return elasticPlanName_;
}

void CreateElasticPlanRequest::setElasticPlanName(const std::string& elasticPlanName)
{
	elasticPlanName_ = elasticPlanName;
	setParameter("ElasticPlanName", elasticPlanName);
}

std::string CreateElasticPlanRequest::getResourcePoolName()const
{
	return resourcePoolName_;
}

void CreateElasticPlanRequest::setResourcePoolName(const std::string& resourcePoolName)
{
	resourcePoolName_ = resourcePoolName;
	setParameter("ResourcePoolName", resourcePoolName);
}

int CreateElasticPlanRequest::getElasticPlanNodeNum()const
{
	return elasticPlanNodeNum_;
}

void CreateElasticPlanRequest::setElasticPlanNodeNum(int elasticPlanNodeNum)
{
	elasticPlanNodeNum_ = elasticPlanNodeNum;
	setParameter("ElasticPlanNodeNum", std::to_string(elasticPlanNodeNum));
}

