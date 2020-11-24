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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataRequest.h>

using AlibabaCloud::Hitsdb::Model::ExploreHiTSDBInstanceDataRequest;

ExploreHiTSDBInstanceDataRequest::ExploreHiTSDBInstanceDataRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ExploreHiTSDBInstanceData")
{
	setMethod(HttpRequest::Method::Post);
}

ExploreHiTSDBInstanceDataRequest::~ExploreHiTSDBInstanceDataRequest()
{}

std::string ExploreHiTSDBInstanceDataRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void ExploreHiTSDBInstanceDataRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long ExploreHiTSDBInstanceDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExploreHiTSDBInstanceDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ExploreHiTSDBInstanceDataRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void ExploreHiTSDBInstanceDataRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string ExploreHiTSDBInstanceDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExploreHiTSDBInstanceDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ExploreHiTSDBInstanceDataRequest::getPassWord()const
{
	return passWord_;
}

void ExploreHiTSDBInstanceDataRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string ExploreHiTSDBInstanceDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExploreHiTSDBInstanceDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long ExploreHiTSDBInstanceDataRequest::getEnd()const
{
	return end_;
}

void ExploreHiTSDBInstanceDataRequest::setEnd(long end)
{
	end_ = end;
	setParameter("End", std::to_string(end));
}

std::string ExploreHiTSDBInstanceDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExploreHiTSDBInstanceDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ExploreHiTSDBInstanceDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ExploreHiTSDBInstanceDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ExploreHiTSDBInstanceDataRequest::getAggregator()const
{
	return aggregator_;
}

void ExploreHiTSDBInstanceDataRequest::setAggregator(const std::string& aggregator)
{
	aggregator_ = aggregator;
	setParameter("Aggregator", aggregator);
}

long ExploreHiTSDBInstanceDataRequest::getStart()const
{
	return start_;
}

void ExploreHiTSDBInstanceDataRequest::setStart(long start)
{
	start_ = start;
	setParameter("Start", std::to_string(start));
}

long ExploreHiTSDBInstanceDataRequest::getOwnerId()const
{
	return ownerId_;
}

void ExploreHiTSDBInstanceDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExploreHiTSDBInstanceDataRequest::getTagFilter()const
{
	return tagFilter_;
}

void ExploreHiTSDBInstanceDataRequest::setTagFilter(const std::string& tagFilter)
{
	tagFilter_ = tagFilter;
	setParameter("TagFilter", tagFilter);
}

std::string ExploreHiTSDBInstanceDataRequest::getInstanceId()const
{
	return instanceId_;
}

void ExploreHiTSDBInstanceDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ExploreHiTSDBInstanceDataRequest::getMetric()const
{
	return metric_;
}

void ExploreHiTSDBInstanceDataRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string ExploreHiTSDBInstanceDataRequest::getDownSampleAggregator()const
{
	return downSampleAggregator_;
}

void ExploreHiTSDBInstanceDataRequest::setDownSampleAggregator(const std::string& downSampleAggregator)
{
	downSampleAggregator_ = downSampleAggregator;
	setParameter("DownSampleAggregator", downSampleAggregator);
}

std::string ExploreHiTSDBInstanceDataRequest::getDownSampleTime()const
{
	return downSampleTime_;
}

void ExploreHiTSDBInstanceDataRequest::setDownSampleTime(const std::string& downSampleTime)
{
	downSampleTime_ = downSampleTime;
	setParameter("DownSampleTime", downSampleTime);
}

std::string ExploreHiTSDBInstanceDataRequest::getUserName()const
{
	return userName_;
}

void ExploreHiTSDBInstanceDataRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

