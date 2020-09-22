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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICECHANNELSRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICECHANNELSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeDeviceChannelsResult : public ServiceResult
			{
			public:
				struct Channel
				{
					std::string streamId;
					std::string deviceId;
					std::string gbId;
					std::string params;
					std::string deviceStatus;
					std::string streamStatus;
					long channelId;
					std::string name;
				};


				DescribeDeviceChannelsResult();
				explicit DescribeDeviceChannelsResult(const std::string &payload);
				~DescribeDeviceChannelsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNum()const;
				long getPageCount()const;
				std::vector<Channel> getChannels()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNum_;
				long pageCount_;
				std::vector<Channel> channels_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICECHANNELSRESULT_H_