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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEPARENTPLATFORMSREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEPARENTPLATFORMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeParentPlatformsRequest : public RpcServiceRequest
			{

			public:
				DescribeParentPlatformsRequest();
				~DescribeParentPlatformsRequest();

				std::string getSortDirection()const;
				void setSortDirection(const std::string& sortDirection);
				std::string getGbId()const;
				void setGbId(const std::string& gbId);
				long getPageNum()const;
				void setPageNum(long pageNum);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string sortDirection_;
				std::string gbId_;
				long pageNum_;
				long pageSize_;
				std::string showLog_;
				long ownerId_;
				std::string sortBy_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEPARENTPLATFORMSREQUEST_H_