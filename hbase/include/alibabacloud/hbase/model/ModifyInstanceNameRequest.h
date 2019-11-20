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

#ifndef ALIBABACLOUD_HBASE_MODEL_MODIFYINSTANCENAMEREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_MODIFYINSTANCENAMEREQUEST_H_

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
			class ALIBABACLOUD_HBASE_EXPORT ModifyInstanceNameRequest : public RpcServiceRequest
			{

			public:
				ModifyInstanceNameRequest();
				~ModifyInstanceNameRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				std::string clientToken_;
				std::string clusterName_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_MODIFYINSTANCENAMEREQUEST_H_