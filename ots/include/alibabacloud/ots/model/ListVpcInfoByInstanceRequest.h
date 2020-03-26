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

#ifndef ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYINSTANCEREQUEST_H_
#define ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ots/OtsExport.h>

namespace AlibabaCloud
{
	namespace Ots
	{
		namespace Model
		{
			class ALIBABACLOUD_OTS_EXPORT ListVpcInfoByInstanceRequest : public RpcServiceRequest
			{

			public:
				ListVpcInfoByInstanceRequest();
				~ListVpcInfoByInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getPageNum()const;
				void setPageNum(long pageNum);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				long getPageSize()const;
				void setPageSize(long pageSize);

            private:
				long resourceOwnerId_;
				long pageNum_;
				std::string accessKeyId_;
				std::string instanceName_;
				long pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYINSTANCEREQUEST_H_