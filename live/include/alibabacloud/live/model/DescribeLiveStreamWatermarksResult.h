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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMWATERMARKSRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMWATERMARKSRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamWatermarksResult : public ServiceResult
			{
			public:
				struct Watermark
				{
					int ruleCount;
					int refHeight;
					int transparency;
					std::string description;
					float yOffset;
					std::string offsetCorner;
					float xOffset;
					int refWidth;
					std::string name;
					int type;
					std::string pictureUrl;
					int height;
					std::string templateId;
				};


				DescribeLiveStreamWatermarksResult();
				explicit DescribeLiveStreamWatermarksResult(const std::string &payload);
				~DescribeLiveStreamWatermarksResult();
				std::vector<Watermark> getWatermarkList()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Watermark> watermarkList_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMWATERMARKSRESULT_H_