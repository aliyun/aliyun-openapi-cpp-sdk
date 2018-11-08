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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEPLAYTOPVIDEOSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEPLAYTOPVIDEOSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribePlayTopVideosRequest : public RpcServiceRequest
			{

			public:
				DescribePlayTopVideosRequest();
				~DescribePlayTopVideosRequest();

				std::string getBizDate()const;
				void setBizDate(const std::string& bizDate);
				long getPageNo()const;
				void setPageNo(long pageNo);
				long getPageSize()const;
				void setPageSize(long pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string bizDate_;
				long pageNo_;
				long pageSize_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEPLAYTOPVIDEOSREQUEST_H_