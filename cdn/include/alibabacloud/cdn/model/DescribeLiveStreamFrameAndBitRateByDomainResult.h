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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMFRAMEANDBITRATEBYDOMAINRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMFRAMEANDBITRATEBYDOMAINRESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeLiveStreamFrameAndBitRateByDomainResult : public ServiceResult
			{
			public:
				struct FrameRateAndBitRateInfo
				{
					float videoFrameRate;
					std::string time;
					float audioFrameRate;
					float bitRate;
					std::string streamUrl;
				};


				DescribeLiveStreamFrameAndBitRateByDomainResult();
				explicit DescribeLiveStreamFrameAndBitRateByDomainResult(const std::string &payload);
				~DescribeLiveStreamFrameAndBitRateByDomainResult();
				long getPageSize()const;
				void setPageSize(long pageSize);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				long getCount()const;
				void setCount(long count);
				std::vector<FrameRateAndBitRateInfo> getFrameRateAndBitRateInfos()const;
				void setFrameRateAndBitRateInfos(const std::vector<FrameRateAndBitRateInfo>& frameRateAndBitRateInfos);

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				long pageNumber_;
				long count_;
				std::vector<FrameRateAndBitRateInfo> frameRateAndBitRateInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMFRAMEANDBITRATEBYDOMAINRESULT_H_