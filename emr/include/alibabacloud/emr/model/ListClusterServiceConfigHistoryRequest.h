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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICECONFIGHISTORYREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICECONFIGHISTORYREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListClusterServiceConfigHistoryRequest : public RpcServiceRequest
			{

			public:
				ListClusterServiceConfigHistoryRequest();
				~ListClusterServiceConfigHistoryRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getHostInstanceId()const;
				void setHostInstanceId(const std::string& hostInstanceId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getConfigVersion()const;
				void setConfigVersion(const std::string& configVersion);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getAuthor()const;
				void setAuthor(const std::string& author);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getConfigFileName()const;
				void setConfigFileName(const std::string& configFileName);
				std::string getConfigItemKey()const;
				void setConfigItemKey(const std::string& configItemKey);
				std::string getHostGroupId()const;
				void setHostGroupId(const std::string& hostGroupId);
				std::string getComment()const;
				void setComment(const std::string& comment);

            private:
				long resourceOwnerId_;
				std::string hostInstanceId_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string configVersion_;
				std::string regionId_;
				int pageSize_;
				std::string serviceName_;
				std::string author_;
				std::string clusterId_;
				std::string configFileName_;
				std::string configItemKey_;
				std::string hostGroupId_;
				std::string comment_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICECONFIGHISTORYREQUEST_H_