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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSCALINGCONFIGITEMV2REQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSCALINGCONFIGITEMV2REQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListScalingConfigItemV2Request : public RpcServiceRequest
			{

			public:
				ListScalingConfigItemV2Request();
				~ListScalingConfigItemV2Request();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageCount()const;
				void setPageCount(int pageCount);
				std::string getOrderMode()const;
				void setOrderMode(const std::string& orderMode);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScalingGroupBizId()const;
				void setScalingGroupBizId(const std::string& scalingGroupBizId);
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
				std::string getConfigItemType()const;
				void setConfigItemType(const std::string& configItemType);

            private:
				long resourceOwnerId_;
				int pageCount_;
				std::string orderMode_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string scalingGroupBizId_;
				std::string resourceGroupId_;
				std::string regionId_;
				int limit_;
				int pageSize_;
				int currentSize_;
				std::string orderField_;
				std::string configItemType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSCALINGCONFIGITEMV2REQUEST_H_