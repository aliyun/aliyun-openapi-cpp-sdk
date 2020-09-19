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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_REGISTERINSTANCEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_REGISTERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT RegisterInstanceRequest : public RpcServiceRequest
			{

			public:
				RegisterInstanceRequest();
				~RegisterInstanceRequest();

				std::string getEcsRegion()const;
				void setEcsRegion(const std::string& ecsRegion);
				int getDdlOnline()const;
				void setDdlOnline(int ddlOnline);
				int getUseDsql()const;
				void setUseDsql(int useDsql);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				long getTid()const;
				void setTid(long tid);
				std::string getSid()const;
				void setSid(const std::string& sid);
				std::string getDataLinkName()const;
				void setDataLinkName(const std::string& dataLinkName);
				std::string getInstanceSource()const;
				void setInstanceSource(const std::string& instanceSource);
				std::string getEnvType()const;
				void setEnvType(const std::string& envType);
				std::string getHost()const;
				void setHost(const std::string& host);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				int getQueryTimeout()const;
				void setQueryTimeout(int queryTimeout);
				std::string getEcsInstanceId()const;
				void setEcsInstanceId(const std::string& ecsInstanceId);
				int getExportTimeout()const;
				void setExportTimeout(int exportTimeout);
				std::string getDatabasePassword()const;
				void setDatabasePassword(const std::string& databasePassword);
				std::string getInstanceAlias()const;
				void setInstanceAlias(const std::string& instanceAlias);
				std::string getDatabaseUser()const;
				void setDatabaseUser(const std::string& databaseUser);
				int getPort()const;
				void setPort(int port);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				long getDbaUid()const;
				void setDbaUid(long dbaUid);
				bool getSkipTest()const;
				void setSkipTest(bool skipTest);
				std::string getSafeRule()const;
				void setSafeRule(const std::string& safeRule);

            private:
				std::string ecsRegion_;
				int ddlOnline_;
				int useDsql_;
				std::string networkType_;
				long tid_;
				std::string sid_;
				std::string dataLinkName_;
				std::string instanceSource_;
				std::string envType_;
				std::string host_;
				std::string instanceType_;
				int queryTimeout_;
				std::string ecsInstanceId_;
				int exportTimeout_;
				std::string databasePassword_;
				std::string instanceAlias_;
				std::string databaseUser_;
				int port_;
				std::string vpcId_;
				long dbaUid_;
				bool skipTest_;
				std::string safeRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_REGISTERINSTANCEREQUEST_H_