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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMSONLINELISTRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMSONLINELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeLiveStreamsOnlineListResult : public ServiceResult
			{
			public:
				struct LiveStreamOnlineInfo
				{
					std::string publishUrl;
					std::string streamName;
					std::string domainName;
					std::string publishTime;
					std::string appName;
				};


				DescribeLiveStreamsOnlineListResult();
				explicit DescribeLiveStreamsOnlineListResult(const std::string &payload);
				~DescribeLiveStreamsOnlineListResult();
				std::vector<LiveStreamOnlineInfo> getOnlineInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<LiveStreamOnlineInfo> onlineInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMSONLINELISTRESULT_H_