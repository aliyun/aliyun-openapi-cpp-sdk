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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBESHARDDBCONNECTIONINFORESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBESHARDDBCONNECTIONINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeShardDbConnectionInfoResult : public ServiceResult
			{
			public:
				struct ConnectionInfo
				{
					std::string instanceName;
					int preparedStatementCacheSize;
					std::string userName;
					std::string instanceUrl;
					std::string dbStatus;
					std::string subDbName;
					int maxPoolSize;
					std::string connectionProperties;
					int idleTimeOut;
					int minPoolSize;
					std::string dbType;
					int blockingTimeout;
				};


				DescribeShardDbConnectionInfoResult();
				explicit DescribeShardDbConnectionInfoResult(const std::string &payload);
				~DescribeShardDbConnectionInfoResult();
				ConnectionInfo getConnectionInfo()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				ConnectionInfo connectionInfo_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBESHARDDBCONNECTIONINFORESULT_H_