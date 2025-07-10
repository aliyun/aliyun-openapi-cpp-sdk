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

#include <alibabacloud/vpc/model/DescribeSslVpnClientCertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeSslVpnClientCertResult::DescribeSslVpnClientCertResult() :
	ServiceResult()
{}

DescribeSslVpnClientCertResult::DescribeSslVpnClientCertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSslVpnClientCertResult::~DescribeSslVpnClientCertResult()
{}

void DescribeSslVpnClientCertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["ClientKey"].isNull())
		clientKey_ = value["ClientKey"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ClientConfig"].isNull())
		clientConfig_ = value["ClientConfig"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["ClientCert"].isNull())
		clientCert_ = value["ClientCert"].asString();
	if(!value["CaCert"].isNull())
		caCert_ = value["CaCert"].asString();
	if(!value["SslVpnClientCertId"].isNull())
		sslVpnClientCertId_ = value["SslVpnClientCertId"].asString();
	if(!value["SslVpnServerId"].isNull())
		sslVpnServerId_ = value["SslVpnServerId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeSslVpnClientCertResult::getStatus()const
{
	return status_;
}

std::string DescribeSslVpnClientCertResult::getClientCert()const
{
	return clientCert_;
}

long DescribeSslVpnClientCertResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeSslVpnClientCertResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long DescribeSslVpnClientCertResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeSslVpnClientCertResult::getClientKey()const
{
	return clientKey_;
}

std::string DescribeSslVpnClientCertResult::getSslVpnClientCertId()const
{
	return sslVpnClientCertId_;
}

std::string DescribeSslVpnClientCertResult::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

std::string DescribeSslVpnClientCertResult::getCaCert()const
{
	return caCert_;
}

std::string DescribeSslVpnClientCertResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeSslVpnClientCertResult::getClientConfig()const
{
	return clientConfig_;
}

std::string DescribeSslVpnClientCertResult::getName()const
{
	return name_;
}

