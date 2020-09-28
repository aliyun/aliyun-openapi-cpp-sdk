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

#ifndef ALIBABACLOUD_HBASE_MODEL_RESIZEMULTIZONECLUSTERNODECOUNTREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_RESIZEMULTIZONECLUSTERNODECOUNTREQUEST_H_

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
			class ALIBABACLOUD_HBASE_EXPORT ResizeMultiZoneClusterNodeCountRequest : public RpcServiceRequest
			{

			public:
				ResizeMultiZoneClusterNodeCountRequest();
				~ResizeMultiZoneClusterNodeCountRequest();

				std::string getPrimaryVSwitchId()const;
				void setPrimaryVSwitchId(const std::string& primaryVSwitchId);
				std::string getStandbyVSwitchId()const;
				void setStandbyVSwitchId(const std::string& standbyVSwitchId);
				int getLogNodeCount()const;
				void setLogNodeCount(int logNodeCount);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getPrimaryCoreNodeCount()const;
				void setPrimaryCoreNodeCount(int primaryCoreNodeCount);
				int getCoreNodeCount()const;
				void setCoreNodeCount(int coreNodeCount);
				int getStandbyCoreNodeCount()const;
				void setStandbyCoreNodeCount(int standbyCoreNodeCount);
				std::string getArbiterVSwitchId()const;
				void setArbiterVSwitchId(const std::string& arbiterVSwitchId);

            private:
				std::string primaryVSwitchId_;
				std::string standbyVSwitchId_;
				int logNodeCount_;
				std::string clusterId_;
				int primaryCoreNodeCount_;
				int coreNodeCount_;
				int standbyCoreNodeCount_;
				std::string arbiterVSwitchId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_RESIZEMULTIZONECLUSTERNODECOUNTREQUEST_H_