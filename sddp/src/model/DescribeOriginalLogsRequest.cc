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

#include <alibabacloud/sddp/model/DescribeOriginalLogsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeOriginalLogsRequest;

DescribeOriginalLogsRequest::DescribeOriginalLogsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeOriginalLogs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOriginalLogsRequest::~DescribeOriginalLogsRequest()
{}

long DescribeOriginalLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeOriginalLogsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeOriginalLogsRequest::getLogType()const
{
	return logType_;
}

void DescribeOriginalLogsRequest::setLogType(const std::string& logType)
{
	logType_ = logType;
	setCoreParameter("LogType", logType);
}

std::string DescribeOriginalLogsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOriginalLogsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeOriginalLogsRequest::getClientIp()const
{
	return clientIp_;
}

void DescribeOriginalLogsRequest::setClientIp(const std::string& clientIp)
{
	clientIp_ = clientIp;
	setCoreParameter("ClientIp", clientIp);
}

int DescribeOriginalLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOriginalLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeOriginalLogsRequest::getLang()const
{
	return lang_;
}

void DescribeOriginalLogsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeOriginalLogsRequest::getTableName()const
{
	return tableName_;
}

void DescribeOriginalLogsRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", tableName);
}

std::string DescribeOriginalLogsRequest::getOssObjectKey()const
{
	return ossObjectKey_;
}

void DescribeOriginalLogsRequest::setOssObjectKey(const std::string& ossObjectKey)
{
	ossObjectKey_ = ossObjectKey;
	setCoreParameter("OssObjectKey", ossObjectKey);
}

int DescribeOriginalLogsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeOriginalLogsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

long DescribeOriginalLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeOriginalLogsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

int DescribeOriginalLogsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeOriginalLogsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeOriginalLogsRequest::getClientUa()const
{
	return clientUa_;
}

void DescribeOriginalLogsRequest::setClientUa(const std::string& clientUa)
{
	clientUa_ = clientUa;
	setCoreParameter("ClientUa", clientUa);
}

std::string DescribeOriginalLogsRequest::getInstanceName()const
{
	return instanceName_;
}

void DescribeOriginalLogsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string DescribeOriginalLogsRequest::getDatabaseName()const
{
	return databaseName_;
}

void DescribeOriginalLogsRequest::setDatabaseName(const std::string& databaseName)
{
	databaseName_ = databaseName;
	setCoreParameter("DatabaseName", databaseName);
}

std::string DescribeOriginalLogsRequest::getOperateType()const
{
	return operateType_;
}

void DescribeOriginalLogsRequest::setOperateType(const std::string& operateType)
{
	operateType_ = operateType;
	setCoreParameter("OperateType", operateType);
}

std::string DescribeOriginalLogsRequest::getUserName()const
{
	return userName_;
}

void DescribeOriginalLogsRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

