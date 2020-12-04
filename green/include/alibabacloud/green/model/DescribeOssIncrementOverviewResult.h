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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSINCREMENTOVERVIEWRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSINCREMENTOVERVIEWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeOssIncrementOverviewResult : public ServiceResult
			{
			public:


				DescribeOssIncrementOverviewResult();
				explicit DescribeOssIncrementOverviewResult(const std::string &payload);
				~DescribeOssIncrementOverviewResult();
				int getImageCount()const;
				int getVideoCount()const;
				int getVoiceAntispamUnhandleCount()const;
				int getPornUnhandleCount()const;
				int getLiveUnhandleCount()const;
				int getAudioCount()const;
				int getVideoFrameCount()const;
				int getTerrorismUnhandleCount()const;
				int getAdUnhandleCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int imageCount_;
				int videoCount_;
				int voiceAntispamUnhandleCount_;
				int pornUnhandleCount_;
				int liveUnhandleCount_;
				int audioCount_;
				int videoFrameCount_;
				int terrorismUnhandleCount_;
				int adUnhandleCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSINCREMENTOVERVIEWRESULT_H_