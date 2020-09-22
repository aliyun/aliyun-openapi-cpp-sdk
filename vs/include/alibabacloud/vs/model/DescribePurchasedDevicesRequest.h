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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICESREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICESREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribePurchasedDevicesRequest : public RpcServiceRequest
			{

			public:
				DescribePurchasedDevicesRequest();
				~DescribePurchasedDevicesRequest();

				std::string getSortDirection()const;
				void setSortDirection(const std::string& sortDirection);
				std::string getType()const;
				void setType(const std::string& type);
				long getPageNum()const;
				void setPageNum(long pageNum);
				std::string getSubType()const;
				void setSubType(const std::string& subType);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);

            private:
				std::string sortDirection_;
				std::string type_;
				long pageNum_;
				std::string subType_;
				std::string vendor_;
				long pageSize_;
				std::string id_;
				std::string showLog_;
				std::string groupId_;
				long ownerId_;
				std::string name_;
				std::string sortBy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICESREQUEST_H_