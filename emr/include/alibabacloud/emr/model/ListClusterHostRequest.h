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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListClusterHostRequest : public RpcServiceRequest
			{

			public:
				ListClusterHostRequest();
				~ListClusterHostRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getHostInstanceId()const;
				void setHostInstanceId(const std::string& hostInstanceId);
				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				std::string getComponentName()const;
				void setComponentName(const std::string& componentName);
				std::string getPublicIp()const;
				void setPublicIp(const std::string& publicIp);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getGroupType()const;
				void setGroupType(const std::string& groupType);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPrivateIp()const;
				void setPrivateIp(const std::string& privateIp);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getHostGroupId()const;
				void setHostGroupId(const std::string& hostGroupId);

            private:
				long resourceOwnerId_;
				std::string hostInstanceId_;
				std::vector<std::string> statusList_;
				std::string componentName_;
				std::string publicIp_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string hostName_;
				std::string groupType_;
				std::string regionId_;
				int pageSize_;
				std::string privateIp_;
				std::string clusterId_;
				std::string hostGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTREQUEST_H_