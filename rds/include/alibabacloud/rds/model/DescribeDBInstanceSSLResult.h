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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESSLRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESSLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceSSLResult : public ServiceResult
			{
			public:


				DescribeDBInstanceSSLResult();
				explicit DescribeDBInstanceSSLResult(const std::string &payload);
				~DescribeDBInstanceSSLResult();
				std::string getClientCertRevocationList()const;
				std::string getCAType()const;
				std::string getRequireUpdateItem()const;
				std::string getACL()const;
				std::string getLastModifyStatus()const;
				std::string getRequireUpdate()const;
				std::string getModifyStatusReason()const;
				std::string getClientCACertExpireTime()const;
				std::string getSSLExpireTime()const;
				std::string getServerKey()const;
				std::string getTlsVersion()const;
				std::string getSSLCreateTime()const;
				std::string getServerCert()const;
				std::string getSSLEnabled()const;
				std::string getForceEncryption()const;
				std::string getClientCACert()const;
				std::string getReplicationACL()const;
				std::string getRequireUpdateReason()const;
				std::string getConnectionString()const;
				std::string getServerCAUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string clientCertRevocationList_;
				std::string cAType_;
				std::string requireUpdateItem_;
				std::string aCL_;
				std::string lastModifyStatus_;
				std::string requireUpdate_;
				std::string modifyStatusReason_;
				std::string clientCACertExpireTime_;
				std::string sSLExpireTime_;
				std::string serverKey_;
				std::string tlsVersion_;
				std::string sSLCreateTime_;
				std::string serverCert_;
				std::string sSLEnabled_;
				std::string forceEncryption_;
				std::string clientCACert_;
				std::string replicationACL_;
				std::string requireUpdateReason_;
				std::string connectionString_;
				std::string serverCAUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESSLRESULT_H_