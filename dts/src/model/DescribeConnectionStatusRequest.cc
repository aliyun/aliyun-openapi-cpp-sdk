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

#include <alibabacloud/dts/model/DescribeConnectionStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeConnectionStatusRequest;

DescribeConnectionStatusRequest::DescribeConnectionStatusRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeConnectionStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeConnectionStatusRequest::~DescribeConnectionStatusRequest()
{}

std::string DescribeConnectionStatusRequest::getSourceEndpointRegion()const
{
	return sourceEndpointRegion_;
}

void DescribeConnectionStatusRequest::setSourceEndpointRegion(const std::string& sourceEndpointRegion)
{
	sourceEndpointRegion_ = sourceEndpointRegion;
	setParameter("SourceEndpointRegion", sourceEndpointRegion);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointArchitecture()const
{
	return sourceEndpointArchitecture_;
}

void DescribeConnectionStatusRequest::setSourceEndpointArchitecture(const std::string& sourceEndpointArchitecture)
{
	sourceEndpointArchitecture_ = sourceEndpointArchitecture;
	setParameter("SourceEndpointArchitecture", sourceEndpointArchitecture);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointInstanceType()const
{
	return destinationEndpointInstanceType_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType)
{
	destinationEndpointInstanceType_ = destinationEndpointInstanceType;
	setParameter("DestinationEndpointInstanceType", destinationEndpointInstanceType);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointInstanceID()const
{
	return sourceEndpointInstanceID_;
}

void DescribeConnectionStatusRequest::setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID)
{
	sourceEndpointInstanceID_ = sourceEndpointInstanceID;
	setParameter("SourceEndpointInstanceID", sourceEndpointInstanceID);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointUserName()const
{
	return sourceEndpointUserName_;
}

void DescribeConnectionStatusRequest::setSourceEndpointUserName(const std::string& sourceEndpointUserName)
{
	sourceEndpointUserName_ = sourceEndpointUserName;
	setParameter("SourceEndpointUserName", sourceEndpointUserName);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointDatabaseName()const
{
	return sourceEndpointDatabaseName_;
}

void DescribeConnectionStatusRequest::setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName)
{
	sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
	setParameter("SourceEndpointDatabaseName", sourceEndpointDatabaseName);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointRegion()const
{
	return destinationEndpointRegion_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointRegion(const std::string& destinationEndpointRegion)
{
	destinationEndpointRegion_ = destinationEndpointRegion;
	setParameter("DestinationEndpointRegion", destinationEndpointRegion);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointIP()const
{
	return sourceEndpointIP_;
}

void DescribeConnectionStatusRequest::setSourceEndpointIP(const std::string& sourceEndpointIP)
{
	sourceEndpointIP_ = sourceEndpointIP;
	setParameter("SourceEndpointIP", sourceEndpointIP);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointUserName()const
{
	return destinationEndpointUserName_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointUserName(const std::string& destinationEndpointUserName)
{
	destinationEndpointUserName_ = destinationEndpointUserName;
	setParameter("DestinationEndpointUserName", destinationEndpointUserName);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointArchitecture()const
{
	return destinationEndpointArchitecture_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointArchitecture(const std::string& destinationEndpointArchitecture)
{
	destinationEndpointArchitecture_ = destinationEndpointArchitecture;
	setParameter("DestinationEndpointArchitecture", destinationEndpointArchitecture);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointOracleSID()const
{
	return destinationEndpointOracleSID_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointOracleSID(const std::string& destinationEndpointOracleSID)
{
	destinationEndpointOracleSID_ = destinationEndpointOracleSID;
	setParameter("DestinationEndpointOracleSID", destinationEndpointOracleSID);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointEngineName()const
{
	return destinationEndpointEngineName_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointEngineName(const std::string& destinationEndpointEngineName)
{
	destinationEndpointEngineName_ = destinationEndpointEngineName;
	setParameter("DestinationEndpointEngineName", destinationEndpointEngineName);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointInstanceID()const
{
	return destinationEndpointInstanceID_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointInstanceID(const std::string& destinationEndpointInstanceID)
{
	destinationEndpointInstanceID_ = destinationEndpointInstanceID;
	setParameter("DestinationEndpointInstanceID", destinationEndpointInstanceID);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointPort()const
{
	return destinationEndpointPort_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointPort(const std::string& destinationEndpointPort)
{
	destinationEndpointPort_ = destinationEndpointPort;
	setParameter("DestinationEndpointPort", destinationEndpointPort);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointPassword()const
{
	return sourceEndpointPassword_;
}

void DescribeConnectionStatusRequest::setSourceEndpointPassword(const std::string& sourceEndpointPassword)
{
	sourceEndpointPassword_ = sourceEndpointPassword;
	setParameter("SourceEndpointPassword", sourceEndpointPassword);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointPort()const
{
	return sourceEndpointPort_;
}

void DescribeConnectionStatusRequest::setSourceEndpointPort(const std::string& sourceEndpointPort)
{
	sourceEndpointPort_ = sourceEndpointPort;
	setParameter("SourceEndpointPort", sourceEndpointPort);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointIP()const
{
	return destinationEndpointIP_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointIP(const std::string& destinationEndpointIP)
{
	destinationEndpointIP_ = destinationEndpointIP;
	setParameter("DestinationEndpointIP", destinationEndpointIP);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void DescribeConnectionStatusRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointOracleSID()const
{
	return sourceEndpointOracleSID_;
}

void DescribeConnectionStatusRequest::setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID)
{
	sourceEndpointOracleSID_ = sourceEndpointOracleSID;
	setParameter("SourceEndpointOracleSID", sourceEndpointOracleSID);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointDatabaseName()const
{
	return destinationEndpointDatabaseName_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointDatabaseName(const std::string& destinationEndpointDatabaseName)
{
	destinationEndpointDatabaseName_ = destinationEndpointDatabaseName;
	setParameter("DestinationEndpointDatabaseName", destinationEndpointDatabaseName);
}

std::string DescribeConnectionStatusRequest::getDestinationEndpointPassword()const
{
	return destinationEndpointPassword_;
}

void DescribeConnectionStatusRequest::setDestinationEndpointPassword(const std::string& destinationEndpointPassword)
{
	destinationEndpointPassword_ = destinationEndpointPassword;
	setParameter("DestinationEndpointPassword", destinationEndpointPassword);
}

std::string DescribeConnectionStatusRequest::getSourceEndpointEngineName()const
{
	return sourceEndpointEngineName_;
}

void DescribeConnectionStatusRequest::setSourceEndpointEngineName(const std::string& sourceEndpointEngineName)
{
	sourceEndpointEngineName_ = sourceEndpointEngineName;
	setParameter("SourceEndpointEngineName", sourceEndpointEngineName);
}

