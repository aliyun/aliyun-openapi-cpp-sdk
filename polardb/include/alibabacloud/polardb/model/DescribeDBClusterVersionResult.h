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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERVERSIONRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERVERSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterVersionResult : public ServiceResult
			{
			public:
				struct DBRevisionVersionListItem
				{
					std::string releaseType;
					std::string revisionVersionName;
					std::string releaseNote;
					std::string revisionVersionCode;
				};
				struct ProxyRevisionVersionListItem
				{
					std::string releaseType;
					std::string revisionVersionName;
					std::string releaseNote;
					std::string revisionVersionCode;
				};


				DescribeDBClusterVersionResult();
				explicit DescribeDBClusterVersionResult(const std::string &payload);
				~DescribeDBClusterVersionResult();
				std::string getDBRevisionVersion()const;
				std::vector<ProxyRevisionVersionListItem> getProxyRevisionVersionList()const;
				std::string getProxyLatestVersionAfterDBEngineUpgraded()const;
				std::string getDBClusterId()const;
				std::string getProxyRevisionVersion()const;
				std::string getDBLatestVersion()const;
				std::string getProxyLatestVersion()const;
				std::string getProxyVersionStatus()const;
				std::string getIsLatestVersion()const;
				std::string getIsProxyLatestVersion()const;
				std::string getDBVersion()const;
				std::string getDBVersionStatus()const;
				std::string getDBMinorVersion()const;
				std::vector<DBRevisionVersionListItem> getDBRevisionVersionList()const;
				std::string getDBInnerRevisionVersion()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBRevisionVersion_;
				std::vector<ProxyRevisionVersionListItem> proxyRevisionVersionList_;
				std::string proxyLatestVersionAfterDBEngineUpgraded_;
				std::string dBClusterId_;
				std::string proxyRevisionVersion_;
				std::string dBLatestVersion_;
				std::string proxyLatestVersion_;
				std::string proxyVersionStatus_;
				std::string isLatestVersion_;
				std::string isProxyLatestVersion_;
				std::string dBVersion_;
				std::string dBVersionStatus_;
				std::string dBMinorVersion_;
				std::vector<DBRevisionVersionListItem> dBRevisionVersionList_;
				std::string dBInnerRevisionVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERVERSIONRESULT_H_