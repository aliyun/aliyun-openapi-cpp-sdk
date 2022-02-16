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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITYV2REQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITYV2REQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListScalingActivityV2Request : public RpcServiceRequest
			{

			public:
				ListScalingActivityV2Request();
				~ListScalingActivityV2Request();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageCount()const;
				void setPageCount(int pageCount);
				std::string getOrderMode()const;
				void setOrderMode(const std::string& orderMode);
				std::string getClusterBizId()const;
				void setClusterBizId(const std::string& clusterBizId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getHostGroupName()const;
				void setHostGroupName(const std::string& hostGroupName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScalingGroupBizId()const;
				void setScalingGroupBizId(const std::string& scalingGroupBizId);
				std::string getScalingRuleName()const;
				void setScalingRuleName(const std::string& scalingRuleName);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getLimit()const;
				void setLimit(int limit);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentSize()const;
				void setCurrentSize(int currentSize);
				std::string getOrderField()const;
				void setOrderField(const std::string& orderField);
				std::string getHostGroupId()const;
				void setHostGroupId(const std::string& hostGroupId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				int pageCount_;
				std::string orderMode_;
				std::string clusterBizId_;
				int pageNumber_;
				std::string hostGroupName_;
				std::string accessKeyId_;
				std::string scalingGroupBizId_;
				std::string scalingRuleName_;
				std::string resourceGroupId_;
				std::string regionId_;
				int limit_;
				int pageSize_;
				int currentSize_;
				std::string orderField_;
				std::string hostGroupId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITYV2REQUEST_H_