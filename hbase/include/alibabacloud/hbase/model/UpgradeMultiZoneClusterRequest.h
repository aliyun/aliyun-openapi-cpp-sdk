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

#ifndef ALIBABACLOUD_HBASE_MODEL_UPGRADEMULTIZONECLUSTERREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_UPGRADEMULTIZONECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT UpgradeMultiZoneClusterRequest : public RpcServiceRequest
			{

			public:
				UpgradeMultiZoneClusterRequest();
				~UpgradeMultiZoneClusterRequest();

				std::string getRunMode()const;
				void setRunMode(const std::string& runMode);
				std::string getComponents()const;
				void setComponents(const std::string& components);
				std::string getUpgradeInsName()const;
				void setUpgradeInsName(const std::string& upgradeInsName);
				std::string getRestartComponents()const;
				void setRestartComponents(const std::string& restartComponents);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getVersions()const;
				void setVersions(const std::string& versions);

            private:
				std::string runMode_;
				std::string components_;
				std::string upgradeInsName_;
				std::string restartComponents_;
				std::string clusterId_;
				std::string versions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_UPGRADEMULTIZONECLUSTERREQUEST_H_