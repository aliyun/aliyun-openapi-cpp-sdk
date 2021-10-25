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

#include <alibabacloud/dts/model/DescribeDtsJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDtsJobDetailResult::DescribeDtsJobDetailResult() :
	ServiceResult()
{}

DescribeDtsJobDetailResult::DescribeDtsJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDtsJobDetailResult::~DescribeDtsJobDetailResult()
{}

void DescribeDtsJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sourceEndpointNode = value["SourceEndpoint"];
	if(!sourceEndpointNode["OracleSID"].isNull())
		sourceEndpoint_.oracleSID = sourceEndpointNode["OracleSID"].asString();
	if(!sourceEndpointNode["SslSolutionEnum"].isNull())
		sourceEndpoint_.sslSolutionEnum = sourceEndpointNode["SslSolutionEnum"].asString();
	if(!sourceEndpointNode["Ip"].isNull())
		sourceEndpoint_.ip = sourceEndpointNode["Ip"].asString();
	if(!sourceEndpointNode["InstanceID"].isNull())
		sourceEndpoint_.instanceID = sourceEndpointNode["InstanceID"].asString();
	if(!sourceEndpointNode["RoleName"].isNull())
		sourceEndpoint_.roleName = sourceEndpointNode["RoleName"].asString();
	if(!sourceEndpointNode["InstanceType"].isNull())
		sourceEndpoint_.instanceType = sourceEndpointNode["InstanceType"].asString();
	if(!sourceEndpointNode["Port"].isNull())
		sourceEndpoint_.port = sourceEndpointNode["Port"].asString();
	if(!sourceEndpointNode["EngineName"].isNull())
		sourceEndpoint_.engineName = sourceEndpointNode["EngineName"].asString();
	if(!sourceEndpointNode["Region"].isNull())
		sourceEndpoint_.region = sourceEndpointNode["Region"].asString();
	if(!sourceEndpointNode["DatabaseName"].isNull())
		sourceEndpoint_.databaseName = sourceEndpointNode["DatabaseName"].asString();
	if(!sourceEndpointNode["AliyunUid"].isNull())
		sourceEndpoint_.aliyunUid = sourceEndpointNode["AliyunUid"].asString();
	if(!sourceEndpointNode["UserName"].isNull())
		sourceEndpoint_.userName = sourceEndpointNode["UserName"].asString();
	auto destinationEndpointNode = value["DestinationEndpoint"];
	if(!destinationEndpointNode["SslSolutionEnum"].isNull())
		destinationEndpoint_.sslSolutionEnum = destinationEndpointNode["SslSolutionEnum"].asString();
	if(!destinationEndpointNode["OracleSID"].isNull())
		destinationEndpoint_.oracleSID = destinationEndpointNode["OracleSID"].asString();
	if(!destinationEndpointNode["DatabaseName"].isNull())
		destinationEndpoint_.databaseName = destinationEndpointNode["DatabaseName"].asString();
	if(!destinationEndpointNode["Region"].isNull())
		destinationEndpoint_.region = destinationEndpointNode["Region"].asString();
	if(!destinationEndpointNode["Ip"].isNull())
		destinationEndpoint_.ip = destinationEndpointNode["Ip"].asString();
	if(!destinationEndpointNode["InstanceID"].isNull())
		destinationEndpoint_.instanceID = destinationEndpointNode["InstanceID"].asString();
	if(!destinationEndpointNode["Port"].isNull())
		destinationEndpoint_.port = destinationEndpointNode["Port"].asString();
	if(!destinationEndpointNode["InstanceType"].isNull())
		destinationEndpoint_.instanceType = destinationEndpointNode["InstanceType"].asString();
	if(!destinationEndpointNode["UserName"].isNull())
		destinationEndpoint_.userName = destinationEndpointNode["UserName"].asString();
	if(!destinationEndpointNode["EngineName"].isNull())
		destinationEndpoint_.engineName = destinationEndpointNode["EngineName"].asString();
	auto migrationModeNode = value["MigrationMode"];
	if(!migrationModeNode["DataExtractTransformLoad"].isNull())
		migrationMode_.dataExtractTransformLoad = migrationModeNode["DataExtractTransformLoad"].asString() == "true";
	if(!migrationModeNode["DataInitialization"].isNull())
		migrationMode_.dataInitialization = migrationModeNode["DataInitialization"].asString() == "true";
	if(!migrationModeNode["DataSynchronization"].isNull())
		migrationMode_.dataSynchronization = migrationModeNode["DataSynchronization"].asString() == "true";
	if(!migrationModeNode["StructureInitialization"].isNull())
		migrationMode_.structureInitialization = migrationModeNode["StructureInitialization"].asString() == "true";
	auto subscriptionHostNode = value["SubscriptionHost"];
	if(!subscriptionHostNode["VpcHost"].isNull())
		subscriptionHost_.vpcHost = subscriptionHostNode["VpcHost"].asString();
	if(!subscriptionHostNode["PublicHost"].isNull())
		subscriptionHost_.publicHost = subscriptionHostNode["PublicHost"].asString();
	if(!subscriptionHostNode["PrivateHost"].isNull())
		subscriptionHost_.privateHost = subscriptionHostNode["PrivateHost"].asString();
	auto subscriptionDataTypeNode = value["SubscriptionDataType"];
	if(!subscriptionDataTypeNode["Dml"].isNull())
		subscriptionDataType_.dml = subscriptionDataTypeNode["Dml"].asString() == "true";
	if(!subscriptionDataTypeNode["Ddl"].isNull())
		subscriptionDataType_.ddl = subscriptionDataTypeNode["Ddl"].asString() == "true";
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["DtsJobName"].isNull())
		dtsJobName_ = value["DtsJobName"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["DtsJobId"].isNull())
		dtsJobId_ = value["DtsJobId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["Reserved"].isNull())
		reserved_ = value["Reserved"].asString();
	if(!value["DatabaseCount"].isNull())
		databaseCount_ = std::stoi(value["DatabaseCount"].asString());
	if(!value["DtsJobClass"].isNull())
		dtsJobClass_ = value["DtsJobClass"].asString();
	if(!value["EndTimestamp"].isNull())
		endTimestamp_ = value["EndTimestamp"].asString();
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();
	if(!value["DestNetType"].isNull())
		destNetType_ = value["DestNetType"].asString();
	if(!value["SubscribeTopic"].isNull())
		subscribeTopic_ = value["SubscribeTopic"].asString();
	if(!value["DtsInstanceID"].isNull())
		dtsInstanceID_ = value["DtsInstanceID"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Checkpoint"].isNull())
		checkpoint_ = std::stol(value["Checkpoint"].asString());
	if(!value["Delay"].isNull())
		delay_ = std::stol(value["Delay"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["ConsumptionClient"].isNull())
		consumptionClient_ = value["ConsumptionClient"].asString();
	if(!value["DbObject"].isNull())
		dbObject_ = value["DbObject"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ConsumptionCheckpoint"].isNull())
		consumptionCheckpoint_ = value["ConsumptionCheckpoint"].asString();
	if(!value["EtlCalculator"].isNull())
		etlCalculator_ = value["EtlCalculator"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["BeginTimestamp"].isNull())
		beginTimestamp_ = value["BeginTimestamp"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["SynchronizationDirection"].isNull())
		synchronizationDirection_ = value["SynchronizationDirection"].asString();
	if(!value["DtsJobDirection"].isNull())
		dtsJobDirection_ = value["DtsJobDirection"].asString();

}

DescribeDtsJobDetailResult::SubscriptionHost DescribeDtsJobDetailResult::getSubscriptionHost()const
{
	return subscriptionHost_;
}

std::string DescribeDtsJobDetailResult::getDtsJobName()const
{
	return dtsJobName_;
}

std::string DescribeDtsJobDetailResult::getEndTimestamp()const
{
	return endTimestamp_;
}

std::string DescribeDtsJobDetailResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDtsJobDetailResult::getDtsInstanceID()const
{
	return dtsInstanceID_;
}

DescribeDtsJobDetailResult::MigrationMode DescribeDtsJobDetailResult::getMigrationMode()const
{
	return migrationMode_;
}

long DescribeDtsJobDetailResult::getDelay()const
{
	return delay_;
}

bool DescribeDtsJobDetailResult::getSuccess()const
{
	return success_;
}

std::string DescribeDtsJobDetailResult::getAppName()const
{
	return appName_;
}

DescribeDtsJobDetailResult::SubscriptionDataType DescribeDtsJobDetailResult::getSubscriptionDataType()const
{
	return subscriptionDataType_;
}

std::string DescribeDtsJobDetailResult::getDtsJobClass()const
{
	return dtsJobClass_;
}

std::string DescribeDtsJobDetailResult::getDtsJobId()const
{
	return dtsJobId_;
}

std::string DescribeDtsJobDetailResult::getFinishTime()const
{
	return finishTime_;
}

int DescribeDtsJobDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDtsJobDetailResult::getDestNetType()const
{
	return destNetType_;
}

std::string DescribeDtsJobDetailResult::getEtlCalculator()const
{
	return etlCalculator_;
}

std::string DescribeDtsJobDetailResult::getStatus()const
{
	return status_;
}

std::string DescribeDtsJobDetailResult::getDbObject()const
{
	return dbObject_;
}

std::string DescribeDtsJobDetailResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDtsJobDetailResult::getPayType()const
{
	return payType_;
}

std::string DescribeDtsJobDetailResult::getErrMessage()const
{
	return errMessage_;
}

int DescribeDtsJobDetailResult::getCode()const
{
	return code_;
}

std::string DescribeDtsJobDetailResult::getErrCode()const
{
	return errCode_;
}

std::string DescribeDtsJobDetailResult::getGroupId()const
{
	return groupId_;
}

long DescribeDtsJobDetailResult::getCheckpoint()const
{
	return checkpoint_;
}

std::string DescribeDtsJobDetailResult::getConsumptionCheckpoint()const
{
	return consumptionCheckpoint_;
}

std::string DescribeDtsJobDetailResult::getDtsJobDirection()const
{
	return dtsJobDirection_;
}

int DescribeDtsJobDetailResult::getDatabaseCount()const
{
	return databaseCount_;
}

DescribeDtsJobDetailResult::DestinationEndpoint DescribeDtsJobDetailResult::getDestinationEndpoint()const
{
	return destinationEndpoint_;
}

std::string DescribeDtsJobDetailResult::getSubscribeTopic()const
{
	return subscribeTopic_;
}

std::string DescribeDtsJobDetailResult::getConsumptionClient()const
{
	return consumptionClient_;
}

DescribeDtsJobDetailResult::SourceEndpoint DescribeDtsJobDetailResult::getSourceEndpoint()const
{
	return sourceEndpoint_;
}

std::string DescribeDtsJobDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeDtsJobDetailResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeDtsJobDetailResult::getBeginTimestamp()const
{
	return beginTimestamp_;
}

std::string DescribeDtsJobDetailResult::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

std::string DescribeDtsJobDetailResult::getReserved()const
{
	return reserved_;
}

