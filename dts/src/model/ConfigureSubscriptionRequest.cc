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

#include <alibabacloud/dts/model/ConfigureSubscriptionRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSubscriptionRequest;

ConfigureSubscriptionRequest::ConfigureSubscriptionRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ConfigureSubscription")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigureSubscriptionRequest::~ConfigureSubscriptionRequest()
{}

std::string ConfigureSubscriptionRequest::getSourceEndpointRegion()const
{
	return sourceEndpointRegion_;
}

void ConfigureSubscriptionRequest::setSourceEndpointRegion(const std::string& sourceEndpointRegion)
{
	sourceEndpointRegion_ = sourceEndpointRegion;
	setParameter("SourceEndpointRegion", sourceEndpointRegion);
}

std::string ConfigureSubscriptionRequest::getCheckpoint()const
{
	return checkpoint_;
}

void ConfigureSubscriptionRequest::setCheckpoint(const std::string& checkpoint)
{
	checkpoint_ = checkpoint;
	setParameter("Checkpoint", checkpoint);
}

std::string ConfigureSubscriptionRequest::getSubscriptionInstanceVSwitchId()const
{
	return subscriptionInstanceVSwitchId_;
}

void ConfigureSubscriptionRequest::setSubscriptionInstanceVSwitchId(const std::string& subscriptionInstanceVSwitchId)
{
	subscriptionInstanceVSwitchId_ = subscriptionInstanceVSwitchId;
	setParameter("SubscriptionInstanceVSwitchId", subscriptionInstanceVSwitchId);
}

bool ConfigureSubscriptionRequest::getDelayNotice()const
{
	return delayNotice_;
}

void ConfigureSubscriptionRequest::setDelayNotice(bool delayNotice)
{
	delayNotice_ = delayNotice;
	setParameter("DelayNotice", delayNotice ? "true" : "false");
}

std::string ConfigureSubscriptionRequest::getSourceEndpointInstanceID()const
{
	return sourceEndpointInstanceID_;
}

void ConfigureSubscriptionRequest::setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID)
{
	sourceEndpointInstanceID_ = sourceEndpointInstanceID;
	setParameter("SourceEndpointInstanceID", sourceEndpointInstanceID);
}

std::string ConfigureSubscriptionRequest::getSourceEndpointUserName()const
{
	return sourceEndpointUserName_;
}

void ConfigureSubscriptionRequest::setSourceEndpointUserName(const std::string& sourceEndpointUserName)
{
	sourceEndpointUserName_ = sourceEndpointUserName;
	setParameter("SourceEndpointUserName", sourceEndpointUserName);
}

std::string ConfigureSubscriptionRequest::getSourceEndpointOwnerID()const
{
	return sourceEndpointOwnerID_;
}

void ConfigureSubscriptionRequest::setSourceEndpointOwnerID(const std::string& sourceEndpointOwnerID)
{
	sourceEndpointOwnerID_ = sourceEndpointOwnerID;
	setParameter("SourceEndpointOwnerID", sourceEndpointOwnerID);
}

std::string ConfigureSubscriptionRequest::getDelayPhone()const
{
	return delayPhone_;
}

void ConfigureSubscriptionRequest::setDelayPhone(const std::string& delayPhone)
{
	delayPhone_ = delayPhone;
	setParameter("DelayPhone", delayPhone);
}

bool ConfigureSubscriptionRequest::getSubscriptionDataTypeDML()const
{
	return subscriptionDataTypeDML_;
}

void ConfigureSubscriptionRequest::setSubscriptionDataTypeDML(bool subscriptionDataTypeDML)
{
	subscriptionDataTypeDML_ = subscriptionDataTypeDML;
	setParameter("SubscriptionDataTypeDML", subscriptionDataTypeDML ? "true" : "false");
}

std::string ConfigureSubscriptionRequest::getSourceEndpointDatabaseName()const
{
	return sourceEndpointDatabaseName_;
}

void ConfigureSubscriptionRequest::setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName)
{
	sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
	setParameter("SourceEndpointDatabaseName", sourceEndpointDatabaseName);
}

std::string ConfigureSubscriptionRequest::getSourceEndpointIP()const
{
	return sourceEndpointIP_;
}

void ConfigureSubscriptionRequest::setSourceEndpointIP(const std::string& sourceEndpointIP)
{
	sourceEndpointIP_ = sourceEndpointIP;
	setParameter("SourceEndpointIP", sourceEndpointIP);
}

std::string ConfigureSubscriptionRequest::getRegionId()const
{
	return regionId_;
}

void ConfigureSubscriptionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConfigureSubscriptionRequest::getErrorPhone()const
{
	return errorPhone_;
}

void ConfigureSubscriptionRequest::setErrorPhone(const std::string& errorPhone)
{
	errorPhone_ = errorPhone;
	setParameter("ErrorPhone", errorPhone);
}

std::string ConfigureSubscriptionRequest::getReserve()const
{
	return reserve_;
}

void ConfigureSubscriptionRequest::setReserve(const std::string& reserve)
{
	reserve_ = reserve;
	setParameter("Reserve", reserve);
}

std::string ConfigureSubscriptionRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void ConfigureSubscriptionRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string ConfigureSubscriptionRequest::getDbList()const
{
	return dbList_;
}

void ConfigureSubscriptionRequest::setDbList(const std::string& dbList)
{
	dbList_ = dbList;
	setParameter("DbList", dbList);
}

std::string ConfigureSubscriptionRequest::getSubscriptionInstanceNetworkType()const
{
	return subscriptionInstanceNetworkType_;
}

void ConfigureSubscriptionRequest::setSubscriptionInstanceNetworkType(const std::string& subscriptionInstanceNetworkType)
{
	subscriptionInstanceNetworkType_ = subscriptionInstanceNetworkType;
	setParameter("SubscriptionInstanceNetworkType", subscriptionInstanceNetworkType);
}

bool ConfigureSubscriptionRequest::getSubscriptionDataTypeDDL()const
{
	return subscriptionDataTypeDDL_;
}

void ConfigureSubscriptionRequest::setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL)
{
	subscriptionDataTypeDDL_ = subscriptionDataTypeDDL;
	setParameter("SubscriptionDataTypeDDL", subscriptionDataTypeDDL ? "true" : "false");
}

std::string ConfigureSubscriptionRequest::getSourceEndpointPassword()const
{
	return sourceEndpointPassword_;
}

void ConfigureSubscriptionRequest::setSourceEndpointPassword(const std::string& sourceEndpointPassword)
{
	sourceEndpointPassword_ = sourceEndpointPassword;
	setParameter("SourceEndpointPassword", sourceEndpointPassword);
}

std::string ConfigureSubscriptionRequest::getSourceEndpointPort()const
{
	return sourceEndpointPort_;
}

void ConfigureSubscriptionRequest::setSourceEndpointPort(const std::string& sourceEndpointPort)
{
	sourceEndpointPort_ = sourceEndpointPort;
	setParameter("SourceEndpointPort", sourceEndpointPort);
}

std::string ConfigureSubscriptionRequest::getSubscriptionInstanceVPCId()const
{
	return subscriptionInstanceVPCId_;
}

void ConfigureSubscriptionRequest::setSubscriptionInstanceVPCId(const std::string& subscriptionInstanceVPCId)
{
	subscriptionInstanceVPCId_ = subscriptionInstanceVPCId;
	setParameter("SubscriptionInstanceVPCId", subscriptionInstanceVPCId);
}

long ConfigureSubscriptionRequest::getDelayRuleTime()const
{
	return delayRuleTime_;
}

void ConfigureSubscriptionRequest::setDelayRuleTime(long delayRuleTime)
{
	delayRuleTime_ = delayRuleTime;
	setParameter("DelayRuleTime", std::to_string(delayRuleTime));
}

std::string ConfigureSubscriptionRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void ConfigureSubscriptionRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string ConfigureSubscriptionRequest::getDtsJobName()const
{
	return dtsJobName_;
}

void ConfigureSubscriptionRequest::setDtsJobName(const std::string& dtsJobName)
{
	dtsJobName_ = dtsJobName;
	setParameter("DtsJobName", dtsJobName);
}

std::string ConfigureSubscriptionRequest::getSourceEndpointOracleSID()const
{
	return sourceEndpointOracleSID_;
}

void ConfigureSubscriptionRequest::setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID)
{
	sourceEndpointOracleSID_ = sourceEndpointOracleSID;
	setParameter("SourceEndpointOracleSID", sourceEndpointOracleSID);
}

bool ConfigureSubscriptionRequest::getErrorNotice()const
{
	return errorNotice_;
}

void ConfigureSubscriptionRequest::setErrorNotice(bool errorNotice)
{
	errorNotice_ = errorNotice;
	setParameter("ErrorNotice", errorNotice ? "true" : "false");
}

std::string ConfigureSubscriptionRequest::getSourceEndpointRole()const
{
	return sourceEndpointRole_;
}

void ConfigureSubscriptionRequest::setSourceEndpointRole(const std::string& sourceEndpointRole)
{
	sourceEndpointRole_ = sourceEndpointRole;
	setParameter("SourceEndpointRole", sourceEndpointRole);
}

std::string ConfigureSubscriptionRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void ConfigureSubscriptionRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

std::string ConfigureSubscriptionRequest::getSourceEndpointEngineName()const
{
	return sourceEndpointEngineName_;
}

void ConfigureSubscriptionRequest::setSourceEndpointEngineName(const std::string& sourceEndpointEngineName)
{
	sourceEndpointEngineName_ = sourceEndpointEngineName;
	setParameter("SourceEndpointEngineName", sourceEndpointEngineName);
}

