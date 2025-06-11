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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSONLINELISTRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSONLINELISTRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamsOnlineListResult : public ServiceResult
			{
			public:
				struct LiveStreamOnlineInfo
				{
					std::string publishUrl;
					int currAudioDataRate;
					std::string streamUrlArgs;
					int currWidth;
					std::string transcodeDrm;
					std::string clientIp;
					int currFrameRate;
					std::string publishType;
					std::string appName;
					int audioDataRate;
					std::string streamName;
					std::string publishDomain;
					int height;
					std::string publishTime;
					int audioCodecId;
					std::string pushDomain;
					int width;
					int videoCodecId;
					int frameRate;
					int currVideoDataRate;
					std::string domainName;
					std::string transcodeId;
					std::string serverIp;
					int currHeight;
					int currVideoCodecId;
					std::string playDomain;
					std::string transcoded;
					int videoDataRate;
				};


				DescribeLiveStreamsOnlineListResult();
				explicit DescribeLiveStreamsOnlineListResult(const std::string &payload);
				~DescribeLiveStreamsOnlineListResult();
				int getTotalNum()const;
				int getTotalPage()const;
				int getPageNum()const;
				int getPageSize()const;
				std::vector<LiveStreamOnlineInfo> getOnlineInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalNum_;
				int totalPage_;
				int pageNum_;
				int pageSize_;
				std::vector<LiveStreamOnlineInfo> onlineInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSONLINELISTRESULT_H_