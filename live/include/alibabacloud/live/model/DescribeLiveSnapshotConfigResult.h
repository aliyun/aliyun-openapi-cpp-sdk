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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESNAPSHOTCONFIGRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESNAPSHOTCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveSnapshotConfigResult : public ServiceResult
			{
			public:
				struct LiveStreamSnapshotConfig
				{
					std::string overwriteOssObject;
					std::string sequenceOssObject;
					std::string callback;
					int timeInterval;
					std::string ossEndpoint;
					std::string domainName;
					std::string createTime;
					std::string ossBucket;
					std::string appName;
				};


				DescribeLiveSnapshotConfigResult();
				explicit DescribeLiveSnapshotConfigResult(const std::string &payload);
				~DescribeLiveSnapshotConfigResult();
				std::string getOrder()const;
				int getTotalNum()const;
				int getPageNum()const;
				int getTotalPage()const;
				int getPageSize()const;
				std::vector<LiveStreamSnapshotConfig> getLiveStreamSnapshotConfigList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string order_;
				int totalNum_;
				int pageNum_;
				int totalPage_;
				int pageSize_;
				std::vector<LiveStreamSnapshotConfig> liveStreamSnapshotConfigList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESNAPSHOTCONFIGRESULT_H_