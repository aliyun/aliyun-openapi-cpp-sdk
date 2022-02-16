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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListClustersRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				ListClustersRequest();
				~ListClustersRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				bool getIsDesc()const;
				void setIsDesc(bool isDesc);
				std::string getDepositType()const;
				void setDepositType(const std::string& depositType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getMachineType()const;
				void setMachineType(const std::string& machineType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getCreateType()const;
				void setCreateType(const std::string& createType);
				std::vector<std::string> getExpiredTagList()const;
				void setExpiredTagList(const std::vector<std::string>& expiredTagList);
				bool getDefaultStatus()const;
				void setDefaultStatus(bool defaultStatus);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<std::string> getClusterTypeList()const;
				void setClusterTypeList(const std::vector<std::string>& clusterTypeList);

            private:
				long resourceOwnerId_;
				std::vector<std::string> statusList_;
				bool isDesc_;
				std::string depositType_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string machineType_;
				std::string resourceGroupId_;
				std::string regionId_;
				int pageSize_;
				std::vector<Tag> tag_;
				std::string createType_;
				std::vector<std::string> expiredTagList_;
				bool defaultStatus_;
				std::string vpcId_;
				std::string name_;
				std::vector<std::string> clusterTypeList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSREQUEST_H_