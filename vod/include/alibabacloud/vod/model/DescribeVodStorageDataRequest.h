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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODSTORAGEDATAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODSTORAGEDATAREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT DescribeVodStorageDataRequest : public RpcServiceRequest
			{

			public:
				DescribeVodStorageDataRequest();
				~DescribeVodStorageDataRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getStorage()const;
				void setStorage(const std::string& storage);
				std::string getStorageType()const;
				void setStorageType(const std::string& storageType);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInterval()const;
				void setInterval(const std::string& interval);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string startTime_;
				std::string storage_;
				std::string storageType_;
				std::string endTime_;
				long ownerId_;
				std::string interval_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODSTORAGEDATAREQUEST_H_