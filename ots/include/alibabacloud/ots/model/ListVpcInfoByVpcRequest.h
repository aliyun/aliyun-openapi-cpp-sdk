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

#ifndef ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYVPCREQUEST_H_
#define ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYVPCREQUEST_H_

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
			class ALIBABACLOUD_OTS_EXPORT ListVpcInfoByVpcRequest : public RpcServiceRequest
			{
			public:
				struct TagInfo
				{
					std::string tagValue;
					std::string tagKey;
				};

			public:
				ListVpcInfoByVpcRequest();
				~ListVpcInfoByVpcRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getPageNum()const;
				void setPageNum(long pageNum);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::vector<TagInfo> getTagInfo()const;
				void setTagInfo(const std::vector<TagInfo>& tagInfo);

            private:
				long resourceOwnerId_;
				long pageNum_;
				std::string accessKeyId_;
				std::string vpcId_;
				long pageSize_;
				std::vector<TagInfo> tagInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYVPCREQUEST_H_