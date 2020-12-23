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

#ifndef ALIBABACLOUD_HBASE_MODEL_RELATEDBFORHBASEHAREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_RELATEDBFORHBASEHAREQUEST_H_

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
			class ALIBABACLOUD_HBASE_EXPORT RelateDbForHBaseHaRequest : public RpcServiceRequest
			{

			public:
				RelateDbForHBaseHaRequest();
				~RelateDbForHBaseHaRequest();

				std::string getHaMigrateType()const;
				void setHaMigrateType(const std::string& haMigrateType);
				std::string getHaActiveHdfsUri()const;
				void setHaActiveHdfsUri(const std::string& haActiveHdfsUri);
				std::string getHaStandbyVersion()const;
				void setHaStandbyVersion(const std::string& haStandbyVersion);
				bool getIsStandbyStandard()const;
				void setIsStandbyStandard(bool isStandbyStandard);
				std::string getHaActiveClusterKey()const;
				void setHaActiveClusterKey(const std::string& haActiveClusterKey);
				std::string getHaStandbyPassword()const;
				void setHaStandbyPassword(const std::string& haStandbyPassword);
				std::string getHaStandbyClusterKey()const;
				void setHaStandbyClusterKey(const std::string& haStandbyClusterKey);
				std::string getHaStandbyHbaseFsDir()const;
				void setHaStandbyHbaseFsDir(const std::string& haStandbyHbaseFsDir);
				std::string getHaActiveHbaseFsDir()const;
				void setHaActiveHbaseFsDir(const std::string& haActiveHbaseFsDir);
				std::string getHaActiveDBType()const;
				void setHaActiveDBType(const std::string& haActiveDBType);
				std::string getHaActivePassword()const;
				void setHaActivePassword(const std::string& haActivePassword);
				bool getIsActiveStandard()const;
				void setIsActiveStandard(bool isActiveStandard);
				std::string getHaStandbyUser()const;
				void setHaStandbyUser(const std::string& haStandbyUser);
				std::string getHaActive()const;
				void setHaActive(const std::string& haActive);
				std::string getHaStandby()const;
				void setHaStandby(const std::string& haStandby);
				std::string getHaStandbyHdfsUri()const;
				void setHaStandbyHdfsUri(const std::string& haStandbyHdfsUri);
				std::string getHaActiveVersion()const;
				void setHaActiveVersion(const std::string& haActiveVersion);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getHaStandbyDBType()const;
				void setHaStandbyDBType(const std::string& haStandbyDBType);
				std::string getHaTables()const;
				void setHaTables(const std::string& haTables);
				std::string getHaActiveUser()const;
				void setHaActiveUser(const std::string& haActiveUser);

            private:
				std::string haMigrateType_;
				std::string haActiveHdfsUri_;
				std::string haStandbyVersion_;
				bool isStandbyStandard_;
				std::string haActiveClusterKey_;
				std::string haStandbyPassword_;
				std::string haStandbyClusterKey_;
				std::string haStandbyHbaseFsDir_;
				std::string haActiveHbaseFsDir_;
				std::string haActiveDBType_;
				std::string haActivePassword_;
				bool isActiveStandard_;
				std::string haStandbyUser_;
				std::string haActive_;
				std::string haStandby_;
				std::string haStandbyHdfsUri_;
				std::string haActiveVersion_;
				std::string clusterId_;
				std::string haStandbyDBType_;
				std::string haTables_;
				std::string haActiveUser_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_RELATEDBFORHBASEHAREQUEST_H_