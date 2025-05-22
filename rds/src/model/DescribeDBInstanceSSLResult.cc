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

#include <alibabacloud/rds/model/DescribeDBInstanceSSLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceSSLResult::DescribeDBInstanceSSLResult() :
	ServiceResult()
{}

DescribeDBInstanceSSLResult::DescribeDBInstanceSSLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceSSLResult::~DescribeDBInstanceSSLResult()
{}

void DescribeDBInstanceSSLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ACL"].isNull())
		aCL_ = value["ACL"].asString();
	if(!value["CAType"].isNull())
		cAType_ = value["CAType"].asString();
	if(!value["ClientCACert"].isNull())
		clientCACert_ = value["ClientCACert"].asString();
	if(!value["ClientCACertExpireTime"].isNull())
		clientCACertExpireTime_ = value["ClientCACertExpireTime"].asString();
	if(!value["ClientCertRevocationList"].isNull())
		clientCertRevocationList_ = value["ClientCertRevocationList"].asString();
	if(!value["ConnectionString"].isNull())
		connectionString_ = value["ConnectionString"].asString();
	if(!value["ForceEncryption"].isNull())
		forceEncryption_ = value["ForceEncryption"].asString();
	if(!value["LastModifyStatus"].isNull())
		lastModifyStatus_ = value["LastModifyStatus"].asString();
	if(!value["ModifyStatusReason"].isNull())
		modifyStatusReason_ = value["ModifyStatusReason"].asString();
	if(!value["ReplicationACL"].isNull())
		replicationACL_ = value["ReplicationACL"].asString();
	if(!value["RequireUpdate"].isNull())
		requireUpdate_ = value["RequireUpdate"].asString();
	if(!value["RequireUpdateItem"].isNull())
		requireUpdateItem_ = value["RequireUpdateItem"].asString();
	if(!value["RequireUpdateReason"].isNull())
		requireUpdateReason_ = value["RequireUpdateReason"].asString();
	if(!value["SSLCreateTime"].isNull())
		sSLCreateTime_ = value["SSLCreateTime"].asString();
	if(!value["SSLEnabled"].isNull())
		sSLEnabled_ = value["SSLEnabled"].asString();
	if(!value["SSLExpireTime"].isNull())
		sSLExpireTime_ = value["SSLExpireTime"].asString();
	if(!value["ServerCAUrl"].isNull())
		serverCAUrl_ = value["ServerCAUrl"].asString();
	if(!value["ServerCert"].isNull())
		serverCert_ = value["ServerCert"].asString();
	if(!value["ServerKey"].isNull())
		serverKey_ = value["ServerKey"].asString();
	if(!value["TlsVersion"].isNull())
		tlsVersion_ = value["TlsVersion"].asString();

}

std::string DescribeDBInstanceSSLResult::getClientCertRevocationList()const
{
	return clientCertRevocationList_;
}

std::string DescribeDBInstanceSSLResult::getCAType()const
{
	return cAType_;
}

std::string DescribeDBInstanceSSLResult::getRequireUpdateItem()const
{
	return requireUpdateItem_;
}

std::string DescribeDBInstanceSSLResult::getACL()const
{
	return aCL_;
}

std::string DescribeDBInstanceSSLResult::getLastModifyStatus()const
{
	return lastModifyStatus_;
}

std::string DescribeDBInstanceSSLResult::getRequireUpdate()const
{
	return requireUpdate_;
}

std::string DescribeDBInstanceSSLResult::getModifyStatusReason()const
{
	return modifyStatusReason_;
}

std::string DescribeDBInstanceSSLResult::getClientCACertExpireTime()const
{
	return clientCACertExpireTime_;
}

std::string DescribeDBInstanceSSLResult::getSSLExpireTime()const
{
	return sSLExpireTime_;
}

std::string DescribeDBInstanceSSLResult::getServerKey()const
{
	return serverKey_;
}

std::string DescribeDBInstanceSSLResult::getTlsVersion()const
{
	return tlsVersion_;
}

std::string DescribeDBInstanceSSLResult::getSSLCreateTime()const
{
	return sSLCreateTime_;
}

std::string DescribeDBInstanceSSLResult::getServerCert()const
{
	return serverCert_;
}

std::string DescribeDBInstanceSSLResult::getSSLEnabled()const
{
	return sSLEnabled_;
}

std::string DescribeDBInstanceSSLResult::getForceEncryption()const
{
	return forceEncryption_;
}

std::string DescribeDBInstanceSSLResult::getClientCACert()const
{
	return clientCACert_;
}

std::string DescribeDBInstanceSSLResult::getReplicationACL()const
{
	return replicationACL_;
}

std::string DescribeDBInstanceSSLResult::getRequireUpdateReason()const
{
	return requireUpdateReason_;
}

std::string DescribeDBInstanceSSLResult::getConnectionString()const
{
	return connectionString_;
}

std::string DescribeDBInstanceSSLResult::getServerCAUrl()const
{
	return serverCAUrl_;
}

